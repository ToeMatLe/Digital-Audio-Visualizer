module dav_top
    #( // Parameterize # of FFT points
        parameter POINTS = 16,
        parameter SAMPLE_DIVISOR = 2268) // About 44.1 kHz sample
    (
        input logic clk,
        input logic rst,
        input logic vauxp6,
        input logic vauxn6,
        output logic vga_hsync,
        output logic vga_vsync,
        output logic [3:0] vga_red,
        output logic [3:0] vga_green,
        output logic [3:0] vga_blue
    );

localparam BARS = POINTS / 2;

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

logic [31:0] fifo_out [0:POINTS-1];
logic frame_ready;
fifo #(
    .DEPTH(POINTS)
) buffer_fifo (
    .clk(clk),
    .rst(rst),
    .mic_data(mic_data),
    .mic_ready(mic_ready),
    .fifo_out(fifo_out),
    .frame_ready(frame_ready)
);

logic [31:0] fft_out [0:POINTS-1];
logic fft_done;
fft #(
    .POINTS(POINTS)
) fft_dut (
    .clk(clk),
    .rst(rst),
    .start(frame_ready),
    .in(fifo_out),
    .out(fft_out),
    .done(fft_done)
);

logic [9:0] bar_heights [0:BARS-1];
logic magnitudes_ready;
magnitude #(
    .POINTS(POINTS),
    .BARS(BARS)
) magnitude_dut (
    .clk(clk),
    .rst(rst),
    .fft_done(fft_done),
    .fft_out(fft_out),
    .bar_heights(bar_heights),
    .magnitudes_ready(magnitudes_ready)
);

vga #(
    .BARS(BARS)
) vga_dut (
    .clk(clk),
    .rst(rst),
    .bar_heights(bar_heights),
    .hsync(vga_hsync),
    .vsync(vga_vsync),
    .red(vga_red),
    .green(vga_green),
    .blue(vga_blue)
);

endmodule
