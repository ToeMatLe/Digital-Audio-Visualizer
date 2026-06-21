// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_pingpong_buffer.h for the primary calling header

#ifndef VERILATED_VTB_PINGPONG_BUFFER___024ROOT_H_
#define VERILATED_VTB_PINGPONG_BUFFER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_pingpong_buffer__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_pingpong_buffer___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_pingpong_buffer__DOT__clk;
    CData/*0:0*/ tb_pingpong_buffer__DOT__rst;
    CData/*0:0*/ tb_pingpong_buffer__DOT__frame_start;
    CData/*0:0*/ tb_pingpong_buffer__DOT__update;
    CData/*7:0*/ tb_pingpong_buffer__DOT__next_active_bars;
    CData/*0:0*/ tb_pingpong_buffer__DOT__dut__DOT__front_select;
    CData/*0:0*/ tb_pingpong_buffer__DOT__dut__DOT__update_pending;
    CData/*7:0*/ tb_pingpong_buffer__DOT__dut__DOT__active_bars0;
    CData/*7:0*/ tb_pingpong_buffer__DOT__dut__DOT__active_bars1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__rst__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<SData/*9:0*/, 8> tb_pingpong_buffer__DOT__next_bar_heights;
    VlUnpacked<SData/*9:0*/, 8> tb_pingpong_buffer__DOT__bar_heights;
    VlUnpacked<SData/*9:0*/, 8> tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0;
    VlUnpacked<SData/*9:0*/, 8> tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hb7a9aadd__0;
    VlTriggerScheduler __VtrigSched_hb7a9ab9d__0;

    // INTERNAL VARIABLES
    Vtb_pingpong_buffer__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_pingpong_buffer___024root(Vtb_pingpong_buffer__Syms* symsp, const char* namep);
    ~Vtb_pingpong_buffer___024root();
    VL_UNCOPYABLE(Vtb_pingpong_buffer___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
