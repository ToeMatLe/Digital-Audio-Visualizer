module vga
    #(parameter MAX_BARS = 128)
    (
        input  logic clk,
        input  logic rst,
        input  logic [7:0] active_bars,
        input  logic [9:0] bar_heights [0:MAX_BARS-1],
        output logic frame_start,
        output logic hsync,
        output logic vsync,
        output logic [3:0] red,
        output logic [3:0] green,
        output logic [3:0] blue
    );

    // 1): VGA protocol constants
    localparam HPIXELS  = 640;    // number of visible pixels per horizontal line
    localparam HFP      = 16;    // length (in pixels) of horizontal front porch
    localparam HSPULSE  = 96;    // length (in pixels) of hsync pulse
    localparam HBP      = 48;    // length (in pixels) of horizontal back porch

    localparam VPIXELS  = 480;    // number of visible horizontal lines per frame
    localparam VFP      = 10;    // length (in pixels) of vertical front porch
    localparam VSPULSE  = 2;    // length (in pixels) of vsync pulse
    localparam VBP      = 33;    // length (in pixels) of vertical back porch

    localparam HTOTAL = HPIXELS + HFP + HSPULSE + HBP;
    localparam VTOTAL = VPIXELS + VFP + VSPULSE + VBP;

    localparam BAR_INDEX_WIDTH = (MAX_BARS <= 1) ? 1 : $clog2(MAX_BARS);

    logic [1:0] pixel_divider;
    logic pixel_tick;
    logic [9:0] hc;
    logic [9:0] vc;
    logic activeVideo;
    logic [BAR_INDEX_WIDTH-1:0] bar_index;
    logic [9:0] current_height;
    logic within_bar;
    logic bar_pixel;
    int unsigned bar_index_calc;
    int unsigned bar_width_calc;
    int unsigned h_remainder;

    assign pixel_tick = (pixel_divider == 2'd3);
    assign frame_start = pixel_tick && (hc == HTOTAL - 1) && (vc == VTOTAL - 1);
    assign activeVideo = (hc < HPIXELS) && (vc < VPIXELS);
    assign hsync = (hc < HPIXELS + HFP) || (hc >= HPIXELS + HFP + HSPULSE);
    assign vsync = (vc < VPIXELS + VFP) || (vc >= VPIXELS + VFP + VSPULSE);

    always_ff @(posedge clk, posedge rst) begin
        if (rst) begin
            pixel_divider <= '0;
            hc <= '0;
            vc <= '0;
        end else begin
            pixel_divider <= pixel_divider + 1'b1;

            if (pixel_tick) begin
                if (hc == HTOTAL - 1) begin
                    hc <= '0;

                    if (vc == VTOTAL - 1)
                        vc <= '0;
                    else
                        vc <= vc + 1'b1;
                end else begin
                    hc <= hc + 1'b1;
                end
            end
        end
    end

    always_comb begin
        case (active_bars)
            8'd128: begin
                bar_width_calc = 5;
                bar_index_calc = int'(hc) / 5;
                h_remainder = int'(hc) % 5;
            end

            8'd64: begin
                bar_width_calc = 10;
                bar_index_calc = int'(hc) / 10;
                h_remainder = int'(hc) % 10;
            end

            default: begin
                bar_width_calc = 40;
                bar_index_calc = int'(hc) / 40;
                h_remainder = int'(hc) % 40;
            end
        endcase

        if (bar_index_calc >= active_bars)
            bar_index_calc = int'(active_bars) - 1;

        bar_index = bar_index_calc[BAR_INDEX_WIDTH-1:0];
        current_height = bar_heights[bar_index];
        within_bar = (h_remainder < (bar_width_calc - 2));
        bar_pixel = activeVideo &&
                    within_bar &&
                    (current_height != 0) &&
                    (vc >= VPIXELS - current_height);

        red = 4'h0;
        green = 4'h0;
        blue = 4'h0;

        if (activeVideo) begin
            red = 4'h1;
            green = 4'h1;
            blue = 4'h2;
        end

        if (bar_pixel) begin
            if (current_height < 10'd100) begin
                red = 4'hA;
                green = 4'hF;
                blue = 4'hE;
            end else if (current_height < 10'd200) begin
                red = 4'h5;
                green = 4'hD;
                blue = 4'hC;
            end else if (current_height < 10'd300) begin
                red = 4'h2;
                green = 4'hA;
                blue = 4'hB;
            end else if (current_height < 10'd400) begin
                red = 4'h1;
                green = 4'h6;
                blue = 4'hA;
            end else begin
                red = 4'h1;
                green = 4'h3;
                blue = 4'h7;
            end
        end
    end

endmodule
