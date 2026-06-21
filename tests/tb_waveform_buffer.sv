`timescale 1ns/1ps

module tb_waveform_buffer;
    localparam int SAMPLES = 8;
    localparam int CLK_PERIOD = 10;

    logic clk;
    logic rst;
    logic frame_start;
    logic update;
    logic [31:0] next_frame [0:SAMPLES-1];
    logic signed [15:0] samples [0:SAMPLES-1];

    waveform_buffer #(
        .SAMPLES(SAMPLES)
    ) dut (
        .clk(clk),
        .rst(rst),
        .frame_start(frame_start),
        .update(update),
        .next_frame(next_frame),
        .samples(samples)
    );

    initial begin
        clk = 1'b0;
        forever #(CLK_PERIOD / 2) clk = ~clk;
    end

    task automatic load_frame(input int base);
        begin
            @(negedge clk);
            for (int i = 0; i < SAMPLES; i++) begin
                next_frame[i] = {16'(base + i), 16'h0000};
            end
            update = 1'b1;
            @(negedge clk);
            update = 1'b0;
        end
    endtask

    task automatic swap_frame;
        begin
            @(negedge clk);
            frame_start = 1'b1;
            @(negedge clk);
            frame_start = 1'b0;
            #1;
        end
    endtask

    initial begin
        rst = 1'b1;
        update = 1'b0;
        frame_start = 1'b0;
        repeat (3) @(posedge clk);
        rst = 1'b0;

        load_frame(100);
        for (int i = 0; i < SAMPLES; i++)
            assert (samples[i] == 0);

        swap_frame();
        for (int i = 0; i < SAMPLES; i++)
            assert (samples[i] == 16'(100 + i));

        load_frame(-20);
        for (int i = 0; i < SAMPLES; i++)
            assert (samples[i] == 16'(100 + i));

        swap_frame();
        for (int i = 0; i < SAMPLES; i++)
            assert (samples[i] == 16'(-20 + i));

        $display("PASS: waveform samples swap only at VGA frame boundaries.");
        $finish;
    end
endmodule
