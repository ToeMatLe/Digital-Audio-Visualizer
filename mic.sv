module mic(
    input logic clk,
    input logic rst,
    input logic sample_enable, // Sample enable signal from clock divider to control when we capture ADC data
    input logic vauxp6,
    input logic vauxn6,
    output logic [15:0] mic_data, // 16-bit ADC data output
    output logic mic_ready // Indicates when new ADC data is ready
);
    // Internal signals for ADC data and control
    logic [15:0] adc_raw_data; // Raw ADC data from the XADC IP (only 15:4 are used for 16-bit data)
    logic adc_data_ready; // Indicates when new ADC data is ready
    logic adc_eoc;
    logic adc_busy;
    logic [4:0] channel_out;
    logic [15:0] latest_sample;
    logic latest_sample_valid;

    // ADC IP instantiation
	xadc_wiz_0 XADC_INST (
		.daddr_in(7'h16),     
        .dclk_in(clk),         
        .reset_in(rst),
        .den_in(adc_eoc),      
        .di_in(16'h0),
        .dwe_in(1'b0),

        .vauxp6(vauxp6), // 1 bit input for the positive side of the differential pair for channel 6
        .vauxn6(vauxn6), // 1 bit input for the negative side of the differential pair for channel 6

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
    always_ff @(posedge clk) begin
        if (rst) begin 
            mic_data <= 16'h0;
            mic_ready <= 1'b0;
            latest_sample <= 16'h0;
            latest_sample_valid <= 1'b0;
        end else begin
            mic_ready <= 1'b0; // Clear ready flag until the next selected sample.

            if (adc_data_ready) begin
                // Capture the ADC data with only the upper 12 bits and pad with zeros to make it 16 bits.
                // This multiplies the data by 16, then centers it around zero for signed FFT math.
                latest_sample <= {adc_raw_data[15:4], 4'b0000} - 16'h8000;
                latest_sample_valid <= 1'b1;
            end

            if (sample_enable && latest_sample_valid) begin
                mic_data <= latest_sample;
                mic_ready <= 1'b1; // Indicate that one selected sample is ready for the FIFO.
            end
        end
    end
endmodule
