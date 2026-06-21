`timescale 1ns/1ps

module tb_bar_mapper;
    localparam int MAX_BARS = 128;

    logic [7:0] point_count;
    logic [9:0] bin_heights [0:63];
    logic [7:0] active_bars;
    logic [9:0] bar_heights [0:MAX_BARS-1];

    bar_mapper #(
        .MAX_BARS(MAX_BARS)
    ) dut (
        .point_count(point_count),
        .bin_heights(bin_heights),
        .active_bars(active_bars),
        .bar_heights(bar_heights)
    );

    initial begin
        for (int i = 0; i < 64; i++)
            bin_heights[i] = 10'(i + 1);

        point_count = 8'd16;
        #1;
        assert (active_bars == 8'd16);
        for (int i = 0; i < 8; i++) begin
            assert (bar_heights[i] == 10'(i + 1));
            assert (bar_heights[15-i] == bar_heights[i]);
        end

        point_count = 8'd64;
        #1;
        assert (active_bars == 8'd64);
        for (int i = 0; i < 32; i++) begin
            assert (bar_heights[i] == 10'(i + 1));
            assert (bar_heights[63-i] == bar_heights[i]);
        end

        point_count = 8'd128;
        #1;
        assert (active_bars == 8'd128);
        for (int i = 0; i < 64; i++) begin
            assert (bar_heights[i] == 10'(i + 1));
            assert (bar_heights[127-i] == bar_heights[i]);
        end

        $display("PASS: true FFT bins mirror correctly for every display mode.");
        $finish;
    end
endmodule
