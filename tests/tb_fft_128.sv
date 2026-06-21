`timescale 1ns/1ps

module tb_fft_128;
    localparam int POINTS = 128;
    localparam int CLK_PERIOD = 10;

    logic clk;
    logic rst;
    logic start;
    logic [31:0] fft_in [0:POINTS-1];
    logic [31:0] fft_out [0:POINTS-1];
    logic [7:0] output_points;
    logic done;

    fft #(
        .POINTS(POINTS)
    ) dut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .point_count(8'd128),
        .in(fft_in),
        .out(fft_out),
        .output_points(output_points),
        .done(done)
    );

    initial begin
        clk = 1'b0;
        forever #(CLK_PERIOD / 2) clk = ~clk;
    end

    task automatic reset_dut;
        begin
            rst = 1'b1;
            start = 1'b0;
            repeat (3) @(posedge clk);
            rst = 1'b0;
            repeat (2) @(posedge clk);
        end
    endtask

    task automatic run_fft;
        begin
            @(negedge clk);
            start = 1'b1;
            @(negedge clk);
            start = 1'b0;
            wait (done);
            #1;
        end
    endtask

    initial begin
        for (int i = 0; i < POINTS; i++) begin
            fft_in[i] = '0;
        end

        reset_dut();
        fft_in[0] = 32'h7f00_0000;
        run_fft();

        for (int i = 0; i < POINTS; i++) begin
            assert (fft_out[i] == 32'h00fe_0000)
                else $fatal(1, "Normalized impulse mismatch at bin %0d: got %h", i, fft_out[i]);
        end

        reset_dut();
        for (int i = 0; i < POINTS; i++) begin
            fft_in[i] = 32'h7000_0000;
        end

        run_fft();

        assert ($signed(fft_out[0][31:16]) > 16'sh6000)
            else $fatal(1, "128-point DC result overflowed: got %h", fft_out[0]);

        for (int i = 1; i < POINTS; i++) begin
            assert (($signed(fft_out[i][31:16]) < 16'sd32) &&
                    ($signed(fft_out[i][31:16]) > -16'sd32) &&
                    ($signed(fft_out[i][15:0]) < 16'sd32) &&
                    ($signed(fft_out[i][15:0]) > -16'sd32))
                else $fatal(1, "Unexpected energy at constant-input bin %0d: got %h", i, fft_out[i]);
        end

        $display("PASS: 128-point FFT is stage-scaled without signed overflow.");
        $finish;
    end
endmodule
