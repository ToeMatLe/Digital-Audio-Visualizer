/* Parameterized radix-2 FFT.
 * Inputs are complex Q1.15 values packed as {real[15:0], imag[15:0]}.
 * For real audio input, fifo.sv should provide {sample, 16'b0}.
 */
module fft
    #(parameter WIDTH = 32,
      parameter POINTS = 16,
      parameter MAX_POINTS = 128)
    (
        input logic [WIDTH-1:0] in [0:POINTS-1],
        input logic clk,
        input logic rst,
        input logic start,
        output logic [WIDTH-1:0] out [0:POINTS-1],
        output logic done
    );

    // EX: 16 point takes 2^4 = 4 stages, 64 point takes 2^6 = 6 stages, 128 point takes 2^7 = 7 stages
    localparam STAGES = $clog2(POINTS);

    // State machine for controlling the FFT computation
    typedef enum logic [1:0] {
		IDLE = 2'b00,       // IDLE    = waiting for start
		COMPUTE = 2'b01,    // COMPUTE = doing butterfly operations
		OUTPUT = 2'b10      // OUTPUT  = copying final data to out[]
	} statetype;
    statetype state;

    // Hold values to do operations
    logic [WIDTH-1:0] data [0:POINTS-1];
    logic [WIDTH-1:0] bu_A, bu_B, bu_W, bu_out0, bu_out1;


    int unsigned stage_index;   // FFT stage
    int unsigned group_index;   // Which butterfly group within stage (0 to N/(2*stage_size)-1)
    int unsigned pair_index;    // Which butterfly pair within group (0 to stage_size/2-1)
    int unsigned index_a;       // Sample of first index of butterfly pair
    int unsigned index_b;       // Sample of second index of butterfly pair
    int unsigned half_size;     // Half the size of the butterfly group for current stage (stage_size/2)
    int unsigned stage_size;    // Number of points in butterfly group for current stage (2^stage_index)
    int unsigned twiddle_index; // Which twiddle factor to use for current butterfly pair (pair_index * N/(2*stage_size))
    int unsigned twiddle_rom_index; // Which twiddle factor to use for current butterfly pair, scaled to the size of the ROM (twiddle_index * TWIDDLE_SCALE)

	// Uses one butterfly unit per stage, reusing it for all pairs in the stage (Pipeline later?)
    butterfly_unit #(.WIDTH(WIDTH)) bu (
        .A(bu_A),
        .B(bu_B),
        .W(bu_W),
        .out0(bu_out0),
        .out1(bu_out1)
    );

    // Function to reverse bits for because FFT algorithm requires input in bit-reversed order. For example, with 16 points:
    // index:  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15
    // bits:   0000 0001 0010 0011 0100 0101 0110 0111 1000 1001 1010 1011 1100 1101 1110 1111
    // rev:    0000 1000 0100 1100 0010 1010 0110 1110 0001 1001 0101 1101 0011 1010 0110 1111  
    // in[1] goes to data[8], in[2] goes to data[4], in[3] goes to data[12], etc.
    function automatic int unsigned bit_reverse(input int unsigned value);
        int unsigned reversed;
        begin
            reversed = 0;
            for (int i = 0; i < STAGES; i++) begin
                reversed = (reversed << 1) | ((value >> i) & 1);
            end

            bit_reverse = reversed;
        end
    endfunction

    // EX: 128/16 = 8, so we take every 8th twiddle factor from table
    localparam TWIDDLE_SCALE = MAX_POINTS / POINTS;
	// W_N^k = cos(2πk/N) - j sin(2πk/N) 
    function automatic logic [WIDTH-1:0] twiddle_factor(input int unsigned index);
        begin
            twiddle_factor = '0;

            case (index[6:0])
                7'd0: twiddle_factor = 32'h7FFF_0000; // 32767, 0
                7'd1: twiddle_factor = 32'h7FD8_F9B8; // 32728, -1608
                7'd2: twiddle_factor = 32'h7F61_F374; // 32609, -3212
                7'd3: twiddle_factor = 32'h7E9C_ED38; // 32412, -4808
                7'd4: twiddle_factor = 32'h7D89_E707; // 32137, -6393
                7'd5: twiddle_factor = 32'h7C29_E0E6; // 31785, -7962
                7'd6: twiddle_factor = 32'h7A7C_DAD8; // 31356, -9512
                7'd7: twiddle_factor = 32'h7884_D4E1; // 30852, -11039
                7'd8: twiddle_factor = 32'h7641_CF05; // 30273, -12539
                7'd9: twiddle_factor = 32'h73B5_C946; // 29621, -14010
                7'd10: twiddle_factor = 32'h70E2_C3AA; // 28898, -15446
                7'd11: twiddle_factor = 32'h6DC9_BE32; // 28105, -16846
                7'd12: twiddle_factor = 32'h6A6D_B8E4; // 27245, -18204
                7'd13: twiddle_factor = 32'h66CF_B3C1; // 26319, -19519
                7'd14: twiddle_factor = 32'h62F1_AECD; // 25329, -20787
                7'd15: twiddle_factor = 32'h5ED7_AA0B; // 24279, -22005
                7'd16: twiddle_factor = 32'h5A82_A57E; // 23170, -23170
                7'd17: twiddle_factor = 32'h55F5_A129; // 22005, -24279
                7'd18: twiddle_factor = 32'h5133_9D0F; // 20787, -25329
                7'd19: twiddle_factor = 32'h4C3F_9931; // 19519, -26319
                7'd20: twiddle_factor = 32'h471C_9593; // 18204, -27245
                7'd21: twiddle_factor = 32'h41CE_9237; // 16846, -28105
                7'd22: twiddle_factor = 32'h3C56_8F1E; // 15446, -28898
                7'd23: twiddle_factor = 32'h36BA_8C4B; // 14010, -29621
                7'd24: twiddle_factor = 32'h30FB_89BF; // 12539, -30273
                7'd25: twiddle_factor = 32'h2B1F_877C; // 11039, -30852
                7'd26: twiddle_factor = 32'h2528_8584; // 9512, -31356
                7'd27: twiddle_factor = 32'h1F1A_83D7; // 7962, -31785
                7'd28: twiddle_factor = 32'h18F9_8277; // 6393, -32137
                7'd29: twiddle_factor = 32'h12C8_8164; // 4808, -32412
                7'd30: twiddle_factor = 32'h0C8C_809F; // 3212, -32609
                7'd31: twiddle_factor = 32'h0648_8028; // 1608, -32728
                7'd32: twiddle_factor = 32'h0000_8001; // 0, -32767
                7'd33: twiddle_factor = 32'hF9B8_8028; // -1608, -32728
                7'd34: twiddle_factor = 32'hF374_809F; // -3212, -32609
                7'd35: twiddle_factor = 32'hED38_8164; // -4808, -32412
                7'd36: twiddle_factor = 32'hE707_8277; // -6393, -32137
                7'd37: twiddle_factor = 32'hE0E6_83D7; // -7962, -31785
                7'd38: twiddle_factor = 32'hDAD8_8584; // -9512, -31356
                7'd39: twiddle_factor = 32'hD4E1_877C; // -11039, -30852
                7'd40: twiddle_factor = 32'hCF05_89BF; // -12539, -30273
                7'd41: twiddle_factor = 32'hC946_8C4B; // -14010, -29621
                7'd42: twiddle_factor = 32'hC3AA_8F1E; // -15446, -28898
                7'd43: twiddle_factor = 32'hBE32_9237; // -16846, -28105
                7'd44: twiddle_factor = 32'hB8E4_9593; // -18204, -27245
                7'd45: twiddle_factor = 32'hB3C1_9931; // -19519, -26319
                7'd46: twiddle_factor = 32'hAECD_9D0F; // -20787, -25329
                7'd47: twiddle_factor = 32'hAA0B_A129; // -22005, -24279
                7'd48: twiddle_factor = 32'hA57E_A57E; // -23170, -23170
                7'd49: twiddle_factor = 32'hA129_AA0B; // -24279, -22005
                7'd50: twiddle_factor = 32'h9D0F_AECD; // -25329, -20787
                7'd51: twiddle_factor = 32'h9931_B3C1; // -26319, -19519
                7'd52: twiddle_factor = 32'h9593_B8E4; // -27245, -18204
                7'd53: twiddle_factor = 32'h9237_BE32; // -28105, -16846
                7'd54: twiddle_factor = 32'h8F1E_C3AA; // -28898, -15446
                7'd55: twiddle_factor = 32'h8C4B_C946; // -29621, -14010
                7'd56: twiddle_factor = 32'h89BF_CF05; // -30273, -12539
                7'd57: twiddle_factor = 32'h877C_D4E1; // -30852, -11039
                7'd58: twiddle_factor = 32'h8584_DAD8; // -31356, -9512
                7'd59: twiddle_factor = 32'h83D7_E0E6; // -31785, -7962
                7'd60: twiddle_factor = 32'h8277_E707; // -32137, -6393
                7'd61: twiddle_factor = 32'h8164_ED38; // -32412, -4808
                7'd62: twiddle_factor = 32'h809F_F374; // -32609, -3212
                7'd63: twiddle_factor = 32'h8028_F9B8; // -32728, -1608
                default: twiddle_factor = 32'h7FFF_0000;
            endcase
        end
    endfunction

    always_comb begin
		// Calculate indices and twiddle factor for the current butterfly operation
        stage_size = 2 << stage_index;
        half_size = 1 << stage_index;
        index_a = group_index + pair_index;
        index_b = index_a + half_size;
        twiddle_index = pair_index * (POINTS >> (stage_index + 1));
        twiddle_rom_index = twiddle_index * TWIDDLE_SCALE;

        bu_A = '0;
        bu_B = '0;
        bu_W = twiddle_factor(twiddle_rom_index);

        if (state == COMPUTE) begin
            bu_A = data[index_a];
            bu_B = data[index_b];
        end
    end

    always_ff @(posedge clk, posedge rst) begin
        if (rst) begin
            state <= IDLE;
            stage_index <= 0;
            group_index <= 0;
            pair_index <= 0;
            done <= 1'b0;

            for (int i = 0; i < POINTS; i++) begin
                data[i] <= '0;
                out[i] <= '0;
            end
        end else begin
            done <= 1'b0;

            case (state)
                IDLE: begin
                    if (start) begin
                        for (int i = 0; i < POINTS; i++) begin
                            data[bit_reverse(i)] <= in[i];
                        end

                        stage_index <= 0;
                        group_index <= 0;
                        pair_index <= 0;
                        state <= COMPUTE;
                    end
                end

                COMPUTE: begin
                    data[index_a] <= bu_out0;
                    data[index_b] <= bu_out1;

                    if ((stage_index == STAGES - 1) &&
                        (group_index == POINTS - stage_size) &&
                        (pair_index == half_size - 1)) begin
                        state <= OUTPUT;
                    end else if (pair_index == half_size - 1) begin
                        pair_index <= 0;

                        if (group_index == POINTS - stage_size) begin
                            group_index <= 0;
                            stage_index <= stage_index + 1;
                        end else begin
                            group_index <= group_index + stage_size;
                        end
                    end else begin
                        pair_index <= pair_index + 1;
                    end
                end

                OUTPUT: begin
                    for (int i = 0; i < POINTS; i++) begin
                        out[i] <= data[i];
                    end

                    done <= 1'b1;
                    state <= IDLE;
                end

                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule
