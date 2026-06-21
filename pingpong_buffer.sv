module pingpong_buffer #(
    parameter int MAX_BARS = 128
) (
    input  logic clk,
    input  logic rst,
    input  logic frame_start,
    input  logic update,
    input  logic [7:0] next_active_bars,
    input  logic [9:0] next_bar_heights [0:MAX_BARS-1],
    output logic [7:0] active_bars,
    output logic [9:0] bar_heights [0:MAX_BARS-1]
);

    logic front_select;
    logic update_pending;
    logic [7:0] active_bars0;
    logic [7:0] active_bars1;
    logic [9:0] bar_buffer0 [0:MAX_BARS-1];
    logic [9:0] bar_buffer1 [0:MAX_BARS-1];

    always_ff @(posedge clk, posedge rst) begin
        if (rst) begin
            front_select <= 1'b0;
            update_pending <= 1'b0;
            active_bars0 <= 8'd16;
            active_bars1 <= 8'd16;

            // All bares loaded with 0 height on reset (in parallel)
            for (int i = 0; i < MAX_BARS; i++) begin
                bar_buffer0[i] <= '0;
                bar_buffer1[i] <= '0;
            end
        end else begin
            if (update) begin
                update_pending <= 1'b1;

                if (front_select == 1'b0) begin
                    active_bars1 <= next_active_bars;

                    for (int i = 0; i < MAX_BARS; i++) begin
                        bar_buffer1[i] <= next_bar_heights[i];
                    end
                end else begin
                    active_bars0 <= next_active_bars;

                    for (int i = 0; i < MAX_BARS; i++) begin
                        bar_buffer0[i] <= next_bar_heights[i];
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
        if (front_select == 1'b0) begin
            active_bars = active_bars0;

            for (int i = 0; i < MAX_BARS; i++) begin
                bar_heights[i] = bar_buffer0[i];
            end
        end else begin
            active_bars = active_bars1;

            for (int i = 0; i < MAX_BARS; i++) begin
                bar_heights[i] = bar_buffer1[i];
            end
        end
    end

endmodule
