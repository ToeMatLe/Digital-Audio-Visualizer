// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_bar_mapper.h for the primary calling header

#ifndef VERILATED_VTB_BAR_MAPPER___024ROOT_H_
#define VERILATED_VTB_BAR_MAPPER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_bar_mapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_bar_mapper___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_bar_mapper__DOT__switch16;
    CData/*0:0*/ tb_bar_mapper__DOT__switch64;
    CData/*0:0*/ tb_bar_mapper__DOT__switch128;
    CData/*7:0*/ tb_bar_mapper__DOT__active_bars;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<SData/*9:0*/, 64> tb_bar_mapper__DOT__bin_heights;
    VlUnpacked<SData/*9:0*/, 128> tb_bar_mapper__DOT__bar_heights;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_bar_mapper__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_bar_mapper___024root(Vtb_bar_mapper__Syms* symsp, const char* namep);
    ~Vtb_bar_mapper___024root();
    VL_UNCOPYABLE(Vtb_bar_mapper___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
