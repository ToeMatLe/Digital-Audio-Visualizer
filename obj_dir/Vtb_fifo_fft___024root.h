// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fifo_fft.h for the primary calling header

#ifndef VERILATED_VTB_FIFO_FFT___024ROOT_H_
#define VERILATED_VTB_FIFO_FFT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fifo_fft__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fifo_fft___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fifo_fft__DOT__clk;
    CData/*0:0*/ tb_fifo_fft__DOT__rst;
    CData/*0:0*/ tb_fifo_fft__DOT__mic_ready;
    CData/*0:0*/ tb_fifo_fft__DOT__frame_ready;
    CData/*0:0*/ tb_fifo_fft__DOT__fft_done;
    CData/*3:0*/ tb_fifo_fft__DOT__dut_fifo__DOT__write_index;
    CData/*1:0*/ tb_fifo_fft__DOT__dut_fft__DOT__state;
    CData/*3:0*/ __Vdly__tb_fifo_fft__DOT__dut_fifo__DOT__write_index;
    CData/*0:0*/ __VdlySet__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v0;
    CData/*0:0*/ __VdlySet__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v16;
    CData/*0:0*/ __VdlySet__tb_fifo_fft__DOT__fifo_out__v16;
    CData/*0:0*/ __VdlySet__tb_fifo_fft__DOT__fifo_out__v17;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo_fft__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo_fft__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr_h29f42cb2__1;
    CData/*0:0*/ __Vtrigprevexpr_h8d6f63da__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fifo_fft__DOT__fft_done__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ tb_fifo_fft__DOT__mic_data;
    SData/*15:0*/ tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT____VdfgRegularize_h07342c17_0_4;
    SData/*15:0*/ tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT____VdfgRegularize_h07342c17_0_5;
    IData/*31:0*/ tb_fifo_fft__DOT__frame_count;
    IData/*31:0*/ tb_fifo_fft__DOT__dut_fft__DOT__bu_A;
    IData/*31:0*/ tb_fifo_fft__DOT__dut_fft__DOT__stage_index;
    IData/*31:0*/ tb_fifo_fft__DOT__dut_fft__DOT__group_index;
    IData/*31:0*/ tb_fifo_fft__DOT__dut_fft__DOT__pair_index;
    IData/*31:0*/ tb_fifo_fft__DOT__dut_fft__DOT__index_a;
    IData/*31:0*/ tb_fifo_fft__DOT__dut_fft__DOT__index_b;
    IData/*31:0*/ tb_fifo_fft__DOT__dut_fft__DOT__half_size;
    IData/*31:0*/ tb_fifo_fft__DOT__dut_fft__DOT__stage_size;
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__wait_for_frame__4__expected_count;
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__wait_for_frame__11__expected_count;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 16> tb_fifo_fft__DOT__fifo_out;
    VlUnpacked<IData/*31:0*/, 16> tb_fifo_fft__DOT__fft_out;
    VlUnpacked<SData/*15:0*/, 16> tb_fifo_fft__DOT__dut_fifo__DOT__buffer;
    VlUnpacked<IData/*31:0*/, 16> tb_fifo_fft__DOT__dut_fft__DOT__data;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h48b8a5d3__0;
    VlTriggerScheduler __VtrigSched_h48b8a27f__0;
    VlTriggerScheduler __VtrigSched_h7dc31d1b__0;
    VlTriggerScheduler __VtrigSched_h19585463__0;
    VlTriggerScheduler __VtrigSched_ha77b1eaa__0;

    // INTERNAL VARIABLES
    Vtb_fifo_fft__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_fifo_fft___024root(Vtb_fifo_fft__Syms* symsp, const char* namep);
    ~Vtb_fifo_fft___024root();
    VL_UNCOPYABLE(Vtb_fifo_fft___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
