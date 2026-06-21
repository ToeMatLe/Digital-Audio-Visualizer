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

// One 128-point pipeline is shared by every display mode.
logic [31:0] fifo_out [0:127];
logic frame_ready;
fifo #(
    .DEPTH(128)
) sample_frame_buffer (
    .clk(clk),
    .rst(rst),
    .mic_data(mic_data),
    .mic_ready(mic_ready),
    .fifo_out(fifo_out),
    .frame_ready(frame_ready)
);

logic [31:0] fft_out [0:127];
logic fft_done;
fft #(
    .POINTS(128)
) shared_fft (
    .clk(clk),
    .rst(rst),
    .start(frame_ready),
    .in(fifo_out),
    .out(fft_out),
    .done(fft_done)
);

logic [9:0] frequency_bins [0:63];
logic magnitudes_ready;
magnitude #(
    .POINTS(128),
    .BARS(64),
    .DISPLAY_SHIFT(4)
) shared_magnitude (
    .clk(clk),
    .rst(rst),
    .fft_done(fft_done),
    .fft_out(fft_out),
    .bar_heights(frequency_bins),
    .magnitudes_ready(magnitudes_ready)
);

logic [7:0] next_active_bars;
logic [7:0] active_bars;
logic [9:0] selected_bar_heights [0:MAX_BARS-1];
logic [9:0] displayed_bar_heights [0:MAX_BARS-1];
logic vga_frame_start;

bar_mapper #(
    .MAX_BARS(MAX_BARS)
) display_bar_mapper (
    .switch16(switch16),
    .switch64(switch64),
    .switch128(switch128),
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

vga #(
    .MAX_BARS(MAX_BARS)
) vga_dut (
    .clk(clk),
    .rst(rst),
    .active_bars(active_bars),
    .bar_heights(displayed_bar_heights),
    .frame_start(vga_frame_start),
    .hsync(vga_hsync),
    .vsync(vga_vsync),
    .red(vga_red),
    .green(vga_green),
    .blue(vga_blue)
);

endmodule
