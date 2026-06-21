module magnitude
    #(parameter POINTS = 16,
      parameter BARS = POINTS / 2)
    (
        input  logic clk,
        input  logic rst,
        input  logic fft_done,
        input  logic [7:0] point_count,
        input  logic [31:0] fft_out [0:POINTS-1],
        output logic [9:0] bar_heights [0:BARS-1],
        output logic magnitudes_ready
    );

    function automatic logic [16:0] abs16(input logic signed [15:0] value);
        begin
            if (value[15])
                abs16 = {1'b0, ~value} + 17'd1;
            else
                abs16 = {1'b0, value};
        end
    endfunction

    logic signed [15:0] real_part;
    logic signed [15:0] imag_part;
    logic [17:0] approx_mag;
    logic [17:0] scaled_height;
    logic [9:0] target_height;
    int unsigned active_bins;
    int unsigned scale_shift;
    int unsigned bin_index;

    always_ff @(posedge clk, posedge rst) begin
        if (rst) begin
            magnitudes_ready <= 1'b0;

            for (int i = 0; i < BARS; i++) begin
                bar_heights[i] <= '0;
            end
        end else begin
            magnitudes_ready <= 1'b0;

            if (fft_done) begin
                case (point_count)
                    8'd16: begin
                        active_bins = 8;
                        scale_shift = 4;
                    end

                    8'd64: begin
                        active_bins = 32;
                        scale_shift = 2;
                    end

                    default: begin
                        active_bins = 64;
                        scale_shift = 1;
                    end
                endcase

                for (int i = 0; i < BARS; i++) begin
                    if (i < active_bins) begin
                        bin_index = i + 1;
                        real_part = fft_out[bin_index][31:16];
                        imag_part = fft_out[bin_index][15:0];
                        approx_mag = abs16(real_part) + abs16(imag_part);
                        scaled_height = approx_mag >> scale_shift;

                        if (scaled_height > 18'd470)
                            target_height = 10'd470;
                        else
                            target_height = scaled_height[9:0];

                        bar_heights[i] <= target_height;
                    end else begin
                        bar_heights[i] <= '0;
                    end
                end

                magnitudes_ready <= 1'b1;
            end
        end
    end

endmodule
