module dav_top(
    input logic clk,
    input logic rst,
    input logic vauxp6,
    input logic vauxn6,
);

logic [15:0] mic_data;
logic mic_ready;
mic mic_ADC_converter (
    .clk(clk),
    .rst(rst),
    .vauxp6(vauxp6),
    .vauxn6(vauxn6),
    .mic_data(mic_data),
    .mic_ready(mic_ready)
);

logic [15:0] fifo_out [0:15];
logic frame_ready;
fifo buffer_fifo (
    .clk(clk),
    .rst(rst),
    .mic_data(mic_data),
    .mic_ready(mic_ready),
    .fifo_out(fifo_out),
    .frame_ready(frame_ready)
);

fft fft_16point(
    .clk(clk),
    .rst(rst),
    .start(frame_ready),
    .in(fifo_out),
    .out(frame_ready)
);

endmodule
