module butterfly_unit 
	#(parameter WIDTH = 32)		// # bits used in complex calculations 
	(input logic [WIDTH-1:0] A, B,	// complex operands
	input logic [WIDTH-1:0] W,		// twiddle factor
	output logic [WIDTH-1:0] out0, 	// A + B * W
	output logic [WIDTH-1:0] out1	// A - B * W
    );
    
    // Internal signals, splitting each input into real and imaginary components
    logic signed [WIDTH/2-1:0] A_re, A_im;
    assign A_re = A[WIDTH-1:WIDTH/2];
    assign A_im = A[WIDTH/2-1:0];
    
    logic signed [WIDTH/2-1:0] B_re, B_im;
    assign B_re = B[WIDTH-1:WIDTH/2];
    assign B_im = B[WIDTH/2-1:0];    
    
    logic signed [WIDTH/2-1:0] W_re, W_im;
    assign W_re = W[WIDTH-1:WIDTH/2];
    assign W_im = W[WIDTH/2-1:0];	
	
	// Internal signals, splitting each output into real and imaginary components
	logic signed [WIDTH/2-1:0] out0_re, out0_im;    
    logic signed [WIDTH/2-1:0] out1_re, out1_im;
    
    // W * B = (W_re + jW_im) * (B_re + jB_im)
    //		 = (W_re * B_re - W_im * B_im) + j(W_im * B_re + W_re * B_im)
    logic signed [WIDTH:0] WxB_re, WxB_im;
    assign WxB_re = W_re * B_re - W_im * B_im;
    assign WxB_im = W_im * B_re + W_re * B_im;

    logic signed [WIDTH/2-1:0] multiplied_re, multiplied_im;
    logic signed [WIDTH/2:0] sum_re, sum_im;
    logic signed [WIDTH/2:0] difference_re, difference_im;
    logic signed [WIDTH/2:0] scaled_sum_re, scaled_sum_im;
    logic signed [WIDTH/2:0] scaled_difference_re, scaled_difference_im;

    assign multiplied_re = $signed(WxB_re[WIDTH-2:WIDTH/2-1]);
    assign multiplied_im = $signed(WxB_im[WIDTH-2:WIDTH/2-1]);

    // Widen before adding, then divide every butterfly by two. This prevents
    // the 16-bit data path from overflowing as larger FFTs progress by stage.
    assign sum_re = {A_re[WIDTH/2-1], A_re} + {multiplied_re[WIDTH/2-1], multiplied_re};
    assign sum_im = {A_im[WIDTH/2-1], A_im} + {multiplied_im[WIDTH/2-1], multiplied_im};
    assign difference_re = {A_re[WIDTH/2-1], A_re} - {multiplied_re[WIDTH/2-1], multiplied_re};
    assign difference_im = {A_im[WIDTH/2-1], A_im} -{multiplied_im[WIDTH/2-1], multiplied_im};

    assign scaled_sum_re = sum_re >>> 1;
    assign scaled_sum_im = sum_im >>> 1;
    assign scaled_difference_re = difference_re >>> 1;
    assign scaled_difference_im = difference_im >>> 1;

    assign out0_re = scaled_sum_re[WIDTH/2-1:0];
    assign out0_im = scaled_sum_im[WIDTH/2-1:0];
    assign out1_re = scaled_difference_re[WIDTH/2-1:0];
    assign out1_im = scaled_difference_im[WIDTH/2-1:0];
    
    // Combine real and imaginary components of output signals
    assign out0 = {out0_re, out0_im};
    assign out1 = {out1_re, out1_im};
    
endmodule
