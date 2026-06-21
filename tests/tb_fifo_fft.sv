`timescale 1ns/1ps

module tb_fifo_fft;
    localparam int POINTS = 16;
    localparam int CLK_PERIOD = 10;

    logic clk;
    logic rst;
    logic [15:0] mic_data;
    logic mic_ready;
    logic [31:0] fifo_out [0:POINTS-1];
    logic frame_ready;
    logic [31:0] fft_out [0:POINTS-1];
    logic [7:0] output_points;
    logic fft_done;
    int frame_count;

    fifo #(
        .DEPTH(POINTS)
    ) dut_fifo (
        .clk(clk),
        .rst(rst),
        .mic_data(mic_data),
        .mic_ready(mic_ready),
        .fifo_out(fifo_out),
        .frame_ready(frame_ready)
    );

    fft #(
        .POINTS(POINTS)
    ) dut_fft (
        .clk(clk),
        .rst(rst),
        .start(frame_ready),
        .point_count(8'(POINTS)),
        .in(fifo_out),
        .out(fft_out),
        .output_points(output_points),
        .done(fft_done)
    );

    initial begin
        clk = 1'b0;
        forever #(CLK_PERIOD / 2) clk = ~clk;
    end

    task automatic reset_dut;
        begin
            rst = 1'b1;
            mic_data = '0;
            mic_ready = 1'b0;
            frame_count = 0;
            repeat (4) @(posedge clk);
            rst = 1'b0;
            repeat (2) @(posedge clk);
        end
    endtask

    task automatic send_sample(input logic [15:0] sample);
        begin
            @(negedge clk);
            mic_data = sample;
            mic_ready = 1'b1;
            @(negedge clk);
            mic_ready = 1'b0;
            mic_data = '0;
        end
    endtask

    task automatic send_sample_with_gap(input logic [15:0] sample, input int idle_cycles);
        begin
            send_sample(sample);
            repeat (idle_cycles) @(posedge clk);
        end
    endtask

    always_ff @(posedge clk) begin
        if (frame_ready)
            frame_count <= frame_count + 1;
    end

    task automatic wait_for_frame(input int expected_count);
        begin
            wait (frame_count == expected_count);
            #1;
        end
    endtask

    task automatic check_fifo_counting_frame;
        begin
            reset_dut();

            for (int i = 0; i < POINTS; i++) begin
                send_sample_with_gap(16'(i + 1), 2);
            end

            wait_for_frame(1);

            for (int i = 0; i < POINTS; i++) begin
                assert (fifo_out[i] == {16'(i + 1), 16'h0000})
                    else $fatal(1, "FIFO mismatch at index %0d: got %h", i, fifo_out[i]);
            end

            $display("PASS: FIFO emitted one complete ordered frame.");
        end
    endtask

    task automatic check_fft_snapshots_fifo_frame;
        begin
            reset_dut();

            send_sample_with_gap(16'h0100, 2);
            for (int i = 1; i < POINTS; i++) begin
                send_sample_with_gap(16'h0000, 2);
            end

            wait_for_frame(1);

            // Start collecting a different next frame while the FFT is busy.
            // Do not complete that next frame before checking the first FFT result.
            // The first FFT result should still come from the impulse frame.
            fork
                begin
                    for (int i = 0; i < POINTS / 2; i++) begin
                        send_sample_with_gap(16'h7fff, 5);
                    end
                end
                begin
                    wait (fft_done);
                end
            join_any
            disable fork;
            #1;

            for (int i = 0; i < POINTS; i++) begin
                assert (fft_out[i] == 32'h0010_0000)
                    else $fatal(1, "FFT did not snapshot impulse frame at bin %0d: got %h", i, fft_out[i]);
            end

            $display("PASS: FFT used a stable FIFO snapshot while FIFO collected the next frame.");
        end
    endtask

    initial begin
        check_fifo_counting_frame();
        check_fft_snapshots_fifo_frame();
        $display("PASS: tb_fifo_fft completed.");
        $finish;
    end
endmodule
