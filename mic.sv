module mic.sv(
    input logic clk,
    input logic rst,
    input logic vauxp6,
    input logic vauxn6,
    output logic [15:0] mic_data, // 16-bit ADC data output
    output logic mic_ready, // Indicates when new ADC data is ready
);
    // Internal signals for ADC data and control
    input logic [15:0] adc_raw_data; // Raw ADC data from the XADC IP
    input logic adc_data_ready; // Indicates when new ADC data is ready
    input logic adc_eoc;
    input logic adc_busy;
    input logic [4:0] channel_out;

    // ADC IP instantiation
	mic_xadc XADC_INST (
		.daddr_in(7'h16),     
        .dclk_in(clk),         
        .reset_in(rst),
        .den_in(adc_eoc),      
        .di_in(16'h0),
        .dwe_in(1'b0),

        .vauxp6(vauxp6),
        .vauxn6(vauxn6),
        .busy_out(adc_busy), 
        .channel_out(channel_out),
        .do_out(adc_raw_data), // Connect the raw ADC data output 16 bits
        .drdy_out(adc_data_ready), // Connect the data ready signal
        .eoc_out(adc_eoc),         
        .eos_out(), 
        .alarm_out(),
        .vp_in(1'b0),
        .vn_in(1'b0)
    );

    // Capture ADC data and set ready flag
    always_ff @(posedge clk ) begin : 
        if (rst) begin 
            mic_data <= 16'h0;
            mic_ready <= 1'b0;
        end else if (adc_data_ready) begin // Essentially data transer from XADC to mic_data when data is ready
            mic_data <= adc_raw_data; // Capture the ADC data
            mic_ready <= 1'b1; // Indicate that new data is ready
        end else begin
            mic_ready <= 1'b0; // Clear ready flag until next data is ready
        end
    end
endmodule