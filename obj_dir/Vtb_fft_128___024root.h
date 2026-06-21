// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fft_128.h for the primary calling header

#ifndef VERILATED_VTB_FFT_128___024ROOT_H_
#define VERILATED_VTB_FFT_128___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fft_128__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fft_128___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fft_128__DOT__clk;
    CData/*0:0*/ tb_fft_128__DOT__rst;
    CData/*0:0*/ tb_fft_128__DOT__start;
    CData/*0:0*/ tb_fft_128__DOT__done;
    CData/*1:0*/ tb_fft_128__DOT__dut__DOT__state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fft_128__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fft_128__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fft_128__DOT__done__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ tb_fft_128__DOT__dut__DOT__stage_index;
    IData/*31:0*/ tb_fft_128__DOT__dut__DOT__group_index;
    IData/*31:0*/ tb_fft_128__DOT__dut__DOT__pair_index;
    IData/*31:0*/ tb_fft_128__DOT__dut__DOT__index_a;
    IData/*31:0*/ tb_fft_128__DOT__dut__DOT__index_b;
    IData/*31:0*/ tb_fft_128__DOT__dut__DOT__half_size;
    IData/*31:0*/ tb_fft_128__DOT__dut__DOT__stage_size;
    IData/*31:0*/ tb_fft_128__DOT__dut__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ tb_fft_128__DOT__dut__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ tb_fft_128__DOT__dut__DOT__unnamedblk4__DOT__i;
    IData/*16:0*/ tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_4;
    IData/*16:0*/ tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_5;
    IData/*16:0*/ tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_6;
    IData/*16:0*/ tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_7;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 128> tb_fft_128__DOT__fft_in;
    VlUnpacked<IData/*31:0*/, 128> tb_fft_128__DOT__fft_out;
    VlUnpacked<IData/*31:0*/, 128> tb_fft_128__DOT__dut__DOT__data;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 128>, false, IData/*31:0*/, 1> __VdlyCommitQueuetb_fft_128__DOT__dut__DOT__data;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 128>, false, IData/*31:0*/, 1> __VdlyCommitQueuetb_fft_128__DOT__fft_out;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8d41f7fd__0;
    VlTriggerScheduler __VtrigSched_h8d41f8bd__0;
    VlTriggerScheduler __VtrigSched_h4ebd7bf3__0;

    // INTERNAL VARIABLES
    Vtb_fft_128__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_fft_128___024root(Vtb_fft_128__Syms* symsp, const char* namep);
    ~Vtb_fft_128___024root();
    VL_UNCOPYABLE(Vtb_fft_128___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
