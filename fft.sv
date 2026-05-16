/* 16-point FFT */
/* Four stages */
module fft
	#(parameter WIDTH = 32)(
		input logic [WIDTH-1:0] in [0:15],
		input logic clk,
		input logic rst,
		input logic start,
		output logic [WIDTH-1:0] out [0:15],
		output logic done
    );
    
    // Define states
    typedef enum logic [2:0] {RESET, STAGE1, STAGE2, STAGE3, STAGE4, DONE} statetype;
	statetype [1:0] state, nextstate;
    
    // Internal signals
    logic [WIDTH-1:0] bu_A [0:7], bu_B [0:7], bu_W [0:7], bu_out0 [0:7], bu_out1 [0:7];
    logic [WIDTH-1:0] im1_pos [0:7], im1_neg[0:7];	// Intermediates between stages 1 and 2
    logic [WIDTH-1:0] im2_pos [0:7], im2_neg[0:7];	// Intermediates between stages 2 and 3
    logic [WIDTH-1:0] im3_pos [0:7], im3_neg[0:7];	// Intermediates between stages 3 and 4
    
    // Twiddle factors:	 	real				imaginary	
	// k = 0, n = 16
	localparam W00_16 = 32'b0111_1111_1111_1111_0000_0000_0000_0000;	// re: 32767, im: 0
	// k = 1, n = 16
	localparam W01_16 = 32'b0111_0110_0100_0001_1100_1111_0000_0101;	// re: 30273, im: -12539
	// k = 2, n = 16
	localparam W02_16 = 32'b0101_1010_1000_0010_1010_0101_0111_1110;	// re: 23170, im: -23170
	// k = 3, n = 16
	localparam W03_16 = 32'b0011_0000_1111_1011_1000_1001_1011_1111;	// re: 12539, im: -30273
	// k = 4, n = 16
	localparam W04_16 = 32'b0000_0000_0000_0000_1000_0000_0000_0001;	// re: 0, im: -32767
	// k = 5, n = 16
	localparam W05_16 = 32'b1100_1111_0000_0101_1000_1001_1011_1111;	// re: -12539, im: -30273
	// k = 6, n = 16
	localparam W06_16 = 32'b1010_0101_0111_1110_1010_0101_0111_1110;	// re: -23170, im: -23170
	// k = 7, n = 16
	localparam W07_16 = 32'b1000_1001_1011_1111_1100_1111_0000_0101;	// re: -30273, im: -12539
	/* Due to symmetry, twiddle factors k = 8-15 are not necessary. */
    
    // Butterfly unit instantiations
    /* Eight butterfly units per stage; these will be shared between stages and reused */
    genvar i;
    generate
    	for (i = 0; i < 8; i++) begin: BU
    		butterfly_unit bu(
    			.A(bu_A[i]),
    			.B(bu_B[i]),
    			.W(bu_W[i]),
    			.out0(bu_out0[i]),
    			.out1(bu_out1[i])
    		);
    	end
    endgenerate
    
    // State register
    always_ff @(posedge clk, posedge rst) begin
    	if (rst) state <= RESET;
    	else state <= nextstate;
    	
    	case (state)
    		RESET:	;
    		STAGE1: begin
    			im1_pos[0] <= bu_out0[0];
    			im1_neg[0] <= bu_out1[0];
    			im1_pos[1] <= bu_out0[1];
    			im1_neg[1] <= bu_out1[1];
    			im1_pos[2] <= bu_out0[2];
    			im1_neg[2] <= bu_out1[2];
    			im1_pos[3] <= bu_out0[3];
    			im1_neg[3] <= bu_out1[3];
    			im1_pos[4] <= bu_out0[4];
    			im1_neg[4] <= bu_out1[4];
    			im1_pos[5] <= bu_out0[5];
    			im1_neg[5] <= bu_out1[5];
    			im1_pos[6] <= bu_out0[6];
    			im1_neg[6] <= bu_out1[6];
    			im1_pos[7] <= bu_out0[7];
    			im1_pos[7] <= bu_out1[7];
    		end
    		STAGE2: begin
				im2_pos[0] <= bu_out0[0];
    			im2_neg[0] <= bu_out1[0];
    			im2_pos[1] <= bu_out0[1];
    			im2_neg[1] <= bu_out1[1];
    			im2_pos[2] <= bu_out0[2];
    			im2_neg[2] <= bu_out1[2];
    			im2_pos[3] <= bu_out0[3];
    			im2_neg[3] <= bu_out1[3];
    			im2_pos[4] <= bu_out0[4];
    			im2_neg[4] <= bu_out1[4];
    			im2_pos[5] <= bu_out0[5];
    			im2_neg[5] <= bu_out1[5];
    			im2_pos[6] <= bu_out0[6];
    			im2_neg[6] <= bu_out1[6];
    			im2_pos[7] <= bu_out0[7];
    			im2_pos[7] <= bu_out1[7];
    		end
    		STAGE3: begin
				im3_pos[0] <= bu_out0[0];
    			im3_neg[0] <= bu_out1[0];
    			im3_pos[1] <= bu_out0[1];
    			im3_neg[1] <= bu_out1[1];
    			im3_pos[2] <= bu_out0[2];
    			im3_neg[2] <= bu_out1[2];
    			im3_pos[3] <= bu_out0[3];
    			im3_neg[3] <= bu_out1[3];
    			im3_pos[4] <= bu_out0[4];
    			im3_neg[4] <= bu_out1[4];
    			im3_pos[5] <= bu_out0[5];
    			im3_neg[5] <= bu_out1[5];
    			im3_pos[6] <= bu_out0[6];
    			im3_neg[6] <= bu_out1[6];
    			im3_pos[7] <= bu_out0[7];
    			im3_pos[7] <= bu_out1[7];
    		end
    		STAGE4: begin
    		
    		end
    		DONE:
    	
    	endcase
    end
    
    // Next state logic
    always_comb
    	case (state)
    		RESET:
    			if (start) 
    				nextstate = STAGE1;
    		STAGE1:
    			nextstate = STAGE2;
    		STAGE2:
    			nextstate = STAGE3;
    		STAGE3:
    			nextstate = STAGE4;
    		STAGE4:
    			nextstate = DONE;
    		DONE:
    			if (rst)
    				nextstate = RESET;
    		default:
    			nextstate = RESET;
    	endcase
   
    // WORK ON THIS NEXT 5/12/2026!!!
    // Output logic
    always_comb begin
    	case (state)
    		RESET: begin

			end
			STAGE1: begin
				// Butterfly unit 1
				bu_A[0] = in[0];
				bu_B[0] = in[8];
				bu_W[0] = W00_16;
				im1_pos[0] = bu_out0[0];
				im1_neg[0] = bu_out1[0];
				// Butterfly unit 2
				bu_A[1] = in[4];
				bu_B[1] = in[12];
				bu_W[1] = W00_16;
				im1_pos[1] = bu_out0[1];
				im1_neg[1] = bu_out1[1];
				// Butterfly unit 3
				bu_A[2] = in[2];
				bu_B[2] = in[10];
				bu_W[2] = W00_16;
				im1_pos[2] = bu_out0[2];
				im1_neg[2] = bu_out1[2];
				// Butterfly unit 4
				bu_A[3] = in[6];
				bu_B[3] = in[14];
				bu_W[3] = W00_16;
				im1_pos[3] = bu_out0[3];
				im1_neg[3] = bu_out1[3];
				// Butterfly unit 5
				bu_A[4] = in[1];
				bu_B[4] = in[9];
				bu_W[4] = W00_16;
				im1_pos[4] = bu_out0[4];
				im1_neg[4] = bu_out1[4];
				// Butterfly unit 6
				bu_A[5] = in[5];
				bu_B[5] = in[13];
				bu_W[5] = W00_16;
				im1_pos[5] = bu_out0[5];
				im1_neg[5] = bu_out1[5];
				// Butterfly unit 7
				bu_A[6] = in[3];
				bu_B[6] = in[11];
				bu_W[6] = W00_16;
				im1_pos[6] = bu_out0[6];
				im1_neg[6] = bu_out1[6];
				// Butterfly unit 8
				bu_A[7] = in[7];
				bu_B[7] = in[15];
				bu_W[7] = W00_16;
				im1_pos[7] = bu_out0[7];
				im1_neg[7] = bu_out1[7];
			end	
			STAGE2: begin
				// Butterfly unit 1
				bu_A[0] = im1_pos[0];
				bu_B[0] = im1_pos[1];
				bu_W[0] = W00_16;
				im2_pos[0] = bu_out0[0];
				im2_neg[0] = bu_out1[0];
				// Butterfly unit 2
				bu_A[1] = im1_neg[0];
				bu_B[1] = im1_neg[1];
				bu_W[1] = W00_16;
				im2_pos[1] = bu_out0[1];
				im2_neg[1] = bu_out1[1];
				// Butterfly unit 3
				bu_A[2] = im1_pos[2];
				bu_B[2] = im1_pos[3];
				bu_W[2] = W00_16;
				im2_pos[2] = bu_out0[2];
				im2_neg[2] = bu_out1[2];
				// Butterfly unit 4
				bu_A[3] = im1_neg[2];
				bu_B[3] = im1_neg[3];
				bu_W[3] = W00_16;
				im2_pos[3] = bu_out0[3];
				im2_neg[3] = bu_out1[3];
				// Butterfly unit 5
				bu_A[4] = im1_pos[4];
				bu_B[4] = im1_pos[5];
				bu_W[4] = W00_16;
				im2_pos[4] = bu_out0[4];
				im2_neg[4] = bu_out1[4];
				// Butterfly unit 6
				bu_A[5] = im1_neg[4];
				bu_B[5] = im1_neg[5];
				bu_W[5] = W00_16;
				im2_pos[5] = bu_out0[5];
				im2_neg[5] = bu_out1[5];
				// Butterfly unit 7
				bu_A[6] = im1_pos[6];
				bu_B[6] = im1_pos[7];
				bu_W[6] = W00_16;
				im2_pos[6] = bu_out0[6];
				im2_neg[6] = bu_out1[6];
				// Butterfly unit 8
				bu_A[7] = im1_neg[6];
				bu_B[7] = im1_neg[7];
				bu_W[7] = W00_16;
				im2_pos[7] = bu_out0[7];
				im2_neg[7] = bu_out1[7];		
			end
			STAGE3: begin
			
			end
			STAGE4: begin
			
			end
    		DONE:
    			done = 1;
    		default:
    			done = 0;
    	endcase
    end
    
endmodule
