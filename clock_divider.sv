module clock_divider
	#(parameter DIVISOR = 2268)(	// About 44.1 kHz sample enable from 100 MHz
		input logic clk_in,			// Input clock (100 MHz)
		input logic rst,			// Active high reset
		output logic sample_enable	// One-cycle pulse at the sample rate
	);

	logic [$clog2(DIVISOR)-1:0] counter = 0;
	
	always_ff @(posedge clk_in, posedge rst) begin
		if (rst) begin
			counter <= '0;
			sample_enable <= 1'b0;
		end
		else if (counter == DIVISOR - 1) begin
			counter <= '0;
			sample_enable <= 1'b1;
		end
		else begin
			counter <= counter + 1'b1;
			sample_enable <= 1'b0;
		end
	end
endmodule
