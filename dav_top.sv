module dav_top(

    );
	
	
	// ADC IP instantiation
	mic_xadc XADC_INST (
		// Inputs
        .daddr_in(7'h16),			// DRP address
        .dclk_in(clk),				// DRP clock
        .reset_in(rst),				// Active high RST
        .den_in(adc_eoc),			// DRP enable
        .di_in(16'h0),				// DRP data in (unconnected)
        .dwe_in(1'b0),				// DRP write enable (unconnected)
        .vauxp6(vauxp6),			// Aux analog input channel 6 (pos)
        .vauxn6(vauxn6),			// Aux analog input channel 6 (neg)
		.vp_in(1'b0),				// Dedicated analog in (pos) (unconnected)
        .vn_in(1'b0),				// Dedicated analog in (neg) (unconnected)
        // Outputs
        .busy_out(adc_busy),		// ADC busy
        .channel_out(channel_out),	// Current channel
        .do_out(adc_raw_data),		// DRP data output
        .drdy_out(adc_data_ready),	// DRP data ready 
        .eoc_out(adc_eoc),			// End of conversion
        .eos_out(),					// End of sequence (unconnected)
        .alarm_out()				// Alarm (unconnected)
    );


endmodule
