module waveform_buffer #(
    parameter int SAMPLES = 128
) (
    input  logic clk,
    input  logic rst,
    input  logic frame_start,
    input  logic update,
    input  logic [31:0] next_frame [0:SAMPLES-1],
    output logic signed [15:0] samples [0:SAMPLES-1]
);

    logic front_select;
    logic update_pending;
    logic signed [15:0] sample_buffer0 [0:SAMPLES-1];
    logic signed [15:0] sample_buffer1 [0:SAMPLES-1];

    always_ff @(posedge clk, posedge rst) begin
        if (rst) begin
            front_select <= 1'b0;
            update_pending <= 1'b0;

            for (int i = 0; i < SAMPLES; i++) begin
                sample_buffer0[i] <= '0;
                sample_buffer1[i] <= '0;
            end
        end else begin
            if (update) begin
                update_pending <= 1'b1;

                if (front_select == 1'b0) begin
                    for (int i = 0; i < SAMPLES; i++) begin
                        sample_buffer1[i] <= $signed(next_frame[i][31:16]);
                    end
                end else begin
                    for (int i = 0; i < SAMPLES; i++) begin
                        sample_buffer0[i] <= $signed(next_frame[i][31:16]);
                    end
                end
            end

            if (frame_start && update_pending) begin
                front_select <= ~front_select;
                update_pending <= 1'b0;
            end
        end
    end

    always_comb begin
        for (int i = 0; i < SAMPLES; i++) begin
            if (front_select == 1'b0)
                samples[i] = sample_buffer0[i];
            else
                samples[i] = sample_buffer1[i];
        end
    end

endmodule
