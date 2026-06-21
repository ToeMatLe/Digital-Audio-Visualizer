`timescale 1ns/1ps

module tb_pingpong_buffer;
    localparam int MAX_BARS = 8;
    localparam int CLK_PERIOD = 10;

    logic clk;
    logic rst;
    logic frame_start;
    logic update;
    logic [7:0] next_active_bars;
    logic [9:0] next_bar_heights [0:MAX_BARS-1];
    logic [7:0] active_bars;
    logic [9:0] bar_heights [0:MAX_BARS-1];

    pingpong_buffer #(
        .MAX_BARS(MAX_BARS)
    ) dut (
        .clk(clk),
        .rst(rst),
        .frame_start(frame_start),
        .update(update),
        .next_active_bars(next_active_bars),
        .next_bar_heights(next_bar_heights),
        .active_bars(active_bars),
        .bar_heights(bar_heights)
    );

    initial begin
        clk = 1'b0;
        forever #(CLK_PERIOD / 2) clk = ~clk;
    end

    task automatic pulse_update(input int base);
        begin
            @(negedge clk);
            next_active_bars = 8'(MAX_BARS);

            for (int i = 0; i < MAX_BARS; i++) begin
                next_bar_heights[i] = 10'(base + i);
            end

            update = 1'b1;
            @(negedge clk);
            update = 1'b0;
        end
    endtask

    task automatic pulse_frame_start;
        begin
            @(negedge clk);
            frame_start = 1'b1;
            @(negedge clk);
            frame_start = 1'b0;
            #1;
        end
    endtask

    task automatic check_frame(input int base);
        begin
            assert (active_bars == 8'(MAX_BARS))
                else $fatal(1, "Wrong active bar count: got %0d", active_bars);

            for (int i = 0; i < MAX_BARS; i++) begin
                assert (bar_heights[i] == 10'(base + i))
                    else $fatal(1, "Bar %0d mismatch: got %0d", i, bar_heights[i]);
            end
        end
    endtask

    initial begin
        rst = 1'b1;
        frame_start = 1'b0;
        update = 1'b0;
        next_active_bars = '0;

        for (int i = 0; i < MAX_BARS; i++) begin
            next_bar_heights[i] = '0;
        end

        repeat (3) @(posedge clk);
        rst = 1'b0;

        pulse_update(100);

        for (int i = 0; i < MAX_BARS; i++) begin
            assert (bar_heights[i] == 0)
                else $fatal(1, "Front buffer changed before frame boundary");
        end

        pulse_frame_start();
        check_frame(100);

        pulse_frame_start();
        check_frame(100);

        pulse_update(200);
        check_frame(100);
        pulse_frame_start();
        check_frame(200);

        $display("PASS: ping-pong buffer swaps complete bar snapshots only at frame boundaries.");
        $finish;
    end
endmodule
