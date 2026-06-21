// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pingpong_buffer.h for the primary calling header

#include "Vtb_pingpong_buffer__pch.h"

VlCoroutine Vtb_pingpong_buffer___024root___eval_initial__TOP__Vtiming__0(Vtb_pingpong_buffer___024root* vlSelf);
VlCoroutine Vtb_pingpong_buffer___024root___eval_initial__TOP__Vtiming__1(Vtb_pingpong_buffer___024root* vlSelf);

void Vtb_pingpong_buffer___024root___eval_initial(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval_initial\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_pingpong_buffer___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_pingpong_buffer___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_pingpong_buffer___024root___eval_initial__TOP__Vtiming__0(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_pingpong_buffer__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_pingpong_buffer.sv", 
                                             31);
        vlSelfRef.tb_pingpong_buffer__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelfRef.tb_pingpong_buffer__DOT__clk)));
    }
    co_return;
}

void Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9aadd__0(Vtb_pingpong_buffer___024root* vlSelf, const char* __VeventDescription);
void Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9ab9d__0(Vtb_pingpong_buffer___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_pingpong_buffer___024root___eval_initial__TOP__Vtiming__1(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_pingpong_buffer__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_pingpong_buffer__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_pingpong_buffer__DOT__pulse_update__0__base;
    __Vtask_tb_pingpong_buffer__DOT__pulse_update__0__base = 0;
    IData/*31:0*/ __Vtask_tb_pingpong_buffer__DOT__check_frame__2__base;
    __Vtask_tb_pingpong_buffer__DOT__check_frame__2__base = 0;
    IData/*31:0*/ __Vtask_tb_pingpong_buffer__DOT__check_frame__4__base;
    __Vtask_tb_pingpong_buffer__DOT__check_frame__4__base = 0;
    IData/*31:0*/ __Vtask_tb_pingpong_buffer__DOT__pulse_update__5__base;
    __Vtask_tb_pingpong_buffer__DOT__pulse_update__5__base = 0;
    IData/*31:0*/ __Vtask_tb_pingpong_buffer__DOT__check_frame__6__base;
    __Vtask_tb_pingpong_buffer__DOT__check_frame__6__base = 0;
    IData/*31:0*/ __Vtask_tb_pingpong_buffer__DOT__check_frame__8__base;
    __Vtask_tb_pingpong_buffer__DOT__check_frame__8__base = 0;
    // Body
    vlSelfRef.tb_pingpong_buffer__DOT__rst = 1U;
    vlSelfRef.tb_pingpong_buffer__DOT__frame_start = 0U;
    vlSelfRef.tb_pingpong_buffer__DOT__update = 0U;
    vlSelfRef.tb_pingpong_buffer__DOT__next_active_bars = 0U;
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[0U] = 0U;
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[1U] = 0U;
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[2U] = 0U;
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[3U] = 0U;
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[4U] = 0U;
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[5U] = 0U;
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[6U] = 0U;
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[7U] = 0U;
    tb_pingpong_buffer__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, tb_pingpong_buffer__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9aadd__0(vlSelf, 
                                                                  "@(posedge tb_pingpong_buffer.clk)");
        co_await vlSelfRef.__VtrigSched_hb7a9aadd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_pingpong_buffer.clk)", 
                                                             "tb_pingpong_buffer.sv", 
                                                             81);
        tb_pingpong_buffer__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_pingpong_buffer__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_pingpong_buffer__DOT__rst = 0U;
    __Vtask_tb_pingpong_buffer__DOT__pulse_update__0__base = 0x00000064U;
    Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9ab9d__0(vlSelf, 
                                                              "@(negedge tb_pingpong_buffer.clk)");
    co_await vlSelfRef.__VtrigSched_hb7a9ab9d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pingpong_buffer.clk)", 
                                                         "tb_pingpong_buffer.sv", 
                                                         36);
    vlSelfRef.tb_pingpong_buffer__DOT__next_active_bars = 8U;
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[0U] 
        = (0x000003ffU & __Vtask_tb_pingpong_buffer__DOT__pulse_update__0__base);
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[1U] 
        = (0x000003ffU & ((IData)(1U) + __Vtask_tb_pingpong_buffer__DOT__pulse_update__0__base));
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[2U] 
        = (0x000003ffU & ((IData)(2U) + __Vtask_tb_pingpong_buffer__DOT__pulse_update__0__base));
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[3U] 
        = (0x000003ffU & ((IData)(3U) + __Vtask_tb_pingpong_buffer__DOT__pulse_update__0__base));
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[4U] 
        = (0x000003ffU & ((IData)(4U) + __Vtask_tb_pingpong_buffer__DOT__pulse_update__0__base));
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[5U] 
        = (0x000003ffU & ((IData)(5U) + __Vtask_tb_pingpong_buffer__DOT__pulse_update__0__base));
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[6U] 
        = (0x000003ffU & ((IData)(6U) + __Vtask_tb_pingpong_buffer__DOT__pulse_update__0__base));
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[7U] 
        = (0x000003ffU & ((IData)(7U) + __Vtask_tb_pingpong_buffer__DOT__pulse_update__0__base));
    vlSelfRef.tb_pingpong_buffer__DOT__update = 1U;
    Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9ab9d__0(vlSelf, 
                                                              "@(negedge tb_pingpong_buffer.clk)");
    co_await vlSelfRef.__VtrigSched_hb7a9ab9d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pingpong_buffer.clk)", 
                                                         "tb_pingpong_buffer.sv", 
                                                         44);
    vlSelfRef.tb_pingpong_buffer__DOT__update = 0U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[0U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:88: Assertion failed in %Ntb_pingpong_buffer.unnamedblk4: Front buffer changed before frame boundary\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_pingpong_buffer.sv", 88, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[1U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:88: Assertion failed in %Ntb_pingpong_buffer.unnamedblk4: Front buffer changed before frame boundary\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_pingpong_buffer.sv", 88, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[2U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:88: Assertion failed in %Ntb_pingpong_buffer.unnamedblk4: Front buffer changed before frame boundary\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_pingpong_buffer.sv", 88, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[3U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:88: Assertion failed in %Ntb_pingpong_buffer.unnamedblk4: Front buffer changed before frame boundary\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_pingpong_buffer.sv", 88, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[4U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:88: Assertion failed in %Ntb_pingpong_buffer.unnamedblk4: Front buffer changed before frame boundary\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_pingpong_buffer.sv", 88, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[5U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:88: Assertion failed in %Ntb_pingpong_buffer.unnamedblk4: Front buffer changed before frame boundary\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_pingpong_buffer.sv", 88, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[6U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:88: Assertion failed in %Ntb_pingpong_buffer.unnamedblk4: Front buffer changed before frame boundary\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_pingpong_buffer.sv", 88, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0U != vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[7U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:88: Assertion failed in %Ntb_pingpong_buffer.unnamedblk4: Front buffer changed before frame boundary\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name());
            VL_STOP_MT("tb_pingpong_buffer.sv", 88, "", false);
        }
    }
    Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9ab9d__0(vlSelf, 
                                                              "@(negedge tb_pingpong_buffer.clk)");
    co_await vlSelfRef.__VtrigSched_hb7a9ab9d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pingpong_buffer.clk)", 
                                                         "tb_pingpong_buffer.sv", 
                                                         51);
    vlSelfRef.tb_pingpong_buffer__DOT__frame_start = 1U;
    Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9ab9d__0(vlSelf, 
                                                              "@(negedge tb_pingpong_buffer.clk)");
    co_await vlSelfRef.__VtrigSched_hb7a9ab9d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pingpong_buffer.clk)", 
                                                         "tb_pingpong_buffer.sv", 
                                                         53);
    vlSelfRef.tb_pingpong_buffer__DOT__frame_start = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb_pingpong_buffer.sv", 
                                         55);
    __Vtask_tb_pingpong_buffer__DOT__check_frame__2__base = 0x00000064U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((8U != ((IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__front_select)
                                  ? (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars1)
                                  : (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars0)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:62: Assertion failed in %Ntb_pingpong_buffer.check_frame: Wrong active bar count: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),8,((IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__front_select)
                                                ? (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars1)
                                                : (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars0)));
            VL_STOP_MT("tb_pingpong_buffer.sv", 62, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[0U] 
                          != (0x000003ffU & __Vtask_tb_pingpong_buffer__DOT__check_frame__2__base))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 0 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[0U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[1U] 
                          != (0x000003ffU & ((IData)(1U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__2__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 1 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[1U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[2U] 
                          != (0x000003ffU & ((IData)(2U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__2__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 2 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[2U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[3U] 
                          != (0x000003ffU & ((IData)(3U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__2__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 3 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[3U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[4U] 
                          != (0x000003ffU & ((IData)(4U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__2__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 4 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[4U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[5U] 
                          != (0x000003ffU & ((IData)(5U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__2__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 5 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[5U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[6U] 
                          != (0x000003ffU & ((IData)(6U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__2__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 6 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[6U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[7U] 
                          != (0x000003ffU & ((IData)(7U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__2__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 7 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[7U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9ab9d__0(vlSelf, 
                                                              "@(negedge tb_pingpong_buffer.clk)");
    co_await vlSelfRef.__VtrigSched_hb7a9ab9d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pingpong_buffer.clk)", 
                                                         "tb_pingpong_buffer.sv", 
                                                         51);
    vlSelfRef.tb_pingpong_buffer__DOT__frame_start = 1U;
    Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9ab9d__0(vlSelf, 
                                                              "@(negedge tb_pingpong_buffer.clk)");
    co_await vlSelfRef.__VtrigSched_hb7a9ab9d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pingpong_buffer.clk)", 
                                                         "tb_pingpong_buffer.sv", 
                                                         53);
    vlSelfRef.tb_pingpong_buffer__DOT__frame_start = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb_pingpong_buffer.sv", 
                                         55);
    __Vtask_tb_pingpong_buffer__DOT__check_frame__4__base = 0x00000064U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((8U != ((IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__front_select)
                                  ? (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars1)
                                  : (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars0)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:62: Assertion failed in %Ntb_pingpong_buffer.check_frame: Wrong active bar count: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),8,((IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__front_select)
                                                ? (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars1)
                                                : (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars0)));
            VL_STOP_MT("tb_pingpong_buffer.sv", 62, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[0U] 
                          != (0x000003ffU & __Vtask_tb_pingpong_buffer__DOT__check_frame__4__base))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 0 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[0U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[1U] 
                          != (0x000003ffU & ((IData)(1U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__4__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 1 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[1U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[2U] 
                          != (0x000003ffU & ((IData)(2U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__4__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 2 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[2U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[3U] 
                          != (0x000003ffU & ((IData)(3U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__4__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 3 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[3U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[4U] 
                          != (0x000003ffU & ((IData)(4U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__4__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 4 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[4U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[5U] 
                          != (0x000003ffU & ((IData)(5U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__4__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 5 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[5U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[6U] 
                          != (0x000003ffU & ((IData)(6U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__4__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 6 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[6U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[7U] 
                          != (0x000003ffU & ((IData)(7U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__4__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 7 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[7U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    __Vtask_tb_pingpong_buffer__DOT__pulse_update__5__base = 0x000000c8U;
    Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9ab9d__0(vlSelf, 
                                                              "@(negedge tb_pingpong_buffer.clk)");
    co_await vlSelfRef.__VtrigSched_hb7a9ab9d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pingpong_buffer.clk)", 
                                                         "tb_pingpong_buffer.sv", 
                                                         36);
    vlSelfRef.tb_pingpong_buffer__DOT__next_active_bars = 8U;
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[0U] 
        = (0x000003ffU & __Vtask_tb_pingpong_buffer__DOT__pulse_update__5__base);
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[1U] 
        = (0x000003ffU & ((IData)(1U) + __Vtask_tb_pingpong_buffer__DOT__pulse_update__5__base));
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[2U] 
        = (0x000003ffU & ((IData)(2U) + __Vtask_tb_pingpong_buffer__DOT__pulse_update__5__base));
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[3U] 
        = (0x000003ffU & ((IData)(3U) + __Vtask_tb_pingpong_buffer__DOT__pulse_update__5__base));
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[4U] 
        = (0x000003ffU & ((IData)(4U) + __Vtask_tb_pingpong_buffer__DOT__pulse_update__5__base));
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[5U] 
        = (0x000003ffU & ((IData)(5U) + __Vtask_tb_pingpong_buffer__DOT__pulse_update__5__base));
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[6U] 
        = (0x000003ffU & ((IData)(6U) + __Vtask_tb_pingpong_buffer__DOT__pulse_update__5__base));
    vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[7U] 
        = (0x000003ffU & ((IData)(7U) + __Vtask_tb_pingpong_buffer__DOT__pulse_update__5__base));
    vlSelfRef.tb_pingpong_buffer__DOT__update = 1U;
    Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9ab9d__0(vlSelf, 
                                                              "@(negedge tb_pingpong_buffer.clk)");
    co_await vlSelfRef.__VtrigSched_hb7a9ab9d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pingpong_buffer.clk)", 
                                                         "tb_pingpong_buffer.sv", 
                                                         44);
    vlSelfRef.tb_pingpong_buffer__DOT__update = 0U;
    __Vtask_tb_pingpong_buffer__DOT__check_frame__6__base = 0x00000064U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((8U != ((IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__front_select)
                                  ? (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars1)
                                  : (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars0)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:62: Assertion failed in %Ntb_pingpong_buffer.check_frame: Wrong active bar count: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),8,((IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__front_select)
                                                ? (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars1)
                                                : (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars0)));
            VL_STOP_MT("tb_pingpong_buffer.sv", 62, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[0U] 
                          != (0x000003ffU & __Vtask_tb_pingpong_buffer__DOT__check_frame__6__base))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 0 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[0U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[1U] 
                          != (0x000003ffU & ((IData)(1U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__6__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 1 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[1U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[2U] 
                          != (0x000003ffU & ((IData)(2U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__6__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 2 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[2U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[3U] 
                          != (0x000003ffU & ((IData)(3U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__6__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 3 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[3U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[4U] 
                          != (0x000003ffU & ((IData)(4U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__6__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 4 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[4U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[5U] 
                          != (0x000003ffU & ((IData)(5U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__6__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 5 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[5U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[6U] 
                          != (0x000003ffU & ((IData)(6U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__6__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 6 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[6U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[7U] 
                          != (0x000003ffU & ((IData)(7U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__6__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 7 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[7U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9ab9d__0(vlSelf, 
                                                              "@(negedge tb_pingpong_buffer.clk)");
    co_await vlSelfRef.__VtrigSched_hb7a9ab9d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pingpong_buffer.clk)", 
                                                         "tb_pingpong_buffer.sv", 
                                                         51);
    vlSelfRef.tb_pingpong_buffer__DOT__frame_start = 1U;
    Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9ab9d__0(vlSelf, 
                                                              "@(negedge tb_pingpong_buffer.clk)");
    co_await vlSelfRef.__VtrigSched_hb7a9ab9d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_pingpong_buffer.clk)", 
                                                         "tb_pingpong_buffer.sv", 
                                                         53);
    vlSelfRef.tb_pingpong_buffer__DOT__frame_start = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb_pingpong_buffer.sv", 
                                         55);
    __Vtask_tb_pingpong_buffer__DOT__check_frame__8__base = 0x000000c8U;
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((8U != ((IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__front_select)
                                  ? (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars1)
                                  : (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars0)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:62: Assertion failed in %Ntb_pingpong_buffer.check_frame: Wrong active bar count: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),8,((IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__front_select)
                                                ? (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars1)
                                                : (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars0)));
            VL_STOP_MT("tb_pingpong_buffer.sv", 62, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[0U] 
                          != (0x000003ffU & __Vtask_tb_pingpong_buffer__DOT__check_frame__8__base))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 0 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[0U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[1U] 
                          != (0x000003ffU & ((IData)(1U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__8__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 1 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[1U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[2U] 
                          != (0x000003ffU & ((IData)(2U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__8__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 2 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[2U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[3U] 
                          != (0x000003ffU & ((IData)(3U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__8__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 3 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[3U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[4U] 
                          != (0x000003ffU & ((IData)(4U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__8__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 4 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[4U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[5U] 
                          != (0x000003ffU & ((IData)(5U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__8__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 5 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[5U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[6U] 
                          != (0x000003ffU & ((IData)(6U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__8__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 6 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[6U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[7U] 
                          != (0x000003ffU & ((IData)(7U) 
                                             + __Vtask_tb_pingpong_buffer__DOT__check_frame__8__base)))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_pingpong_buffer.sv:66: Assertion failed in %Ntb_pingpong_buffer.check_frame.unnamedblk2: Bar 7 mismatch: got %0#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),10,vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[7U]);
            VL_STOP_MT("tb_pingpong_buffer.sv", 66, "", false);
        }
    }
    VL_WRITEF_NX("PASS: ping-pong buffer swaps complete bar snapshots only at frame boundaries.\n",0);
    VL_FINISH_MT("tb_pingpong_buffer.sv", 103, "");
    co_return;
}

void Vtb_pingpong_buffer___024root___eval_triggers_vec__act(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval_triggers_vec__act\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.tb_pingpong_buffer__DOT__clk)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__clk__0)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.tb_pingpong_buffer__DOT__rst) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__rst__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_pingpong_buffer__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__clk__0 
        = vlSelfRef.tb_pingpong_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__rst__0 
        = vlSelfRef.tb_pingpong_buffer__DOT__rst;
}

bool Vtb_pingpong_buffer___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_pingpong_buffer___024root___nba_sequent__TOP__0(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___nba_sequent__TOP__0\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__tb_pingpong_buffer__DOT__dut__DOT__front_select;
    __Vdly__tb_pingpong_buffer__DOT__dut__DOT__front_select = 0;
    CData/*0:0*/ __Vdly__tb_pingpong_buffer__DOT__dut__DOT__update_pending;
    __Vdly__tb_pingpong_buffer__DOT__dut__DOT__update_pending = 0;
    CData/*0:0*/ __VdlySet__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v0;
    __VdlySet__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v0 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v8;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v8;
    __VdlySet__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v8 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v9;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v9 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v10;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v10 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v11;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v11 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v12;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v12 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v13;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v13 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v14;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v14 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v15;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v15 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v8;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v8;
    __VdlySet__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v8 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v9;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v9 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v10;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v10 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v11;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v11 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v12;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v12 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v13;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v13 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v14;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v14 = 0;
    SData/*9:0*/ __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v15;
    __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v15 = 0;
    // Body
    __Vdly__tb_pingpong_buffer__DOT__dut__DOT__update_pending 
        = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__update_pending;
    __Vdly__tb_pingpong_buffer__DOT__dut__DOT__front_select 
        = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__front_select;
    __VdlySet__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v8 = 0U;
    __VdlySet__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v8 = 0U;
    __VdlySet__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v0 = 0U;
    if (vlSelfRef.tb_pingpong_buffer__DOT__rst) {
        __Vdly__tb_pingpong_buffer__DOT__dut__DOT__front_select = 0U;
        __Vdly__tb_pingpong_buffer__DOT__dut__DOT__update_pending = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars0 = 0x10U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars1 = 0x10U;
        __VdlySet__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v0 = 1U;
    } else {
        if (vlSelfRef.tb_pingpong_buffer__DOT__update) {
            __Vdly__tb_pingpong_buffer__DOT__dut__DOT__update_pending = 1U;
            if (vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__front_select) {
                vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars0 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_active_bars;
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v8 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[0U];
                __VdlySet__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v8 = 1U;
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v9 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[1U];
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v10 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[2U];
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v11 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[3U];
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v12 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[4U];
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v13 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[5U];
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v14 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[6U];
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v15 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[7U];
            } else {
                vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__active_bars1 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_active_bars;
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v8 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[0U];
                __VdlySet__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v8 = 1U;
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v9 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[1U];
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v10 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[2U];
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v11 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[3U];
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v12 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[4U];
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v13 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[5U];
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v14 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[6U];
                __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v15 
                    = vlSelfRef.tb_pingpong_buffer__DOT__next_bar_heights[7U];
            }
        }
        if (((IData)(vlSelfRef.tb_pingpong_buffer__DOT__frame_start) 
             & (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__update_pending))) {
            __Vdly__tb_pingpong_buffer__DOT__dut__DOT__front_select 
                = (1U & (~ (IData)(vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__front_select)));
            __Vdly__tb_pingpong_buffer__DOT__dut__DOT__update_pending = 0U;
        }
    }
    vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__update_pending 
        = __Vdly__tb_pingpong_buffer__DOT__dut__DOT__update_pending;
    vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__front_select 
        = __Vdly__tb_pingpong_buffer__DOT__dut__DOT__front_select;
    if (__VdlySet__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v0) {
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[0U] = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[1U] = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[2U] = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[3U] = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[4U] = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[5U] = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[6U] = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[7U] = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[0U] = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[1U] = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[2U] = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[3U] = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[4U] = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[5U] = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[6U] = 0U;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[7U] = 0U;
    }
    if (__VdlySet__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v8) {
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[0U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v8;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[1U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v9;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[2U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v10;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[3U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v11;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[4U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v12;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[5U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v13;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[6U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v14;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[7U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0__v15;
    }
    if (__VdlySet__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v8) {
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[0U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v8;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[1U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v9;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[2U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v10;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[3U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v11;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[4U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v12;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[5U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v13;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[6U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v14;
        vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[7U] 
            = __VdlyVal__tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1__v15;
    }
    if (vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__front_select) {
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[0U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[0U];
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[1U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[1U];
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[2U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[2U];
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[3U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[3U];
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[4U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[4U];
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[5U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[5U];
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[6U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[6U];
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[7U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[7U];
    } else {
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[0U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[0U];
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[1U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[1U];
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[2U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[2U];
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[3U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[3U];
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[4U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[4U];
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[5U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[5U];
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[6U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[6U];
        vlSelfRef.tb_pingpong_buffer__DOT__bar_heights[7U] 
            = vlSelfRef.tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[7U];
    }
}

void Vtb_pingpong_buffer___024root___eval_nba(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval_nba\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_pingpong_buffer___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_pingpong_buffer___024root___timing_ready(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___timing_ready\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb7a9aadd__0.ready("@(posedge tb_pingpong_buffer.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready("@(negedge tb_pingpong_buffer.clk)");
    }
}

void Vtb_pingpong_buffer___024root___timing_resume(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___timing_resume\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hb7a9aadd__0.moveToResumeQueue(
                                                          "@(posedge tb_pingpong_buffer.clk)");
    vlSelfRef.__VtrigSched_hb7a9ab9d__0.moveToResumeQueue(
                                                          "@(negedge tb_pingpong_buffer.clk)");
    vlSelfRef.__VtrigSched_hb7a9aadd__0.resume("@(posedge tb_pingpong_buffer.clk)");
    vlSelfRef.__VtrigSched_hb7a9ab9d__0.resume("@(negedge tb_pingpong_buffer.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_pingpong_buffer___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pingpong_buffer___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_pingpong_buffer___024root___eval_phase__act(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval_phase__act\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_pingpong_buffer___024root___eval_triggers_vec__act(vlSelf);
    Vtb_pingpong_buffer___024root___timing_ready(vlSelf);
    Vtb_pingpong_buffer___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_pingpong_buffer___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_pingpong_buffer___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_pingpong_buffer___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_pingpong_buffer___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_pingpong_buffer___024root___eval_phase__inact(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval_phase__inact\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_pingpong_buffer.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_pingpong_buffer___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_pingpong_buffer___024root___eval_phase__nba(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval_phase__nba\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_pingpong_buffer___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_pingpong_buffer___024root___eval_nba(vlSelf);
        Vtb_pingpong_buffer___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_pingpong_buffer___024root___eval(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_pingpong_buffer___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_pingpong_buffer.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_pingpong_buffer.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_pingpong_buffer___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_pingpong_buffer.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_pingpong_buffer___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_pingpong_buffer___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_pingpong_buffer___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9aadd__0(Vtb_pingpong_buffer___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9aadd__0\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_pingpong_buffer__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_pingpong_buffer__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__clk__0 
        = vlSelfRef.tb_pingpong_buffer__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb7a9aadd__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9ab9d__0(Vtb_pingpong_buffer___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root____VbeforeTrig_hb7a9ab9d__0\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_pingpong_buffer__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_pingpong_buffer__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__clk__0 
        = vlSelfRef.tb_pingpong_buffer__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb7a9aadd__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hb7a9ab9d__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_pingpong_buffer___024root___eval_debug_assertions(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval_debug_assertions\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
