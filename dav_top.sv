module dav_top
    #(parameter SAMPLE_DIVISOR = 2268) // About 44.1 kHz sample
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

localparam MAX_BARS = 64;

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

// For 16 point FFT 
//========================================================================================
logic [31:0] fifo_out16 [0:15];
logic frame_ready16;
fifo #(
    .DEPTH(16)
) fifo16 (
    .clk(clk),
    .rst(rst),
    .mic_data(mic_data),
    .mic_ready(mic_ready),
    .fifo_out(fifo_out16),
    .frame_ready(frame_ready16)
);

logic [31:0] fft_out16 [0:15];
logic fft_done16;
fft #(
    .POINTS(16)
) fft16 (
    .clk(clk),
    .rst(rst),
    .start(frame_ready16),
    .in(fifo_out16),
    .out(fft_out16),
    .done(fft_done16)
);
// For 16 bar magnitude calculation (only uses first 8 points of FFT output since the other 8 are symmetric for real inputs)
logic [9:0] bar_heights16 [0:7];
logic magnitudes_ready16;
magnitude #(
    .POINTS(16),
    .BARS(8)
) magnitude16 (
    .clk(clk),
    .rst(rst),
    .fft_done(fft_done16),
    .fft_out(fft_out16),
    .bar_heights(bar_heights16),
    .magnitudes_ready(magnitudes_ready16)
);

// For 64 point FFT
//========================================================================================
logic [31:0] fifo_out64 [0:63];
logic frame_ready64;
fifo #(
    .DEPTH(64)
) fifo64 (
    .clk(clk),
    .rst(rst),
    .mic_data(mic_data),
    .mic_ready(mic_ready),
    .fifo_out(fifo_out64),
    .frame_ready(frame_ready64)
);
//
logic [31:0] fft_out64 [0:63];
logic fft_done64;
fft #(
    .POINTS(64)
) fft64 (
    .clk(clk),
    .rst(rst),
    .start(frame_ready64),
    .in(fifo_out64),
    .out(fft_out64),
    .done(fft_done64)
);
// For 64 bar magnitude calculation (only uses first 32 points of FFT output since the other 32 are symmetric for real inputs)
logic [9:0] bar_heights64 [0:31];
logic magnitudes_ready64;
magnitude #(
    .POINTS(64),
    .BARS(32)
) magnitude64 (
    .clk(clk),
    .rst(rst),
    .fft_done(fft_done64),
    .fft_out(fft_out64),
    .bar_heights(bar_heights64),
    .magnitudes_ready(magnitudes_ready64)
);
// For 128 point FFT 
//========================================================================================
logic [31:0] fifo_out128 [0:127];
logic frame_ready128;
fifo #(
    .DEPTH(128)
) fifo128 (
    .clk(clk),
    .rst(rst),
    .mic_data(mic_data),
    .mic_ready(mic_ready),
    .fifo_out(fifo_out128),
    .frame_ready(frame_ready128)
);

logic [31:0] fft_out128 [0:127];
logic fft_done128;
fft #(
    .POINTS(128)
) fft128 (
    .clk(clk),
    .rst(rst),
    .start(frame_ready128),
    .in(fifo_out128),
    .out(fft_out128),
    .done(fft_done128)
);
// For 128 bar magnitude calculation (only uses first 64 points of FFT output since the other 64 are symmetric for real inputs)
logic [9:0] bar_heights128 [0:63];
logic magnitudes_ready128;
magnitude #(
    .POINTS(128),
    .BARS(64)
) magnitude128 (
    .clk(clk),
    .rst(rst),
    .fft_done(fft_done128),
    .fft_out(fft_out128),
    .bar_heights(bar_heights128),
    .magnitudes_ready(magnitudes_ready128)
);

logic [6:0] active_bars;
logic [9:0] selected_bar_heights [0:MAX_BARS-1];

always_comb begin
    active_bars = 7'd8;

    for (int i = 0; i < MAX_BARS; i++) begin
        selected_bar_heights[i] = '0;
    end

    if (switch128) begin
        active_bars = 7'd64;

        for (int i = 0; i < 64; i++) begin
            selected_bar_heights[i] = bar_heights128[i];
        end
    end else if (switch64) begin
        active_bars = 7'd32;

        for (int i = 0; i < 32; i++) begin
            selected_bar_heights[i] = bar_heights64[i];
        end
    end else if (switch16) begin
        active_bars = 7'd8;

        for (int i = 0; i < 8; i++) begin
            selected_bar_heights[i] = bar_heights16[i];
        end
    end else begin
        active_bars = 7'd8;

        for (int i = 0; i < 8; i++) begin
            selected_bar_heights[i] = bar_heights16[i];
        end
    end
end

vga #(
    .MAX_BARS(MAX_BARS)
) vga_dut (
    .clk(clk),
    .rst(rst),
    .active_bars(active_bars),
    .bar_heights(selected_bar_heights),
    .hsync(vga_hsync),
    .vsync(vga_vsync),
    .red(vga_red),
    .green(vga_green),
    .blue(vga_blue)
);

endmodule
