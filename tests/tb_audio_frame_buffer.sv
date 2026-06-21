`timescale 1ns/1ps

module tb_audio_frame_buffer;
    localparam int MAX_POINTS = 128;
    localparam int CLK_PERIOD = 10;

    logic clk;
    logic rst;
    logic [7:0] requested_points;
    logic [15:0] mic_data;
    logic mic_ready;
    logic [31:0] frame_out [0:MAX_POINTS-1];
    logic [7:0] frame_points;
    logic frame_ready;

    audio_frame_buffer #(
        .MAX_POINTS(MAX_POINTS)
    ) dut (
        .clk(clk),
        .rst(rst),
        .requested_points(requested_points),
        .mic_data(mic_data),
        .mic_ready(mic_ready),
        .frame_out(frame_out),
        .frame_points(frame_points),
        .frame_ready(frame_ready)
    );

    initial begin
        clk = 1'b0;
        forever #(CLK_PERIOD / 2) clk = ~clk;
    end

    task automatic send_sample(input logic [15:0] sample);
        begin
            @(negedge clk);
            mic_data = sample;
            mic_ready = 1'b1;
            @(negedge clk);
            mic_ready = 1'b0;
        end
    endtask

    task automatic check_frame(input logic [7:0] points);
        begin
            requested_points = points;

            for (int i = 0; i < points; i++)
                send_sample(16'(i + 1));

            wait (frame_ready);
            #1;
            assert (frame_points == points);

            for (int i = 0; i < points; i++)
                assert (frame_out[i] == {16'(i + 1), 16'h0000});
        end
    endtask

    initial begin
        rst = 1'b1;
        requested_points = 8'd16;
        mic_data = '0;
        mic_ready = 1'b0;
        repeat (3) @(posedge clk);
        rst = 1'b0;

        check_frame(8'd16);
        check_frame(8'd64);
        check_frame(8'd128);

        $display("PASS: shared frame buffer captures true 16/64/128-sample frames.");
        $finish;
    end
endmodule
