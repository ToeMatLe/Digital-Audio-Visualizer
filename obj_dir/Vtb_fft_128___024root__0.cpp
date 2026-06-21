// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fft_128.h for the primary calling header

#include "Vtb_fft_128__pch.h"

VlCoroutine Vtb_fft_128___024root___eval_initial__TOP__Vtiming__0(Vtb_fft_128___024root* vlSelf);
VlCoroutine Vtb_fft_128___024root___eval_initial__TOP__Vtiming__1(Vtb_fft_128___024root* vlSelf);

void Vtb_fft_128___024root___eval_initial(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval_initial\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fft_128___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fft_128___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_fft_128___024root___eval_initial__TOP__Vtiming__0(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fft_128__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_fft_128.sv", 
                                             27);
        vlSelfRef.tb_fft_128__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_fft_128__DOT__clk)));
    }
    co_return;
}

void Vtb_fft_128___024root____VbeforeTrig_h8d41f7fd__0(Vtb_fft_128___024root* vlSelf, const char* __VeventDescription);
void Vtb_fft_128___024root____VbeforeTrig_h8d41f8bd__0(Vtb_fft_128___024root* vlSelf, const char* __VeventDescription);
void Vtb_fft_128___024root____VbeforeTrig_h4ebd7bf3__0(Vtb_fft_128___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_fft_128___024root___eval_initial__TOP__Vtiming__1(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_fft_128__DOT__unnamedblk1__DOT__i;
    tb_fft_128__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ tb_fft_128__DOT__unnamedblk2__DOT__i;
    tb_fft_128__DOT__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ tb_fft_128__DOT__unnamedblk3__DOT__i;
    tb_fft_128__DOT__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ tb_fft_128__DOT__unnamedblk4__DOT__i;
    tb_fft_128__DOT__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_fft_128__DOT__reset_dut__0__tb_fft_128__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_fft_128__DOT__reset_dut__0__tb_fft_128__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_fft_128__DOT__reset_dut__0__tb_fft_128__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_fft_128__DOT__reset_dut__0__tb_fft_128__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_fft_128__DOT__reset_dut__2__tb_fft_128__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_fft_128__DOT__reset_dut__2__tb_fft_128__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_fft_128__DOT__reset_dut__2__tb_fft_128__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_fft_128__DOT__reset_dut__2__tb_fft_128__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    tb_fft_128__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000080U, tb_fft_128__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.tb_fft_128__DOT__fft_in[(0x0000007fU 
                                           & tb_fft_128__DOT__unnamedblk1__DOT__i)] = 0U;
        tb_fft_128__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                                + tb_fft_128__DOT__unnamedblk1__DOT__i);
    }
    __Vtask_tb_fft_128__DOT__reset_dut__0__tb_fft_128__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.tb_fft_128__DOT__rst = 1U;
    vlSelfRef.tb_fft_128__DOT__start = 0U;
    __Vtask_tb_fft_128__DOT__reset_dut__0__tb_fft_128__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fft_128__DOT__reset_dut__0__tb_fft_128__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_fft_128___024root____VbeforeTrig_h8d41f7fd__0(vlSelf, 
                                                          "@(posedge tb_fft_128.clk)");
        co_await vlSelfRef.__VtrigSched_h8d41f7fd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fft_128.clk)", 
                                                             "tb_fft_128.sv", 
                                                             34);
        __Vtask_tb_fft_128__DOT__reset_dut__0__tb_fft_128__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_fft_128__DOT__reset_dut__0__tb_fft_128__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_fft_128__DOT__rst = 0U;
    __Vtask_tb_fft_128__DOT__reset_dut__0__tb_fft_128__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fft_128__DOT__reset_dut__0__tb_fft_128__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_fft_128___024root____VbeforeTrig_h8d41f7fd__0(vlSelf, 
                                                          "@(posedge tb_fft_128.clk)");
        co_await vlSelfRef.__VtrigSched_h8d41f7fd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fft_128.clk)", 
                                                             "tb_fft_128.sv", 
                                                             36);
        __Vtask_tb_fft_128__DOT__reset_dut__0__tb_fft_128__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_fft_128__DOT__reset_dut__0__tb_fft_128__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.tb_fft_128__DOT__fft_in[0U] = 0x7f000000U;
    Vtb_fft_128___024root____VbeforeTrig_h8d41f8bd__0(vlSelf, 
                                                      "@(negedge tb_fft_128.clk)");
    co_await vlSelfRef.__VtrigSched_h8d41f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fft_128.clk)", 
                                                         "tb_fft_128.sv", 
                                                         42);
    vlSelfRef.tb_fft_128__DOT__start = 1U;
    Vtb_fft_128___024root____VbeforeTrig_h8d41f8bd__0(vlSelf, 
                                                      "@(negedge tb_fft_128.clk)");
    co_await vlSelfRef.__VtrigSched_h8d41f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fft_128.clk)", 
                                                         "tb_fft_128.sv", 
                                                         44);
    vlSelfRef.tb_fft_128__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_fft_128__DOT__done)))) {
        Vtb_fft_128___024root____VbeforeTrig_h4ebd7bf3__0(vlSelf, 
                                                          "@( tb_fft_128.done)");
        co_await vlSelfRef.__VtrigSched_h4ebd7bf3__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_fft_128.done)", 
                                                             "tb_fft_128.sv", 
                                                             46);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb_fft_128.sv", 
                                         47);
    tb_fft_128__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000080U, tb_fft_128__DOT__unnamedblk2__DOT__i)) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((0x00fe0000U != vlSelfRef.tb_fft_128__DOT__fft_out
                              [(0x0000007fU & tb_fft_128__DOT__unnamedblk2__DOT__i)])))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_fft_128.sv:62: Assertion failed in %Ntb_fft_128.unnamedblk2: Normalized impulse mismatch at bin %0d: got %x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             tb_fft_128__DOT__unnamedblk2__DOT__i,
                             32,vlSelfRef.tb_fft_128__DOT__fft_out
                             [(0x0000007fU & tb_fft_128__DOT__unnamedblk2__DOT__i)]);
                VL_STOP_MT("tb_fft_128.sv", 62, "", false);
            }
        }
        tb_fft_128__DOT__unnamedblk2__DOT__i = ((IData)(1U) 
                                                + tb_fft_128__DOT__unnamedblk2__DOT__i);
    }
    __Vtask_tb_fft_128__DOT__reset_dut__2__tb_fft_128__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_fft_128__DOT__reset_dut__2__tb_fft_128__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.tb_fft_128__DOT__rst = 1U;
    vlSelfRef.tb_fft_128__DOT__start = 0U;
    __Vtask_tb_fft_128__DOT__reset_dut__2__tb_fft_128__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fft_128__DOT__reset_dut__2__tb_fft_128__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_fft_128___024root____VbeforeTrig_h8d41f7fd__0(vlSelf, 
                                                          "@(posedge tb_fft_128.clk)");
        co_await vlSelfRef.__VtrigSched_h8d41f7fd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fft_128.clk)", 
                                                             "tb_fft_128.sv", 
                                                             34);
        __Vtask_tb_fft_128__DOT__reset_dut__2__tb_fft_128__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_fft_128__DOT__reset_dut__2__tb_fft_128__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_fft_128__DOT__rst = 0U;
    __Vtask_tb_fft_128__DOT__reset_dut__2__tb_fft_128__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fft_128__DOT__reset_dut__2__tb_fft_128__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_fft_128___024root____VbeforeTrig_h8d41f7fd__0(vlSelf, 
                                                          "@(posedge tb_fft_128.clk)");
        co_await vlSelfRef.__VtrigSched_h8d41f7fd__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fft_128.clk)", 
                                                             "tb_fft_128.sv", 
                                                             36);
        __Vtask_tb_fft_128__DOT__reset_dut__2__tb_fft_128__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_fft_128__DOT__reset_dut__2__tb_fft_128__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    tb_fft_128__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000080U, tb_fft_128__DOT__unnamedblk3__DOT__i)) {
        vlSelfRef.tb_fft_128__DOT__fft_in[(0x0000007fU 
                                           & tb_fft_128__DOT__unnamedblk3__DOT__i)] = 0x70000000U;
        tb_fft_128__DOT__unnamedblk3__DOT__i = ((IData)(1U) 
                                                + tb_fft_128__DOT__unnamedblk3__DOT__i);
    }
    Vtb_fft_128___024root____VbeforeTrig_h8d41f8bd__0(vlSelf, 
                                                      "@(negedge tb_fft_128.clk)");
    co_await vlSelfRef.__VtrigSched_h8d41f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fft_128.clk)", 
                                                         "tb_fft_128.sv", 
                                                         42);
    vlSelfRef.tb_fft_128__DOT__start = 1U;
    Vtb_fft_128___024root____VbeforeTrig_h8d41f8bd__0(vlSelf, 
                                                      "@(negedge tb_fft_128.clk)");
    co_await vlSelfRef.__VtrigSched_h8d41f8bd__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fft_128.clk)", 
                                                         "tb_fft_128.sv", 
                                                         44);
    vlSelfRef.tb_fft_128__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_fft_128__DOT__done)))) {
        Vtb_fft_128___024root____VbeforeTrig_h4ebd7bf3__0(vlSelf, 
                                                          "@( tb_fft_128.done)");
        co_await vlSelfRef.__VtrigSched_h4ebd7bf3__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_fft_128.done)", 
                                                             "tb_fft_128.sv", 
                                                             46);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         nullptr, "tb_fft_128.sv", 
                                         47);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((VL_GTES_III(16, 0x6000U, (vlSelfRef.tb_fft_128__DOT__fft_out[0U] 
                                                   >> 0x10U))))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fft_128.sv:73: Assertion failed in %Ntb_fft_128: 128-point DC result overflowed: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fft_128__DOT__fft_out[0U]);
            VL_STOP_MT("tb_fft_128.sv", 73, "", false);
        }
    }
    tb_fft_128__DOT__unnamedblk4__DOT__i = 1U;
    while (VL_GTS_III(32, 0x00000080U, tb_fft_128__DOT__unnamedblk4__DOT__i)) {
        if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
            if (VL_UNLIKELY(((1U & (~ (((VL_GTS_III(16, 0x0020U, 
                                                    (vlSelfRef.tb_fft_128__DOT__fft_out
                                                     [
                                                     (0x0000007fU 
                                                      & tb_fft_128__DOT__unnamedblk4__DOT__i)] 
                                                     >> 0x10U)) 
                                         & VL_LTS_III(16, 0xffe0U, 
                                                      (vlSelfRef.tb_fft_128__DOT__fft_out
                                                       [
                                                       (0x0000007fU 
                                                        & tb_fft_128__DOT__unnamedblk4__DOT__i)] 
                                                       >> 0x10U))) 
                                        & VL_GTS_III(16, 0x0020U, 
                                                     (0x0000ffffU 
                                                      & vlSelfRef.tb_fft_128__DOT__fft_out
                                                      [
                                                      (0x0000007fU 
                                                       & tb_fft_128__DOT__unnamedblk4__DOT__i)]))) 
                                       & VL_LTS_III(16, 0xffe0U, 
                                                    (0x0000ffffU 
                                                     & vlSelfRef.tb_fft_128__DOT__fft_out
                                                     [
                                                     (0x0000007fU 
                                                      & tb_fft_128__DOT__unnamedblk4__DOT__i)])))))))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_fft_128.sv:80: Assertion failed in %Ntb_fft_128.unnamedblk4: Unexpected energy at constant-input bin %0d: got %x\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name(),32,
                             tb_fft_128__DOT__unnamedblk4__DOT__i,
                             32,vlSelfRef.tb_fft_128__DOT__fft_out
                             [(0x0000007fU & tb_fft_128__DOT__unnamedblk4__DOT__i)]);
                VL_STOP_MT("tb_fft_128.sv", 80, "", false);
            }
        }
        tb_fft_128__DOT__unnamedblk4__DOT__i = ((IData)(1U) 
                                                + tb_fft_128__DOT__unnamedblk4__DOT__i);
    }
    VL_WRITEF_NX("PASS: 128-point FFT is stage-scaled without signed overflow.\n",0);
    VL_FINISH_MT("tb_fft_128.sv", 84, "");
    co_return;
}

void Vtb_fft_128___024root___eval_triggers_vec__act(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval_triggers_vec__act\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.tb_fft_128__DOT__done) 
                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__done__0)) 
                                                      << 4U) 
                                                     | (((((~ (IData)(vlSelfRef.tb_fft_128__DOT__clk)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__clk__0)) 
                                                          << 3U) 
                                                         | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.tb_fft_128__DOT__rst) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__rst__0))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.tb_fft_128__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__clk__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__clk__0 
        = vlSelfRef.tb_fft_128__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__rst__0 
        = vlSelfRef.tb_fft_128__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__done__0 
        = vlSelfRef.tb_fft_128__DOT__done;
}

bool Vtb_fft_128___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___trigger_anySet__act\n"); );
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

void Vtb_fft_128___024root___nba_sequent__TOP__0(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___nba_sequent__TOP__0\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_fft_128__DOT__dut__DOT__bu_A;
    tb_fft_128__DOT__dut__DOT__bu_A = 0;
    IData/*31:0*/ tb_fft_128__DOT__dut__DOT__bu_B;
    tb_fft_128__DOT__dut__DOT__bu_B = 0;
    IData/*31:0*/ tb_fft_128__DOT__dut__DOT__bu_W;
    tb_fft_128__DOT__dut__DOT__bu_W = 0;
    QData/*32:0*/ tb_fft_128__DOT__dut__DOT__bu__DOT__WxB_re;
    tb_fft_128__DOT__dut__DOT__bu__DOT__WxB_re = 0;
    QData/*32:0*/ tb_fft_128__DOT__dut__DOT__bu__DOT__WxB_im;
    tb_fft_128__DOT__dut__DOT__bu__DOT__WxB_im = 0;
    IData/*31:0*/ __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__Vfuncout;
    __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__value;
    __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__value = 0;
    IData/*31:0*/ __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed;
    __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    CData/*1:0*/ __Vdly__tb_fft_128__DOT__dut__DOT__state;
    __Vdly__tb_fft_128__DOT__dut__DOT__state = 0;
    IData/*31:0*/ __Vdly__tb_fft_128__DOT__dut__DOT__stage_index;
    __Vdly__tb_fft_128__DOT__dut__DOT__stage_index = 0;
    IData/*31:0*/ __Vdly__tb_fft_128__DOT__dut__DOT__group_index;
    __Vdly__tb_fft_128__DOT__dut__DOT__group_index = 0;
    IData/*31:0*/ __Vdly__tb_fft_128__DOT__dut__DOT__pair_index;
    __Vdly__tb_fft_128__DOT__dut__DOT__pair_index = 0;
    CData/*6:0*/ __VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v0;
    __VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v0 = 0;
    CData/*6:0*/ __VdlyDim0__tb_fft_128__DOT__fft_out__v0;
    __VdlyDim0__tb_fft_128__DOT__fft_out__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft_128__DOT__dut__DOT__data__v1;
    __VdlyVal__tb_fft_128__DOT__dut__DOT__data__v1 = 0;
    CData/*6:0*/ __VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v1;
    __VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft_128__DOT__dut__DOT__data__v2;
    __VdlyVal__tb_fft_128__DOT__dut__DOT__data__v2 = 0;
    CData/*6:0*/ __VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v2;
    __VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v2 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft_128__DOT__dut__DOT__data__v3;
    __VdlyVal__tb_fft_128__DOT__dut__DOT__data__v3 = 0;
    CData/*6:0*/ __VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v3;
    __VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v3 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft_128__DOT__fft_out__v1;
    __VdlyVal__tb_fft_128__DOT__fft_out__v1 = 0;
    CData/*6:0*/ __VdlyDim0__tb_fft_128__DOT__fft_out__v1;
    __VdlyDim0__tb_fft_128__DOT__fft_out__v1 = 0;
    // Body
    __Vdly__tb_fft_128__DOT__dut__DOT__state = vlSelfRef.tb_fft_128__DOT__dut__DOT__state;
    __Vdly__tb_fft_128__DOT__dut__DOT__group_index 
        = vlSelfRef.tb_fft_128__DOT__dut__DOT__group_index;
    __Vdly__tb_fft_128__DOT__dut__DOT__pair_index = vlSelfRef.tb_fft_128__DOT__dut__DOT__pair_index;
    __Vdly__tb_fft_128__DOT__dut__DOT__stage_index 
        = vlSelfRef.tb_fft_128__DOT__dut__DOT__stage_index;
    if (vlSelfRef.tb_fft_128__DOT__rst) {
        vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk2__DOT__i = 0U;
        __Vdly__tb_fft_128__DOT__dut__DOT__state = 0U;
        __Vdly__tb_fft_128__DOT__dut__DOT__stage_index = 0U;
        __Vdly__tb_fft_128__DOT__dut__DOT__group_index = 0U;
        __Vdly__tb_fft_128__DOT__dut__DOT__pair_index = 0U;
        vlSelfRef.tb_fft_128__DOT__done = 0U;
        while (VL_GTS_III(32, 0x00000080U, vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk2__DOT__i)) {
            __VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v0 
                = (0x0000007fU & vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk2__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_fft_128__DOT__dut__DOT__data.enqueue(0U, (IData)(__VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v0));
            __VdlyDim0__tb_fft_128__DOT__fft_out__v0 
                = (0x0000007fU & vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk2__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_fft_128__DOT__fft_out.enqueue(0U, (IData)(__VdlyDim0__tb_fft_128__DOT__fft_out__v0));
            vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk2__DOT__i);
        }
    } else {
        vlSelfRef.tb_fft_128__DOT__done = 0U;
        if ((0U == (IData)(vlSelfRef.tb_fft_128__DOT__dut__DOT__state))) {
            if (vlSelfRef.tb_fft_128__DOT__start) {
                vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk3__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000080U, vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk3__DOT__i)) {
                    __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__value 
                        = vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk3__DOT__i;
                    __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__Vfuncout = 0U;
                    __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed = 0U;
                    __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed = 0U;
                    __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed 
                        = (1U & __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__value);
                    __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed 
                        = (VL_SHIFTL_III(32,32,32, __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed, 1U) 
                           | (1U & VL_SHIFTR_III(32,32,32, __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__value, 1U)));
                    __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed 
                        = (VL_SHIFTL_III(32,32,32, __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed, 1U) 
                           | (1U & VL_SHIFTR_III(32,32,32, __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__value, 2U)));
                    __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed 
                        = (VL_SHIFTL_III(32,32,32, __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed, 1U) 
                           | (1U & VL_SHIFTR_III(32,32,32, __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__value, 3U)));
                    __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed 
                        = (VL_SHIFTL_III(32,32,32, __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed, 1U) 
                           | (1U & VL_SHIFTR_III(32,32,32, __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__value, 4U)));
                    __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed 
                        = (VL_SHIFTL_III(32,32,32, __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed, 1U) 
                           | (1U & VL_SHIFTR_III(32,32,32, __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__value, 5U)));
                    __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed 
                        = (VL_SHIFTL_III(32,32,32, __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed, 1U) 
                           | (1U & VL_SHIFTR_III(32,32,32, __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__value, 6U)));
                    __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__Vfuncout 
                        = __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__reversed;
                    __VdlyVal__tb_fft_128__DOT__dut__DOT__data__v1 
                        = vlSelfRef.tb_fft_128__DOT__fft_in
                        [(0x0000007fU & vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk3__DOT__i)];
                    __VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v1 
                        = (0x0000007fU & __Vfunc_tb_fft_128__DOT__dut__DOT__bit_reverse__5__Vfuncout);
                    vlSelfRef.__VdlyCommitQueuetb_fft_128__DOT__dut__DOT__data.enqueue(__VdlyVal__tb_fft_128__DOT__dut__DOT__data__v1, (IData)(__VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v1));
                    vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk3__DOT__i 
                        = ((IData)(1U) + vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk3__DOT__i);
                }
                __Vdly__tb_fft_128__DOT__dut__DOT__stage_index = 0U;
                __Vdly__tb_fft_128__DOT__dut__DOT__group_index = 0U;
                __Vdly__tb_fft_128__DOT__dut__DOT__pair_index = 0U;
                __Vdly__tb_fft_128__DOT__dut__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.tb_fft_128__DOT__dut__DOT__state))) {
            __VdlyVal__tb_fft_128__DOT__dut__DOT__data__v2 
                = ((VL_SHIFTRS_III(17,17,32, (0x0001ffffU 
                                              & (vlSelfRef.tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_4 
                                                 + vlSelfRef.tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_5)), 1U) 
                    << 0x00000010U) | (0x0000ffffU 
                                       & VL_SHIFTRS_III(17,17,32, 
                                                        (0x0001ffffU 
                                                         & (vlSelfRef.tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_6 
                                                            + vlSelfRef.tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_7)), 1U)));
            __VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v2 
                = (0x0000007fU & vlSelfRef.tb_fft_128__DOT__dut__DOT__index_a);
            vlSelfRef.__VdlyCommitQueuetb_fft_128__DOT__dut__DOT__data.enqueue(__VdlyVal__tb_fft_128__DOT__dut__DOT__data__v2, (IData)(__VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v2));
            if ((((6U == vlSelfRef.tb_fft_128__DOT__dut__DOT__stage_index) 
                  & (vlSelfRef.tb_fft_128__DOT__dut__DOT__group_index 
                     == ((IData)(0x00000080U) - vlSelfRef.tb_fft_128__DOT__dut__DOT__stage_size))) 
                 & (vlSelfRef.tb_fft_128__DOT__dut__DOT__pair_index 
                    == (vlSelfRef.tb_fft_128__DOT__dut__DOT__half_size 
                        - (IData)(1U))))) {
                __Vdly__tb_fft_128__DOT__dut__DOT__state = 2U;
            } else if ((vlSelfRef.tb_fft_128__DOT__dut__DOT__pair_index 
                        == (vlSelfRef.tb_fft_128__DOT__dut__DOT__half_size 
                            - (IData)(1U)))) {
                if ((vlSelfRef.tb_fft_128__DOT__dut__DOT__group_index 
                     == ((IData)(0x00000080U) - vlSelfRef.tb_fft_128__DOT__dut__DOT__stage_size))) {
                    __Vdly__tb_fft_128__DOT__dut__DOT__stage_index 
                        = ((IData)(1U) + vlSelfRef.tb_fft_128__DOT__dut__DOT__stage_index);
                    __Vdly__tb_fft_128__DOT__dut__DOT__group_index = 0U;
                } else {
                    __Vdly__tb_fft_128__DOT__dut__DOT__group_index 
                        = (vlSelfRef.tb_fft_128__DOT__dut__DOT__group_index 
                           + vlSelfRef.tb_fft_128__DOT__dut__DOT__stage_size);
                }
                __Vdly__tb_fft_128__DOT__dut__DOT__pair_index = 0U;
            } else {
                __Vdly__tb_fft_128__DOT__dut__DOT__pair_index 
                    = ((IData)(1U) + vlSelfRef.tb_fft_128__DOT__dut__DOT__pair_index);
            }
            __VdlyVal__tb_fft_128__DOT__dut__DOT__data__v3 
                = ((VL_SHIFTRS_III(17,17,32, (0x0001ffffU 
                                              & (vlSelfRef.tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_4 
                                                 - vlSelfRef.tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_5)), 1U) 
                    << 0x00000010U) | (0x0000ffffU 
                                       & VL_SHIFTRS_III(17,17,32, 
                                                        (0x0001ffffU 
                                                         & (vlSelfRef.tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_6 
                                                            - vlSelfRef.tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_7)), 1U)));
            __VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v3 
                = (0x0000007fU & vlSelfRef.tb_fft_128__DOT__dut__DOT__index_b);
            vlSelfRef.__VdlyCommitQueuetb_fft_128__DOT__dut__DOT__data.enqueue(__VdlyVal__tb_fft_128__DOT__dut__DOT__data__v3, (IData)(__VdlyDim0__tb_fft_128__DOT__dut__DOT__data__v3));
        } else if ((2U == (IData)(vlSelfRef.tb_fft_128__DOT__dut__DOT__state))) {
            vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk4__DOT__i = 0U;
            while (VL_GTS_III(32, 0x00000080U, vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk4__DOT__i)) {
                __VdlyVal__tb_fft_128__DOT__fft_out__v1 
                    = vlSelfRef.tb_fft_128__DOT__dut__DOT__data
                    [(0x0000007fU & vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk4__DOT__i)];
                __VdlyDim0__tb_fft_128__DOT__fft_out__v1 
                    = (0x0000007fU & vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk4__DOT__i);
                vlSelfRef.__VdlyCommitQueuetb_fft_128__DOT__fft_out.enqueue(__VdlyVal__tb_fft_128__DOT__fft_out__v1, (IData)(__VdlyDim0__tb_fft_128__DOT__fft_out__v1));
                vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk4__DOT__i 
                    = ((IData)(1U) + vlSelfRef.tb_fft_128__DOT__dut__DOT__unnamedblk4__DOT__i);
            }
            vlSelfRef.tb_fft_128__DOT__done = 1U;
            __Vdly__tb_fft_128__DOT__dut__DOT__state = 0U;
        } else {
            __Vdly__tb_fft_128__DOT__dut__DOT__state = 0U;
        }
    }
    vlSelfRef.__VdlyCommitQueuetb_fft_128__DOT__fft_out.commit(vlSelfRef.tb_fft_128__DOT__fft_out);
    vlSelfRef.tb_fft_128__DOT__dut__DOT__state = __Vdly__tb_fft_128__DOT__dut__DOT__state;
    vlSelfRef.tb_fft_128__DOT__dut__DOT__group_index 
        = __Vdly__tb_fft_128__DOT__dut__DOT__group_index;
    vlSelfRef.__VdlyCommitQueuetb_fft_128__DOT__dut__DOT__data.commit(vlSelfRef.tb_fft_128__DOT__dut__DOT__data);
    vlSelfRef.tb_fft_128__DOT__dut__DOT__pair_index 
        = __Vdly__tb_fft_128__DOT__dut__DOT__pair_index;
    vlSelfRef.tb_fft_128__DOT__dut__DOT__stage_index 
        = __Vdly__tb_fft_128__DOT__dut__DOT__stage_index;
    vlSelfRef.tb_fft_128__DOT__dut__DOT__stage_size 
        = VL_SHIFTL_III(32,32,32, (IData)(2U), vlSelfRef.tb_fft_128__DOT__dut__DOT__stage_index);
    __VdfgRegularize_hebeb780c_0_0 = (vlSelfRef.tb_fft_128__DOT__dut__DOT__pair_index 
                                      * VL_SHIFTR_III(32,32,32, 0x00000080U, 
                                                      ((IData)(1U) 
                                                       + vlSelfRef.tb_fft_128__DOT__dut__DOT__stage_index)));
    vlSelfRef.tb_fft_128__DOT__dut__DOT__half_size 
        = VL_SHIFTL_III(32,32,32, (IData)(1U), vlSelfRef.tb_fft_128__DOT__dut__DOT__stage_index);
    vlSelfRef.tb_fft_128__DOT__dut__DOT__index_a = 
        (vlSelfRef.tb_fft_128__DOT__dut__DOT__group_index 
         + vlSelfRef.tb_fft_128__DOT__dut__DOT__pair_index);
    vlSelfRef.tb_fft_128__DOT__dut__DOT__index_b = 
        (vlSelfRef.tb_fft_128__DOT__dut__DOT__index_a 
         + vlSelfRef.tb_fft_128__DOT__dut__DOT__half_size);
    tb_fft_128__DOT__dut__DOT__bu_A = 0U;
    tb_fft_128__DOT__dut__DOT__bu_B = 0U;
    if ((1U == (IData)(vlSelfRef.tb_fft_128__DOT__dut__DOT__state))) {
        tb_fft_128__DOT__dut__DOT__bu_A = vlSelfRef.tb_fft_128__DOT__dut__DOT__data
            [(0x0000007fU & vlSelfRef.tb_fft_128__DOT__dut__DOT__index_a)];
        tb_fft_128__DOT__dut__DOT__bu_B = vlSelfRef.tb_fft_128__DOT__dut__DOT__data
            [(0x0000007fU & vlSelfRef.tb_fft_128__DOT__dut__DOT__index_b)];
    }
    tb_fft_128__DOT__dut__DOT__bu_W = ((0x00000040U 
                                        & __VdfgRegularize_hebeb780c_0_0)
                                        ? 0x7fff0000U
                                        : ((0x00000020U 
                                            & __VdfgRegularize_hebeb780c_0_0)
                                            ? ((0x00000010U 
                                                & __VdfgRegularize_hebeb780c_0_0)
                                                ? (
                                                   (8U 
                                                    & __VdfgRegularize_hebeb780c_0_0)
                                                    ? 
                                                   ((4U 
                                                     & __VdfgRegularize_hebeb780c_0_0)
                                                     ? 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x8028f9b8U
                                                       : 0x809ff374U)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x8164ed38U
                                                       : 0x8277e707U))
                                                     : 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x83d7e0e6U
                                                       : 0x8584dad8U)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x877cd4e1U
                                                       : 0x89bfcf05U)))
                                                    : 
                                                   ((4U 
                                                     & __VdfgRegularize_hebeb780c_0_0)
                                                     ? 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x8c4bc946U
                                                       : 0x8f1ec3aaU)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x9237be32U
                                                       : 0x9593b8e4U))
                                                     : 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x9931b3c1U
                                                       : 0x9d0faecdU)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0xa129aa0bU
                                                       : 0xa57ea57eU))))
                                                : (
                                                   (8U 
                                                    & __VdfgRegularize_hebeb780c_0_0)
                                                    ? 
                                                   ((4U 
                                                     & __VdfgRegularize_hebeb780c_0_0)
                                                     ? 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0xaa0ba129U
                                                       : 0xaecd9d0fU)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0xb3c19931U
                                                       : 0xb8e49593U))
                                                     : 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0xbe329237U
                                                       : 0xc3aa8f1eU)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0xc9468c4bU
                                                       : 0xcf0589bfU)))
                                                    : 
                                                   ((4U 
                                                     & __VdfgRegularize_hebeb780c_0_0)
                                                     ? 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0xd4e1877cU
                                                       : 0xdad88584U)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0xe0e683d7U
                                                       : 0xe7078277U))
                                                     : 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0xed388164U
                                                       : 0xf374809fU)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0xf9b88028U
                                                       : 0x00008001U)))))
                                            : ((0x00000010U 
                                                & __VdfgRegularize_hebeb780c_0_0)
                                                ? (
                                                   (8U 
                                                    & __VdfgRegularize_hebeb780c_0_0)
                                                    ? 
                                                   ((4U 
                                                     & __VdfgRegularize_hebeb780c_0_0)
                                                     ? 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x06488028U
                                                       : 0x0c8c809fU)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x12c88164U
                                                       : 0x18f98277U))
                                                     : 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x1f1a83d7U
                                                       : 0x25288584U)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x2b1f877cU
                                                       : 0x30fb89bfU)))
                                                    : 
                                                   ((4U 
                                                     & __VdfgRegularize_hebeb780c_0_0)
                                                     ? 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x36ba8c4bU
                                                       : 0x3c568f1eU)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x41ce9237U
                                                       : 0x471c9593U))
                                                     : 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x4c3f9931U
                                                       : 0x51339d0fU)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x55f5a129U
                                                       : 0x5a82a57eU))))
                                                : (
                                                   (8U 
                                                    & __VdfgRegularize_hebeb780c_0_0)
                                                    ? 
                                                   ((4U 
                                                     & __VdfgRegularize_hebeb780c_0_0)
                                                     ? 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x5ed7aa0bU
                                                       : 0x62f1aecdU)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x66cfb3c1U
                                                       : 0x6a6db8e4U))
                                                     : 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x6dc9be32U
                                                       : 0x70e2c3aaU)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x73b5c946U
                                                       : 0x7641cf05U)))
                                                    : 
                                                   ((4U 
                                                     & __VdfgRegularize_hebeb780c_0_0)
                                                     ? 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x7884d4e1U
                                                       : 0x7a7cdad8U)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x7c29e0e6U
                                                       : 0x7d89e707U))
                                                     : 
                                                    ((2U 
                                                      & __VdfgRegularize_hebeb780c_0_0)
                                                      ? 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x7e9ced38U
                                                       : 0x7f61f374U)
                                                      : 
                                                     ((1U 
                                                       & __VdfgRegularize_hebeb780c_0_0)
                                                       ? 0x7fd8f9b8U
                                                       : 0x7fff0000U)))))));
    vlSelfRef.tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_4 
        = ((0x00010000U & (tb_fft_128__DOT__dut__DOT__bu_A 
                           >> 0x0000000fU)) | (tb_fft_128__DOT__dut__DOT__bu_A 
                                               >> 0x00000010U));
    vlSelfRef.tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_6 
        = ((0x00010000U & (tb_fft_128__DOT__dut__DOT__bu_A 
                           << 1U)) | (0x0000ffffU & tb_fft_128__DOT__dut__DOT__bu_A));
    tb_fft_128__DOT__dut__DOT__bu__DOT__WxB_re = (0x00000001ffffffffULL 
                                                  & (VL_MULS_QQQ(33, 
                                                                 (0x00000001ffffffffULL 
                                                                  & VL_EXTENDS_QI(33,16, 
                                                                                (tb_fft_128__DOT__dut__DOT__bu_W 
                                                                                >> 0x00000010U))), 
                                                                 (0x00000001ffffffffULL 
                                                                  & VL_EXTENDS_QI(33,16, 
                                                                                (tb_fft_128__DOT__dut__DOT__bu_B 
                                                                                >> 0x00000010U)))) 
                                                     - 
                                                     VL_MULS_QQQ(33, 
                                                                 (0x00000001ffffffffULL 
                                                                  & VL_EXTENDS_QI(33,16, 
                                                                                (0x0000ffffU 
                                                                                & tb_fft_128__DOT__dut__DOT__bu_W))), 
                                                                 (0x00000001ffffffffULL 
                                                                  & VL_EXTENDS_QI(33,16, 
                                                                                (0x0000ffffU 
                                                                                & tb_fft_128__DOT__dut__DOT__bu_B))))));
    tb_fft_128__DOT__dut__DOT__bu__DOT__WxB_im = (0x00000001ffffffffULL 
                                                  & (VL_MULS_QQQ(33, 
                                                                 (0x00000001ffffffffULL 
                                                                  & VL_EXTENDS_QI(33,16, 
                                                                                (0x0000ffffU 
                                                                                & tb_fft_128__DOT__dut__DOT__bu_W))), 
                                                                 (0x00000001ffffffffULL 
                                                                  & VL_EXTENDS_QI(33,16, 
                                                                                (tb_fft_128__DOT__dut__DOT__bu_B 
                                                                                >> 0x00000010U)))) 
                                                     + 
                                                     VL_MULS_QQQ(33, 
                                                                 (0x00000001ffffffffULL 
                                                                  & VL_EXTENDS_QI(33,16, 
                                                                                (tb_fft_128__DOT__dut__DOT__bu_W 
                                                                                >> 0x00000010U))), 
                                                                 (0x00000001ffffffffULL 
                                                                  & VL_EXTENDS_QI(33,16, 
                                                                                (0x0000ffffU 
                                                                                & tb_fft_128__DOT__dut__DOT__bu_B))))));
    vlSelfRef.tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_5 
        = ((0x00010000U & ((IData)((tb_fft_128__DOT__dut__DOT__bu__DOT__WxB_re 
                                    >> 0x0000001eU)) 
                           << 0x00000010U)) | (0x0000ffffU 
                                               & (IData)(
                                                         (tb_fft_128__DOT__dut__DOT__bu__DOT__WxB_re 
                                                          >> 0x0000000fU))));
    vlSelfRef.tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_7 
        = ((0x00010000U & ((IData)((tb_fft_128__DOT__dut__DOT__bu__DOT__WxB_im 
                                    >> 0x0000001eU)) 
                           << 0x00000010U)) | (0x0000ffffU 
                                               & (IData)(
                                                         (tb_fft_128__DOT__dut__DOT__bu__DOT__WxB_im 
                                                          >> 0x0000000fU))));
}

void Vtb_fft_128___024root___eval_nba(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval_nba\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_fft_128___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_fft_128___024root___timing_ready(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___timing_ready\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h8d41f7fd__0.ready("@(posedge tb_fft_128.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h8d41f8bd__0.ready("@(negedge tb_fft_128.clk)");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h4ebd7bf3__0.ready("@( tb_fft_128.done)");
    }
}

void Vtb_fft_128___024root___timing_resume(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___timing_resume\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h8d41f7fd__0.moveToResumeQueue(
                                                          "@(posedge tb_fft_128.clk)");
    vlSelfRef.__VtrigSched_h8d41f8bd__0.moveToResumeQueue(
                                                          "@(negedge tb_fft_128.clk)");
    vlSelfRef.__VtrigSched_h4ebd7bf3__0.moveToResumeQueue(
                                                          "@( tb_fft_128.done)");
    vlSelfRef.__VtrigSched_h8d41f7fd__0.resume("@(posedge tb_fft_128.clk)");
    vlSelfRef.__VtrigSched_h8d41f8bd__0.resume("@(negedge tb_fft_128.clk)");
    vlSelfRef.__VtrigSched_h4ebd7bf3__0.resume("@( tb_fft_128.done)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_fft_128___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_fft_128___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_fft_128___024root___eval_phase__act(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval_phase__act\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fft_128___024root___eval_triggers_vec__act(vlSelf);
    Vtb_fft_128___024root___timing_ready(vlSelf);
    Vtb_fft_128___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fft_128___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_fft_128___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_fft_128___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_fft_128___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fft_128___024root___eval_phase__inact(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval_phase__inact\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_fft_128.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_fft_128___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_fft_128___024root___eval_phase__nba(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval_phase__nba\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_fft_128___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_fft_128___024root___eval_nba(vlSelf);
        Vtb_fft_128___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_fft_128___024root___eval(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fft_128___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_fft_128.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_fft_128.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_fft_128___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_fft_128.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_fft_128___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_fft_128___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_fft_128___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_fft_128___024root____VbeforeTrig_h8d41f7fd__0(Vtb_fft_128___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root____VbeforeTrig_h8d41f7fd__0\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_fft_128__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_fft_128__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__clk__0 
        = vlSelfRef.tb_fft_128__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8d41f7fd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8d41f7fd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8d41f7fd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8d41f7fd__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8d41f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8d41f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8d41f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8d41f8bd__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_fft_128___024root____VbeforeTrig_h8d41f8bd__0(Vtb_fft_128___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root____VbeforeTrig_h8d41f8bd__0\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_fft_128__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_fft_128__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__clk__0 
        = vlSelfRef.tb_fft_128__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8d41f7fd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8d41f7fd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8d41f7fd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8d41f7fd__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8d41f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8d41f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8d41f8bd__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h8d41f8bd__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_fft_128___024root____VbeforeTrig_h4ebd7bf3__0(Vtb_fft_128___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root____VbeforeTrig_h4ebd7bf3__0\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_fft_128__DOT__done) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__done__0)) 
                                  << 4U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__done__0 
        = vlSelfRef.tb_fft_128__DOT__done;
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h4ebd7bf3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h4ebd7bf3__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_fft_128___024root___eval_debug_assertions(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval_debug_assertions\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
