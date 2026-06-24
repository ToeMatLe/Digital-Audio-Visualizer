# FPGA Digital Audio Visualizer

This project is a SystemVerilog audio visualizer for the Digilent Basys 3 FPGA board. It samples an analog microphone input through the XADC, runs the samples through selectable FFT sizes, converts frequency magnitudes into bar heights, and displays the result as a VGA bar visualizer.

## What It Does

The top-level design is `dav_top.sv`. The current signal path is:

1. `clock_divider.sv` creates a one-cycle `sample_enable` pulse from the 100 MHz board clock.
2. `mic.sv` reads analog input from XADC auxiliary channel 6 using `vauxp6`/`vauxn6`.
3. `fifo.sv` collects audio samples into complete frames for each FFT size.
4. `fft.sv` performs a radix-2 FFT on 16, 64, or 128 samples.
5. `magnitude.sv` converts complex FFT bins into 10-bit bar heights.
6. `pingpong_buffer.sv` swaps complete bar frames only at VGA frame boundaries to avoid tearing.
7. `vga.sv` renders the selected bars to a 640x480 VGA display.


## Video Demo

Add a demo video here later:

<!-- Drag in or link your demo video here. -->

## Hardware Target

- Board: Digilent Basys 3
- Clock: 100 MHz board clock
- Audio input: XADC auxiliary channel 6
- Video output: VGA, 640x480 timing
- Top module: `dav_top`
- Constraint file: `run.xdc`
- Xilinx IP: `xadc_wiz_0.xci`

## Controls

The design instantiates 16-point, 64-point, and 128-point FFT paths in parallel. The switches select which visualizer resolution is shown:

| Signal | Function |
| --- | --- |
| `switch16` | Show 16 bars |
| `switch64` | Show 64 bars |
| `switch128` | Show 128 bars |

If multiple switches are active, `switch128` has priority, then `switch64`, then `switch16`. If no size switch is active, the display defaults to 16 bars.

## Main Files

| File | Purpose |
| --- | --- |
| `dav_top.sv` | Top-level module that wires the full audio-to-VGA pipeline |
| `clock_divider.sv` | Generates the sample-rate enable pulse |
| `mic.sv` | Wraps the XADC microphone sample path |
| `fifo.sv` | Builds complete sample frames for the FFT |
| `fft.sv` | Parameterized radix-2 FFT engine |
| `butterfly_unit.sv` | Complex butterfly math used by the FFT |
| `magnitude.sv` | Converts FFT output bins into display heights |
| `pingpong_buffer.sv` | Buffers complete visual frames for clean VGA updates |
| `vga.sv` | VGA timing and bar rendering |
| `run.xdc` | Basys 3 pin and clock constraints |
| `xadc_wiz_0.xci` | Vivado XADC IP configuration |

## Simulation

The repo includes focused SystemVerilog testbenches:

| Testbench | Checks |
| --- | --- |
| `tb_fifo_fft.sv` | FIFO frame assembly and stable FFT frame snapshots |
| `tb_pingpong_buffer.sv` | Bar-buffer swaps only happen on frame boundaries |

The generated Verilator build output goes into `obj_dir/`, which is ignored by Git.

## Vivado Notes

Add the SystemVerilog sources, `run.xdc`, and `xadc_wiz_0.xci` to a Vivado project targeting the Basys 3 FPGA. Use `dav_top` as the top module.

`SAMPLE_DIVISOR` in `dav_top.sv` controls how often samples are accepted from the XADC path. With the current value of `8000`, a 100 MHz input clock produces sample-enable pulses at about 12.5 kHz.

