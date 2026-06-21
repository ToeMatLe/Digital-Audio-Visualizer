`timescale 1ns/1ps

module tb_magnitude;
    localparam int POINTS = 128;
    localparam int BARS = 64;
    localparam int CLK_PERIOD = 10;

    logic clk;
    logic rst;
    logic fft_done;
    logic [7:0] point_count;
    logic [31:0] fft_out [0:POINTS-1];
    logic [9:0] bar_heights [0:BARS-1];
    logic magnitudes_ready;

    magnitude #(
        .POINTS(POINTS),
        .BARS(BARS)
    ) dut (
        .clk(clk),
        .rst(rst),
        .fft_done(fft_done),
        .point_count(point_count),
        .fft_out(fft_out),
        .bar_heights(bar_heights),
        .magnitudes_ready(magnitudes_ready)
    );

    initial begin
        clk = 1'b0;
        forever #(CLK_PERIOD / 2) clk = ~clk;
    end

    task automatic pulse_fft_done;
        begin
            @(negedge clk);
            fft_done = 1'b1;
            @(negedge clk);
            fft_done = 1'b0;
            #1;
        end
    endtask

    initial begin
        rst = 1'b1;
        fft_done = 1'b0;
        point_count = 8'd16;

        for (int i = 0; i < POINTS; i++)
            fft_out[i] = '0;

        repeat (3) @(posedge clk);
        rst = 1'b0;

        fft_out[1] = 32'h0100_0000;

        point_count = 8'd16;
        pulse_fft_done();
        assert (bar_heights[0] == 10'd16);
        assert (bar_heights[8] == 10'd0);

        point_count = 8'd64;
        pulse_fft_done();
        assert (bar_heights[0] == 10'd64);
        assert (bar_heights[32] == 10'd0);

        point_count = 8'd128;
        pulse_fft_done();
        assert (bar_heights[0] == 10'd128);

        $display("PASS: magnitude scaling compensates each normalized FFT size.");
        $finish;
    end
endmodule
