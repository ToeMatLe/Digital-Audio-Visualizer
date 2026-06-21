module bar_mapper #(
    parameter int MAX_BARS = 128
) (
    input  logic [7:0] point_count,
    input  logic [9:0] bin_heights [0:63],
    output logic [7:0] active_bars,
    output logic [9:0] bar_heights [0:MAX_BARS-1]
);

    always_comb begin
        active_bars = 8'd16;

        for (int i = 0; i < MAX_BARS; i++) begin
            bar_heights[i] = '0;
        end

        if (point_count == 8'd128) begin
            active_bars = 8'd128;

            for (int i = 0; i < 64; i++) begin
                bar_heights[i] = bin_heights[i];
                bar_heights[127-i] = bin_heights[i];
            end
        end else if (point_count == 8'd64) begin
            active_bars = 8'd64;

            for (int i = 0; i < 32; i++) begin
                bar_heights[i] = bin_heights[i];
                bar_heights[63-i] = bar_heights[i];
            end
        end else begin
            active_bars = 8'd16;

            for (int i = 0; i < 8; i++) begin
                bar_heights[i] = bin_heights[i];
                bar_heights[15-i] = bar_heights[i];
            end
        end
    end

endmodule
