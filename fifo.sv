module fifo
    #(parameter DEPTH = 16)
    (
        input logic clk,
        input logic rst,
        input logic [15:0] mic_data,
        input logic mic_ready,
        output logic [31:0] fifo_out [0:DEPTH-1],
        output logic frame_ready // when all samples in a frame are ready
    );

    localparam ADDR_WIDTH = $clog2(DEPTH);
    localparam logic [ADDR_WIDTH-1:0] LAST_INDEX = DEPTH[ADDR_WIDTH-1:0] - 1'b1;

    logic [15:0] buffer [0:DEPTH-1];
    logic [ADDR_WIDTH-1:0] write_index;

    always_ff @(posedge clk) begin
        if (rst) begin
            write_index <= '0;
            frame_ready <= 1'b0;
            // Clear the fill buffer and fifo output on reset
            for (int i = 0; i < DEPTH; i++) begin
                buffer[i] <= '0;
                fifo_out[i] <= '0;
            end
        end else begin
            frame_ready <= 1'b0;

            if (mic_ready) begin
                buffer[write_index] <= mic_data;
                if (write_index == LAST_INDEX) begin
                    // When we have collected 16 samples, transfer them to the output and signal that a frame is ready
                    for (int i = 0; i < DEPTH-1; i++) begin
                        fifo_out[i] <= {buffer[i], 16'b0}; // Extend the 16-bit signed data to 32 bits for the FFT module by padding with zeros
                    end
                    fifo_out[DEPTH-1] <= {mic_data, 16'b0}; // Include the last sample that was just written to the buffer
                    frame_ready <= 1'b1; // Signal that a new frame of data is ready for processing
                    write_index <= '0; // Reset write index for the next frame
                end else begin
                    write_index <= write_index + 1'b1; // Move to the next index for the next sample
                end
            end
        end
    end

endmodule
