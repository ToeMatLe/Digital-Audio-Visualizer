module dav_top
    #(parameter SAMPLE_DIVISOR = 8000) // About 12.5 kHz sample
    (
        input logic clk,
        input logic rst,
        input logic vauxp6,
        input logic vauxn6,
        input logic switch16,
        input logic switch64,
        input logic switch128,
        output logic vga_hsync,
        output logic vga_vsync,
        output logic [3:0] vga_red,
        output logic [3:0] vga_green,
        output logic [3:0] vga_blue
    );

localparam MAX_BARS = 128;

logic sample_enable;
clock_divider #(
    .DIVISOR(SAMPLE_DIVISOR)
) sample_rate_generator (
    .clk_in(clk),
    .rst(rst),
    .sample_enable(sample_enable)
);

logic [15:0] mic_data;
logic mic_ready;
mic mic_ADC_converter (
    .clk(clk),
    .rst(rst),
    .sample_enable(sample_enable),
    .vauxp6(vauxp6),
    .vauxn6(vauxn6),
    .mic_data(mic_data),
    .mic_ready(mic_ready)
);

logic [7:0] requested_points;
logic waveform_mode;

always_comb begin
    if (switch128)
        requested_points = 8'd128;
    else if (switch64)
        requested_points = 8'd64;
    else if (switch16)
        requested_points = 8'd16;
    else
        requested_points = 8'd128;
end

assign waveform_mode = ~(switch16 || switch64 || switch128);

// One frame collector and one FFT engine are shared by every transform size.
logic [31:0] fifo_out [0:127];
logic [7:0] frame_points;
logic frame_ready;
audio_frame_buffer #(
    .MAX_POINTS(128)
) sample_frame_buffer (
    .clk(clk),
    .rst(rst),
    .requested_points(requested_points),
    .mic_data(mic_data),
    .mic_ready(mic_ready),
    .frame_out(fifo_out),
    .frame_points(frame_points),
    .frame_ready(frame_ready)
);

logic [31:0] fft_out [0:127];
logic [7:0] fft_points;
logic fft_done;
fft #(
    .POINTS(128)
) shared_fft (
    .clk(clk),
    .rst(rst),
    .start(frame_ready),
    .point_count(frame_points),
    .in(fifo_out),
    .out(fft_out),
    .output_points(fft_points),
    .done(fft_done)
);

logic [9:0] frequency_bins [0:63];
logic magnitudes_ready;
magnitude #(
    .POINTS(128),
    .BARS(64)
) shared_magnitude (
    .clk(clk),
    .rst(rst),
    .fft_done(fft_done),
    .point_count(fft_points),
    .fft_out(fft_out),
    .bar_heights(frequency_bins),
    .magnitudes_ready(magnitudes_ready)
);

logic [7:0] next_active_bars;
logic [7:0] active_bars;
logic [9:0] selected_bar_heights [0:MAX_BARS-1];
logic [9:0] displayed_bar_heights [0:MAX_BARS-1];
logic signed [15:0] displayed_waveform [0:127];
logic vga_frame_start;

bar_mapper #(
    .MAX_BARS(MAX_BARS)
) display_bar_mapper (
    .point_count(fft_points),
    .bin_heights(frequency_bins),
    .active_bars(next_active_bars),
    .bar_heights(selected_bar_heights)
);

pingpong_buffer #(
    .MAX_BARS(MAX_BARS)
) bar_frame_buffer (
    .clk(clk),
    .rst(rst),
    .frame_start(vga_frame_start),
    .update(magnitudes_ready),
    .next_active_bars(next_active_bars),
    .next_bar_heights(selected_bar_heights),
    .active_bars(active_bars),
    .bar_heights(displayed_bar_heights)
);

waveform_buffer #(
    .SAMPLES(128)
) waveform_frame_buffer (
    .clk(clk),
    .rst(rst),
    .frame_start(vga_frame_start),
    .update(frame_ready),
    .next_frame(fifo_out),
    .samples(displayed_waveform)
);

vga #(
    .MAX_BARS(MAX_BARS)
) vga_dut (
    .clk(clk),
    .rst(rst),
    .active_bars(active_bars),
    .bar_heights(displayed_bar_heights),
    .waveform_mode(waveform_mode),
    .waveform_samples(displayed_waveform),
    .frame_start(vga_frame_start),
    .hsync(vga_hsync),
    .vsync(vga_vsync),
    .red(vga_red),
    .green(vga_green),
    .blue(vga_blue)
);

endmodule
