`timescale 1ns/1ps

module tb_runtime_fft;
    localparam int MAX_POINTS = 128;
    localparam int CLK_PERIOD = 10;

    logic clk;
    logic rst;
    logic start;
    logic [7:0] point_count;
    logic [31:0] fft_in [0:MAX_POINTS-1];
    logic [31:0] fft_out [0:MAX_POINTS-1];
    logic [7:0] output_points;
    logic done;

    fft #(
        .POINTS(MAX_POINTS)
    ) dut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .point_count(point_count),
        .in(fft_in),
        .out(fft_out),
        .output_points(output_points),
        .done(done)
    );

    initial begin
        clk = 1'b0;
        forever #(CLK_PERIOD / 2) clk = ~clk;
    end

    task automatic run_impulse(input logic [7:0] points);
        logic [15:0] expected;
        begin
            point_count = points;

            for (int i = 0; i < MAX_POINTS; i++)
                fft_in[i] = '0;

            fft_in[0] = 32'h4000_0000;
            @(negedge clk);
            start = 1'b1;
            @(negedge clk);
            start = 1'b0;
            wait (done);
            #1;

            expected = 16'h4000 / 16'(points);
            assert (output_points == points);

            for (int i = 0; i < points; i++) begin
                assert (fft_out[i] == {expected, 16'h0000})
                    else $fatal(1, "%0d-point impulse mismatch at bin %0d: got %h",
                                points, i, fft_out[i]);
            end
        end
    endtask

    initial begin
        rst = 1'b1;
        start = 1'b0;
        point_count = 8'd16;
        repeat (3) @(posedge clk);
        rst = 1'b0;

        run_impulse(8'd16);
        run_impulse(8'd64);
        run_impulse(8'd128);

        $display("PASS: one FFT engine executes true 16/64/128-point transforms.");
        $finish;
    end
endmodule
