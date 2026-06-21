module audio_frame_buffer #(
    parameter int MAX_POINTS = 128
) (
    input  logic clk,
    input  logic rst,
    input  logic [7:0] requested_points,
    input  logic [15:0] mic_data,
    input  logic mic_ready,
    output logic [31:0] frame_out [0:MAX_POINTS-1],
    output logic [7:0] frame_points,
    output logic frame_ready
);

    logic [15:0] buffer [0:MAX_POINTS-1];
    logic [7:0] active_points;
    logic [$clog2(MAX_POINTS)-1:0] write_index;
    logic [7:0] selected_points;
    int unsigned effective_points;

    always_comb begin
        case (requested_points)
            8'd16: selected_points = 8'd16;
            8'd64: selected_points = 8'd64;
            default: selected_points = 8'd128;
        endcase

        if (write_index == 0)
            effective_points = int'(selected_points);
        else
            effective_points = int'(active_points);
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            active_points <= 8'd128;
            write_index <= '0;
            frame_points <= 8'd128;
            frame_ready <= 1'b0;

            for (int i = 0; i < MAX_POINTS; i++) begin
                buffer[i] <= '0;
                frame_out[i] <= '0;
            end
        end else begin
            frame_ready <= 1'b0;

            if (mic_ready) begin
                buffer[write_index] <= mic_data;

                if (write_index == 0)
                    active_points <= selected_points;

                if (int'(write_index) == effective_points - 1) begin
                    for (int i = 0; i < MAX_POINTS; i++) begin
                        if (i < effective_points - 1)
                            frame_out[i] <= {buffer[i], 16'b0};
                        else if (i == effective_points - 1)
                            frame_out[i] <= {mic_data, 16'b0};
                        else
                            frame_out[i] <= '0;
                    end

                    frame_points <= 8'(effective_points);
                    frame_ready <= 1'b1;
                    write_index <= '0;
                end else begin
                    write_index <= write_index + 1'b1;
                end
            end
        end
    end

endmodule
