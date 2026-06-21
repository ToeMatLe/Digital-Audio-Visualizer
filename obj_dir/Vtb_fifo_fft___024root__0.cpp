// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo_fft.h for the primary calling header

#include "Vtb_fifo_fft__pch.h"

VlCoroutine Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo_fft___024root* vlSelf);
VlCoroutine Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo_fft___024root* vlSelf, VlProcessRef vlProcess);

void Vtb_fifo_fft___024root___eval_initial(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_initial\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__1(vlSelf, std::make_shared<VlProcess>());
}

VlCoroutine Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__0(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fifo_fft__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_fifo_fft.sv", 
                                             41);
        vlSelfRef.tb_fifo_fft__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_fifo_fft__DOT__clk)));
    }
    co_return;
}

void Vtb_fifo_fft___024root____VbeforeTrig_h48b8a5d3__0(Vtb_fifo_fft___024root* vlSelf, const char* __VeventDescription);
void Vtb_fifo_fft___024root____VbeforeTrig_h48b8a27f__0(Vtb_fifo_fft___024root* vlSelf, const char* __VeventDescription);
void Vtb_fifo_fft___024root____VbeforeTrig_h7dc31d1b__0(Vtb_fifo_fft___024root* vlSelf, const char* __VeventDescription);
void Vtb_fifo_fft___024root____VbeforeTrig_h19585463__0(Vtb_fifo_fft___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(Vtb_fifo_fft___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync);
VlCoroutine Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1(Vtb_fifo_fft___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync);

VlCoroutine Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__1(Vtb_fifo_fft___024root* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__check_fifo_counting_frame__0__unnamedblk1__DOT__i;
    __Vtask_tb_fifo_fft__DOT__check_fifo_counting_frame__0__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__reset_dut__1__tb_fifo_fft__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_fifo_fft__DOT__reset_dut__1__tb_fifo_fft__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__reset_dut__1__tb_fifo_fft__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_fifo_fft__DOT__reset_dut__1__tb_fifo_fft__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    SData/*15:0*/ __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__2__sample;
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__2__sample = 0;
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__2__idle_cycles;
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__2__idle_cycles = 0;
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__2__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__2__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    SData/*15:0*/ __Vtask_tb_fifo_fft__DOT__send_sample__3__sample;
    __Vtask_tb_fifo_fft__DOT__send_sample__3__sample = 0;
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__check_fft_snapshots_fifo_frame__5__unnamedblk3__DOT__i;
    __Vtask_tb_fifo_fft__DOT__check_fft_snapshots_fifo_frame__5__unnamedblk3__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__reset_dut__6__tb_fifo_fft__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_fifo_fft__DOT__reset_dut__6__tb_fifo_fft__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__reset_dut__6__tb_fifo_fft__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_fifo_fft__DOT__reset_dut__6__tb_fifo_fft__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    SData/*15:0*/ __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__7__sample;
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__7__sample = 0;
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__7__idle_cycles;
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__7__idle_cycles = 0;
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__7__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__7__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    SData/*15:0*/ __Vtask_tb_fifo_fft__DOT__send_sample__8__sample;
    __Vtask_tb_fifo_fft__DOT__send_sample__8__sample = 0;
    SData/*15:0*/ __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__9__sample;
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__9__sample = 0;
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__9__idle_cycles;
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__9__idle_cycles = 0;
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__9__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__9__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    SData/*15:0*/ __Vtask_tb_fifo_fft__DOT__send_sample__10__sample;
    __Vtask_tb_fifo_fft__DOT__send_sample__10__sample = 0;
    // Body
    __Vtask_tb_fifo_fft__DOT__reset_dut__1__tb_fifo_fft__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.tb_fifo_fft__DOT__rst = 1U;
    vlSelfRef.tb_fifo_fft__DOT__mic_data = 0U;
    vlSelfRef.tb_fifo_fft__DOT__mic_ready = 0U;
    vlSelfRef.tb_fifo_fft__DOT__frame_count = 0U;
    __Vtask_tb_fifo_fft__DOT__reset_dut__1__tb_fifo_fft__DOT__unnamedblk1_1__DOT____Vrepeat0 = 4U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_fft__DOT__reset_dut__1__tb_fifo_fft__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_fifo_fft___024root____VbeforeTrig_h48b8a5d3__0(vlSelf, 
                                                           "@(posedge tb_fifo_fft.clk)");
        co_await vlSelfRef.__VtrigSched_h48b8a5d3__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(posedge tb_fifo_fft.clk)", 
                                                             "tb_fifo_fft.sv", 
                                                             50);
        __Vtask_tb_fifo_fft__DOT__reset_dut__1__tb_fifo_fft__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_fifo_fft__DOT__reset_dut__1__tb_fifo_fft__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_fifo_fft__DOT__rst = 0U;
    __Vtask_tb_fifo_fft__DOT__reset_dut__1__tb_fifo_fft__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_fft__DOT__reset_dut__1__tb_fifo_fft__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_fifo_fft___024root____VbeforeTrig_h48b8a5d3__0(vlSelf, 
                                                           "@(posedge tb_fifo_fft.clk)");
        co_await vlSelfRef.__VtrigSched_h48b8a5d3__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(posedge tb_fifo_fft.clk)", 
                                                             "tb_fifo_fft.sv", 
                                                             52);
        __Vtask_tb_fifo_fft__DOT__reset_dut__1__tb_fifo_fft__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_fifo_fft__DOT__reset_dut__1__tb_fifo_fft__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_fifo_fft__DOT__check_fifo_counting_frame__0__unnamedblk1__DOT__i = 0U;
    __Vtask_tb_fifo_fft__DOT__check_fifo_counting_frame__0__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, __Vtask_tb_fifo_fft__DOT__check_fifo_counting_frame__0__unnamedblk1__DOT__i)) {
        __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__2__idle_cycles = 2U;
        __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__2__sample 
            = (0x0000ffffU & ((IData)(1U) + __Vtask_tb_fifo_fft__DOT__check_fifo_counting_frame__0__unnamedblk1__DOT__i));
        __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__2__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
        __Vtask_tb_fifo_fft__DOT__send_sample__3__sample 
            = __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__2__sample;
        Vtb_fifo_fft___024root____VbeforeTrig_h48b8a27f__0(vlSelf, 
                                                           "@(negedge tb_fifo_fft.clk)");
        co_await vlSelfRef.__VtrigSched_h48b8a27f__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(negedge tb_fifo_fft.clk)", 
                                                             "tb_fifo_fft.sv", 
                                                             58);
        vlSelfRef.tb_fifo_fft__DOT__mic_data = __Vtask_tb_fifo_fft__DOT__send_sample__3__sample;
        vlSelfRef.tb_fifo_fft__DOT__mic_ready = 1U;
        Vtb_fifo_fft___024root____VbeforeTrig_h48b8a27f__0(vlSelf, 
                                                           "@(negedge tb_fifo_fft.clk)");
        co_await vlSelfRef.__VtrigSched_h48b8a27f__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(negedge tb_fifo_fft.clk)", 
                                                             "tb_fifo_fft.sv", 
                                                             61);
        vlSelfRef.tb_fifo_fft__DOT__mic_ready = 0U;
        vlSelfRef.tb_fifo_fft__DOT__mic_data = 0U;
        __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__2__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__2__idle_cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__2__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            Vtb_fifo_fft___024root____VbeforeTrig_h48b8a5d3__0(vlSelf, 
                                                               "@(posedge tb_fifo_fft.clk)");
            co_await vlSelfRef.__VtrigSched_h48b8a5d3__0.trigger(0U, 
                                                                 vlProcess, 
                                                                 "@(posedge tb_fifo_fft.clk)", 
                                                                 "tb_fifo_fft.sv", 
                                                                 70);
            __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__2__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_fifo_fft__DOT__send_sample_with_gap__2__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_fifo_fft__DOT__check_fifo_counting_frame__0__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vtask_tb_fifo_fft__DOT__check_fifo_counting_frame__0__unnamedblk1__DOT__i);
    }
    vlSelfRef.__Vtask_tb_fifo_fft__DOT__wait_for_frame__4__expected_count = 1U;
    while ((vlSelfRef.tb_fifo_fft__DOT__frame_count 
            != vlSelfRef.__Vtask_tb_fifo_fft__DOT__wait_for_frame__4__expected_count)) {
        Vtb_fifo_fft___024root____VbeforeTrig_h7dc31d1b__0(vlSelf, 
                                                           "@( (tb_fifo_fft.frame_count == __Vtask_tb_fifo_fft.wait_for_frame__4__expected_count))");
        co_await vlSelfRef.__VtrigSched_h7dc31d1b__0.trigger(1U, 
                                                             vlProcess, 
                                                             "@( (tb_fifo_fft.frame_count == __Vtask_tb_fifo_fft.wait_for_frame__4__expected_count))", 
                                                             "tb_fifo_fft.sv", 
                                                             81);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         vlProcess, 
                                         "tb_fifo_fft.sv", 
                                         82);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x00010000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[0U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 0: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[0U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x00020000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[1U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 1: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[1U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x00030000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[2U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 2: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[2U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x00040000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[3U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 3: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[3U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x00050000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[4U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 4: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[4U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x00060000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[5U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 5: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[5U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x00070000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[6U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 6: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[6U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x00080000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[7U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 7: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[7U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x00090000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[8U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 8: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[8U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x000a0000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[9U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 9: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[9U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x000b0000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[10U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 10: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[10U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x000c0000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[11U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 11: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[11U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x000d0000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[12U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 12: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[12U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x000e0000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[13U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 13: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[13U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x000f0000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[14U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 14: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[14U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x00100000U != vlSelfRef.tb_fifo_fft__DOT__fifo_out[15U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:98: Assertion failed in %Ntb_fifo_fft.check_fifo_counting_frame.unnamedblk2: FIFO mismatch at index 15: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fifo_out[15U]);
            VL_STOP_MT("tb_fifo_fft.sv", 98, "", false);
        }
    }
    VL_WRITEF_NX("PASS: FIFO emitted one complete ordered frame.\n",0);
    __Vtask_tb_fifo_fft__DOT__reset_dut__6__tb_fifo_fft__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_fifo_fft__DOT__reset_dut__6__tb_fifo_fft__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.tb_fifo_fft__DOT__rst = 1U;
    vlSelfRef.tb_fifo_fft__DOT__mic_data = 0U;
    vlSelfRef.tb_fifo_fft__DOT__mic_ready = 0U;
    vlSelfRef.tb_fifo_fft__DOT__frame_count = 0U;
    __Vtask_tb_fifo_fft__DOT__reset_dut__6__tb_fifo_fft__DOT__unnamedblk1_1__DOT____Vrepeat0 = 4U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_fft__DOT__reset_dut__6__tb_fifo_fft__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_fifo_fft___024root____VbeforeTrig_h48b8a5d3__0(vlSelf, 
                                                           "@(posedge tb_fifo_fft.clk)");
        co_await vlSelfRef.__VtrigSched_h48b8a5d3__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(posedge tb_fifo_fft.clk)", 
                                                             "tb_fifo_fft.sv", 
                                                             50);
        __Vtask_tb_fifo_fft__DOT__reset_dut__6__tb_fifo_fft__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_fifo_fft__DOT__reset_dut__6__tb_fifo_fft__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_fifo_fft__DOT__rst = 0U;
    __Vtask_tb_fifo_fft__DOT__reset_dut__6__tb_fifo_fft__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_fft__DOT__reset_dut__6__tb_fifo_fft__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_fifo_fft___024root____VbeforeTrig_h48b8a5d3__0(vlSelf, 
                                                           "@(posedge tb_fifo_fft.clk)");
        co_await vlSelfRef.__VtrigSched_h48b8a5d3__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(posedge tb_fifo_fft.clk)", 
                                                             "tb_fifo_fft.sv", 
                                                             52);
        __Vtask_tb_fifo_fft__DOT__reset_dut__6__tb_fifo_fft__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_fifo_fft__DOT__reset_dut__6__tb_fifo_fft__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__7__idle_cycles = 2U;
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__7__sample = 0x0100U;
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__7__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    __Vtask_tb_fifo_fft__DOT__send_sample__8__sample 
        = __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__7__sample;
    Vtb_fifo_fft___024root____VbeforeTrig_h48b8a27f__0(vlSelf, 
                                                       "@(negedge tb_fifo_fft.clk)");
    co_await vlSelfRef.__VtrigSched_h48b8a27f__0.trigger(0U, 
                                                         vlProcess, 
                                                         "@(negedge tb_fifo_fft.clk)", 
                                                         "tb_fifo_fft.sv", 
                                                         58);
    vlSelfRef.tb_fifo_fft__DOT__mic_data = __Vtask_tb_fifo_fft__DOT__send_sample__8__sample;
    vlSelfRef.tb_fifo_fft__DOT__mic_ready = 1U;
    Vtb_fifo_fft___024root____VbeforeTrig_h48b8a27f__0(vlSelf, 
                                                       "@(negedge tb_fifo_fft.clk)");
    co_await vlSelfRef.__VtrigSched_h48b8a27f__0.trigger(0U, 
                                                         vlProcess, 
                                                         "@(negedge tb_fifo_fft.clk)", 
                                                         "tb_fifo_fft.sv", 
                                                         61);
    vlSelfRef.tb_fifo_fft__DOT__mic_ready = 0U;
    vlSelfRef.tb_fifo_fft__DOT__mic_data = 0U;
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__7__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__7__idle_cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__7__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vtb_fifo_fft___024root____VbeforeTrig_h48b8a5d3__0(vlSelf, 
                                                           "@(posedge tb_fifo_fft.clk)");
        co_await vlSelfRef.__VtrigSched_h48b8a5d3__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(posedge tb_fifo_fft.clk)", 
                                                             "tb_fifo_fft.sv", 
                                                             70);
        __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__7__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_tb_fifo_fft__DOT__send_sample_with_gap__7__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    __Vtask_tb_fifo_fft__DOT__check_fft_snapshots_fifo_frame__5__unnamedblk3__DOT__i = 0U;
    __Vtask_tb_fifo_fft__DOT__check_fft_snapshots_fifo_frame__5__unnamedblk3__DOT__i = 1U;
    while (VL_GTS_III(32, 0x00000010U, __Vtask_tb_fifo_fft__DOT__check_fft_snapshots_fifo_frame__5__unnamedblk3__DOT__i)) {
        __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__9__idle_cycles = 2U;
        __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__9__sample = 0U;
        __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__9__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
        __Vtask_tb_fifo_fft__DOT__send_sample__10__sample 
            = __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__9__sample;
        Vtb_fifo_fft___024root____VbeforeTrig_h48b8a27f__0(vlSelf, 
                                                           "@(negedge tb_fifo_fft.clk)");
        co_await vlSelfRef.__VtrigSched_h48b8a27f__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(negedge tb_fifo_fft.clk)", 
                                                             "tb_fifo_fft.sv", 
                                                             58);
        vlSelfRef.tb_fifo_fft__DOT__mic_data = __Vtask_tb_fifo_fft__DOT__send_sample__10__sample;
        vlSelfRef.tb_fifo_fft__DOT__mic_ready = 1U;
        Vtb_fifo_fft___024root____VbeforeTrig_h48b8a27f__0(vlSelf, 
                                                           "@(negedge tb_fifo_fft.clk)");
        co_await vlSelfRef.__VtrigSched_h48b8a27f__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(negedge tb_fifo_fft.clk)", 
                                                             "tb_fifo_fft.sv", 
                                                             61);
        vlSelfRef.tb_fifo_fft__DOT__mic_ready = 0U;
        vlSelfRef.tb_fifo_fft__DOT__mic_data = 0U;
        __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__9__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__9__idle_cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__9__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            Vtb_fifo_fft___024root____VbeforeTrig_h48b8a5d3__0(vlSelf, 
                                                               "@(posedge tb_fifo_fft.clk)");
            co_await vlSelfRef.__VtrigSched_h48b8a5d3__0.trigger(0U, 
                                                                 vlProcess, 
                                                                 "@(posedge tb_fifo_fft.clk)", 
                                                                 "tb_fifo_fft.sv", 
                                                                 70);
            __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__9__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_fifo_fft__DOT__send_sample_with_gap__9__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_fifo_fft__DOT__check_fft_snapshots_fifo_frame__5__unnamedblk3__DOT__i 
            = ((IData)(1U) + __Vtask_tb_fifo_fft__DOT__check_fft_snapshots_fifo_frame__5__unnamedblk3__DOT__i);
    }
    vlSelfRef.__Vtask_tb_fifo_fft__DOT__wait_for_frame__11__expected_count = 1U;
    while ((vlSelfRef.tb_fifo_fft__DOT__frame_count 
            != vlSelfRef.__Vtask_tb_fifo_fft__DOT__wait_for_frame__11__expected_count)) {
        Vtb_fifo_fft___024root____VbeforeTrig_h19585463__0(vlSelf, 
                                                           "@( (tb_fifo_fft.frame_count == __Vtask_tb_fifo_fft.wait_for_frame__11__expected_count))");
        co_await vlSelfRef.__VtrigSched_h19585463__0.trigger(1U, 
                                                             vlProcess, 
                                                             "@( (tb_fifo_fft.frame_count == __Vtask_tb_fifo_fft.wait_for_frame__11__expected_count))", 
                                                             "tb_fifo_fft.sv", 
                                                             81);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         vlProcess, 
                                         "tb_fifo_fft.sv", 
                                         82);
    VlForkSync __Vfork_1__sync;
    __Vfork_1__sync.init(1U, vlProcess);
    Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_1__sync);
    Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_1__sync);
    co_await __Vfork_1__sync.join(vlProcess, "tb_fifo_fft.sv", 
                                  119);
    vlProcess->disableFork();
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         vlProcess, 
                                         "tb_fifo_fft.sv", 
                                         130);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[0U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 0: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[0U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[1U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 1: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[1U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[2U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 2: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[2U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[3U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 3: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[3U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[4U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 4: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[4U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[5U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 5: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[5U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[6U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 6: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[6U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[7U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 7: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[7U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[8U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 8: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[8U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[9U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 9: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[9U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[10U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 10: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[10U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[11U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 11: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[11U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[12U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 12: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[12U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[13U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 13: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[13U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[14U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 14: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[14U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((0x01000000U != vlSelfRef.tb_fifo_fft__DOT__fft_out[15U])))) {
            VL_WRITEF_NX("[%0t] %%Fatal: tb_fifo_fft.sv:134: Assertion failed in %Ntb_fifo_fft.check_fft_snapshots_fifo_frame.unnamedblk5: FFT did not snapshot impulse frame at bin 15: got %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),32,vlSelfRef.tb_fifo_fft__DOT__fft_out[15U]);
            VL_STOP_MT("tb_fifo_fft.sv", 134, "", false);
        }
    }
    VL_WRITEF_NX("PASS: FFT used a stable FIFO snapshot while FIFO collected the next frame.\nPASS: tb_fifo_fft completed.\n",0);
    vlProcess->disableFork();
    VL_FINISH_MT("tb_fifo_fft.sv", 145, "");
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_fifo_fft___024root____VbeforeTrig_ha77b1eaa__0(Vtb_fifo_fft___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1(Vtb_fifo_fft___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.tb_fifo_fft__DOT__fft_done)))) {
        Vtb_fifo_fft___024root____VbeforeTrig_ha77b1eaa__0(vlSelf, 
                                                           "@( tb_fifo_fft.fft_done)");
        co_await vlSelfRef.__VtrigSched_ha77b1eaa__0.trigger(1U, 
                                                             vlProcess, 
                                                             "@( tb_fifo_fft.fft_done)", 
                                                             "tb_fifo_fft.sv", 
                                                             126);
    }
    __Vfork_1__sync.done("tb_fifo_fft.sv", 125);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(Vtb_fifo_fft___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT____VforkTask_0__12__unnamedblk4__DOT__i;
    __Vtask_tb_fifo_fft__DOT____VforkTask_0__12__unnamedblk4__DOT__i = 0;
    SData/*15:0*/ __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__13__sample;
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__13__sample = 0;
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__13__idle_cycles;
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__13__idle_cycles = 0;
    IData/*31:0*/ __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__13__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__13__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    SData/*15:0*/ __Vtask_tb_fifo_fft__DOT__send_sample__14__sample;
    __Vtask_tb_fifo_fft__DOT__send_sample__14__sample = 0;
    // Body
    __Vtask_tb_fifo_fft__DOT____VforkTask_0__12__unnamedblk4__DOT__i = 0U;
    __Vtask_tb_fifo_fft__DOT____VforkTask_0__12__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, __Vtask_tb_fifo_fft__DOT____VforkTask_0__12__unnamedblk4__DOT__i)) {
        __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__13__idle_cycles = 5U;
        __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__13__sample = 0x7fffU;
        __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__13__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
        __Vtask_tb_fifo_fft__DOT__send_sample__14__sample 
            = __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__13__sample;
        Vtb_fifo_fft___024root____VbeforeTrig_h48b8a27f__0(vlSelf, 
                                                           "@(negedge tb_fifo_fft.clk)");
        co_await vlSelfRef.__VtrigSched_h48b8a27f__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(negedge tb_fifo_fft.clk)", 
                                                             "tb_fifo_fft.sv", 
                                                             58);
        vlSelfRef.tb_fifo_fft__DOT__mic_data = __Vtask_tb_fifo_fft__DOT__send_sample__14__sample;
        vlSelfRef.tb_fifo_fft__DOT__mic_ready = 1U;
        Vtb_fifo_fft___024root____VbeforeTrig_h48b8a27f__0(vlSelf, 
                                                           "@(negedge tb_fifo_fft.clk)");
        co_await vlSelfRef.__VtrigSched_h48b8a27f__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(negedge tb_fifo_fft.clk)", 
                                                             "tb_fifo_fft.sv", 
                                                             61);
        vlSelfRef.tb_fifo_fft__DOT__mic_ready = 0U;
        vlSelfRef.tb_fifo_fft__DOT__mic_data = 0U;
        __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__13__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__13__idle_cycles;
        while (VL_LTS_III(32, 0U, __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__13__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
            Vtb_fifo_fft___024root____VbeforeTrig_h48b8a5d3__0(vlSelf, 
                                                               "@(posedge tb_fifo_fft.clk)");
            co_await vlSelfRef.__VtrigSched_h48b8a5d3__0.trigger(0U, 
                                                                 vlProcess, 
                                                                 "@(posedge tb_fifo_fft.clk)", 
                                                                 "tb_fifo_fft.sv", 
                                                                 70);
            __Vtask_tb_fifo_fft__DOT__send_sample_with_gap__13__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 
                = (__Vtask_tb_fifo_fft__DOT__send_sample_with_gap__13__tb_fifo_fft__DOT__unnamedblk1_3__DOT____Vrepeat2 
                   - (IData)(1U));
        }
        __Vtask_tb_fifo_fft__DOT____VforkTask_0__12__unnamedblk4__DOT__i 
            = ((IData)(1U) + __Vtask_tb_fifo_fft__DOT____VforkTask_0__12__unnamedblk4__DOT__i);
    }
    __Vfork_1__sync.done("tb_fifo_fft.sv", 120);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vtb_fifo_fft___024root___eval_triggers_vec__act(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_triggers_vec__act\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h29f42cb2__0;
    __Vtrigprevexpr_h29f42cb2__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h8d6f63da__0;
    __Vtrigprevexpr_h8d6f63da__0 = 0;
    // Body
    __Vtrigprevexpr_h29f42cb2__0 = (vlSelfRef.tb_fifo_fft__DOT__frame_count 
                                    == vlSelfRef.__Vtask_tb_fifo_fft__DOT__wait_for_frame__4__expected_count);
    __Vtrigprevexpr_h8d6f63da__0 = (vlSelfRef.tb_fifo_fft__DOT__frame_count 
                                    == vlSelfRef.__Vtask_tb_fifo_fft__DOT__wait_for_frame__11__expected_count);
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.tb_fifo_fft__DOT__fft_done) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__fft_done__0)) 
                                                       << 6U) 
                                                      | ((((IData)(__Vtrigprevexpr_h8d6f63da__0) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr_h8d6f63da__1)) 
                                                          << 5U) 
                                                         | (((IData)(__Vtrigprevexpr_h29f42cb2__0) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr_h29f42cb2__1)) 
                                                            << 4U))) 
                                                     | (((((~ (IData)(vlSelfRef.tb_fifo_fft__DOT__clk)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__clk__0)) 
                                                          << 3U) 
                                                         | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.tb_fifo_fft__DOT__rst) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__rst__0))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.tb_fifo_fft__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__clk__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__clk__0 
        = vlSelfRef.tb_fifo_fft__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__rst__0 
        = vlSelfRef.tb_fifo_fft__DOT__rst;
    vlSelfRef.__Vtrigprevexpr_h29f42cb2__1 = __Vtrigprevexpr_h29f42cb2__0;
    vlSelfRef.__Vtrigprevexpr_h8d6f63da__1 = __Vtrigprevexpr_h8d6f63da__0;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__fft_done__0 
        = vlSelfRef.tb_fifo_fft__DOT__fft_done;
}

bool Vtb_fifo_fft___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___trigger_anySet__act\n"); );
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

void Vtb_fifo_fft___024root___nba_sequent__TOP__0(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___nba_sequent__TOP__0\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tb_fifo_fft__DOT__frame_count;
    __Vdly__tb_fifo_fft__DOT__frame_count = 0;
    IData/*31:0*/ __VdlyMask__tb_fifo_fft__DOT__frame_count;
    __VdlyMask__tb_fifo_fft__DOT__frame_count = 0;
    // Body
    vlSelfRef.__Vdly__tb_fifo_fft__DOT__dut_fifo__DOT__write_index 
        = vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__write_index;
    vlSelfRef.__VdlySet__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v16 = 0U;
    vlSelfRef.__VdlySet__tb_fifo_fft__DOT__fifo_out__v16 = 0U;
    vlSelfRef.__VdlySet__tb_fifo_fft__DOT__fifo_out__v17 = 0U;
    vlSelfRef.__VdlySet__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v0 = 0U;
    if (vlSelfRef.tb_fifo_fft__DOT__frame_ready) {
        __Vdly__tb_fifo_fft__DOT__frame_count = ((IData)(1U) 
                                                 + vlSelfRef.tb_fifo_fft__DOT__frame_count);
        __VdlyMask__tb_fifo_fft__DOT__frame_count = 0xffffffffU;
    }
    vlSelfRef.tb_fifo_fft__DOT__frame_count = ((__Vdly__tb_fifo_fft__DOT__frame_count 
                                                & __VdlyMask__tb_fifo_fft__DOT__frame_count) 
                                               | (vlSelfRef.tb_fifo_fft__DOT__frame_count 
                                                  & (~ __VdlyMask__tb_fifo_fft__DOT__frame_count)));
    __VdlyMask__tb_fifo_fft__DOT__frame_count = 0U;
}

void Vtb_fifo_fft___024root___nba_sequent__TOP__1(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___nba_sequent__TOP__1\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_fifo_fft__DOT__dut_fft__DOT__bu_B;
    tb_fifo_fft__DOT__dut_fft__DOT__bu_B = 0;
    IData/*31:0*/ tb_fifo_fft__DOT__dut_fft__DOT__bu_W;
    tb_fifo_fft__DOT__dut_fft__DOT__bu_W = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    CData/*1:0*/ __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__state;
    __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__state = 0;
    IData/*31:0*/ __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__stage_index;
    __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__stage_index = 0;
    IData/*31:0*/ __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__group_index;
    __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__group_index = 0;
    IData/*31:0*/ __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__pair_index;
    __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__pair_index = 0;
    CData/*0:0*/ __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v0;
    __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v16;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v16;
    __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v16 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v17;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v17;
    __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v17 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v18;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v18 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v19;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v19 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v20;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v20 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v21;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v21 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v22;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v22 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v23;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v23 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v24;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v24 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v25;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v25 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v26;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v26 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v27;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v27 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v28;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v28 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v29;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v29 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v30;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v30 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v31;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v31 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v32;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v32 = 0;
    CData/*3:0*/ __VdlyDim0__tb_fifo_fft__DOT__dut_fft__DOT__data__v32;
    __VdlyDim0__tb_fifo_fft__DOT__dut_fft__DOT__data__v32 = 0;
    CData/*0:0*/ __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v32;
    __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v32 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v33;
    __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v33 = 0;
    CData/*3:0*/ __VdlyDim0__tb_fifo_fft__DOT__dut_fft__DOT__data__v33;
    __VdlyDim0__tb_fifo_fft__DOT__dut_fft__DOT__data__v33 = 0;
    CData/*0:0*/ __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v33;
    __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v33 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v16;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_fifo_fft__DOT__fft_out__v16;
    __VdlySet__tb_fifo_fft__DOT__fft_out__v16 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v17;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_fifo_fft__DOT__fft_out__v17;
    __VdlySet__tb_fifo_fft__DOT__fft_out__v17 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v18;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v18 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v19;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v19 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v20;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v20 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v21;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v21 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v22;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v22 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v23;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v23 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v24;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v24 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v25;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v25 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v26;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v26 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v27;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v27 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v28;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v28 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v29;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v29 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v30;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v30 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fft_out__v31;
    __VdlyVal__tb_fifo_fft__DOT__fft_out__v31 = 0;
    // Body
    __VdlySet__tb_fifo_fft__DOT__fft_out__v16 = 0U;
    __VdlySet__tb_fifo_fft__DOT__fft_out__v17 = 0U;
    __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__state = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__state;
    __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__group_index 
        = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__group_index;
    __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__pair_index 
        = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__pair_index;
    __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__stage_index 
        = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__stage_index;
    __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v16 = 0U;
    __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v17 = 0U;
    __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v32 = 0U;
    __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v33 = 0U;
    __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v0 = 0U;
    if (vlSelfRef.tb_fifo_fft__DOT__rst) {
        __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__state = 0U;
        __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__stage_index = 0U;
        __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__group_index = 0U;
        __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__pair_index = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_done = 0U;
        __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v0 = 1U;
    } else {
        vlSelfRef.tb_fifo_fft__DOT__fft_done = 0U;
        if ((0U == (IData)(vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__state))) {
            if (vlSelfRef.tb_fifo_fft__DOT__frame_ready) {
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v16 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[0U];
                __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v16 = 1U;
                __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__stage_index = 0U;
                __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__group_index = 0U;
                __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__pair_index = 0U;
                __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__state = 1U;
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v17 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[1U];
                __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v17 = 1U;
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v18 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[2U];
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v19 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[3U];
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v20 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[4U];
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v21 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[5U];
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v22 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[6U];
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v23 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[7U];
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v24 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[8U];
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v25 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[9U];
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v26 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[10U];
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v27 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[11U];
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v28 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[12U];
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v29 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[13U];
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v30 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[14U];
                __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v31 
                    = vlSelfRef.tb_fifo_fft__DOT__fifo_out[15U];
            }
        } else if ((1U == (IData)(vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__state))) {
            __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v32 
                = ((((vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__bu_A 
                      >> 0x00000010U) + (IData)(vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT____VdfgRegularize_h07342c17_0_4)) 
                    << 0x00000010U) | (0x0000ffffU 
                                       & (vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__bu_A 
                                          + (IData)(vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT____VdfgRegularize_h07342c17_0_5))));
            __VdlyDim0__tb_fifo_fft__DOT__dut_fft__DOT__data__v32 
                = (0x0000000fU & vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__index_a);
            __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v32 = 1U;
            if ((((3U == vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__stage_index) 
                  & (vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__group_index 
                     == ((IData)(0x00000010U) - vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__stage_size))) 
                 & (vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__pair_index 
                    == (vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__half_size 
                        - (IData)(1U))))) {
                __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__state = 2U;
            } else if ((vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__pair_index 
                        == (vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__half_size 
                            - (IData)(1U)))) {
                if ((vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__group_index 
                     == ((IData)(0x00000010U) - vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__stage_size))) {
                    __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__stage_index 
                        = ((IData)(1U) + vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__stage_index);
                    __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__group_index = 0U;
                } else {
                    __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__group_index 
                        = (vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__group_index 
                           + vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__stage_size);
                }
                __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__pair_index = 0U;
            } else {
                __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__pair_index 
                    = ((IData)(1U) + vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__pair_index);
            }
            __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v33 
                = ((((vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__bu_A 
                      >> 0x00000010U) - (IData)(vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT____VdfgRegularize_h07342c17_0_4)) 
                    << 0x00000010U) | (0x0000ffffU 
                                       & (vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__bu_A 
                                          - (IData)(vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT____VdfgRegularize_h07342c17_0_5))));
            __VdlyDim0__tb_fifo_fft__DOT__dut_fft__DOT__data__v33 
                = (0x0000000fU & vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__index_b);
            __VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v33 = 1U;
        } else if ((2U == (IData)(vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__state))) {
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v16 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[0U];
            __VdlySet__tb_fifo_fft__DOT__fft_out__v16 = 1U;
            vlSelfRef.tb_fifo_fft__DOT__fft_done = 1U;
            __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__state = 0U;
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v17 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[1U];
            __VdlySet__tb_fifo_fft__DOT__fft_out__v17 = 1U;
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v18 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[2U];
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v19 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[3U];
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v20 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[4U];
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v21 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[5U];
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v22 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[6U];
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v23 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[7U];
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v24 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[8U];
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v25 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[9U];
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v26 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[10U];
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v27 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[11U];
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v28 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[12U];
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v29 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[13U];
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v30 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[14U];
            __VdlyVal__tb_fifo_fft__DOT__fft_out__v31 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[15U];
        } else {
            __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__state = 0U;
        }
    }
    vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__state 
        = __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__state;
    vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__group_index 
        = __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__group_index;
    vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__pair_index 
        = __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__pair_index;
    vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__stage_index 
        = __Vdly__tb_fifo_fft__DOT__dut_fft__DOT__stage_index;
    if (__VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v0) {
        vlSelfRef.tb_fifo_fft__DOT__fft_out[0U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[1U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[2U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[3U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[4U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[5U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[6U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[7U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[8U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[9U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[10U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[11U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[12U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[13U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[14U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[15U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[0U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[1U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[2U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[3U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[4U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[5U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[6U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[7U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[8U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[9U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[10U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[11U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[12U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[13U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[14U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[15U] = 0U;
    }
    if (__VdlySet__tb_fifo_fft__DOT__fft_out__v16) {
        vlSelfRef.tb_fifo_fft__DOT__fft_out[0U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v16;
    }
    if (__VdlySet__tb_fifo_fft__DOT__fft_out__v17) {
        vlSelfRef.tb_fifo_fft__DOT__fft_out[1U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v17;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[2U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v18;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[3U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v19;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[4U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v20;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[5U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v21;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[6U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v22;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[7U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v23;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[8U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v24;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[9U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v25;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[10U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v26;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[11U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v27;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[12U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v28;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[13U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v29;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[14U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v30;
        vlSelfRef.tb_fifo_fft__DOT__fft_out[15U] = __VdlyVal__tb_fifo_fft__DOT__fft_out__v31;
    }
    if (__VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v16) {
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[0U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v16;
    }
    if (__VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v17) {
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[8U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v17;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[4U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v18;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[12U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v19;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[2U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v20;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[10U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v21;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[6U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v22;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[14U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v23;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[1U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v24;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[9U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v25;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[5U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v26;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[13U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v27;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[3U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v28;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[11U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v29;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[7U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v30;
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[15U] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v31;
    }
    if (__VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v32) {
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[__VdlyDim0__tb_fifo_fft__DOT__dut_fft__DOT__data__v32] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v32;
    }
    if (__VdlySet__tb_fifo_fft__DOT__dut_fft__DOT__data__v33) {
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data[__VdlyDim0__tb_fifo_fft__DOT__dut_fft__DOT__data__v33] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fft__DOT__data__v33;
    }
    vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__stage_size 
        = VL_SHIFTL_III(32,32,32, (IData)(2U), vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__stage_index);
    __VdfgRegularize_hebeb780c_0_0 = (vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__pair_index 
                                      * VL_SHIFTR_III(32,32,32, 0x00000010U, 
                                                      ((IData)(1U) 
                                                       + vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__stage_index)));
    vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__half_size 
        = VL_SHIFTL_III(32,32,32, (IData)(1U), vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__stage_index);
    vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__index_a 
        = (vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__group_index 
           + vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__pair_index);
    vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__index_b 
        = (vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__index_a 
           + vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__half_size);
    vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__bu_A = 0U;
    tb_fifo_fft__DOT__dut_fft__DOT__bu_B = 0U;
    if ((1U == (IData)(vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__state))) {
        vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__bu_A 
            = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data
            [(0x0000000fU & vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__index_a)];
        tb_fifo_fft__DOT__dut_fft__DOT__bu_B = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data
            [(0x0000000fU & vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__index_b)];
    }
    tb_fifo_fft__DOT__dut_fft__DOT__bu_W = ((0x00000040U 
                                             & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                             ? 0x7fff0000U
                                             : ((0x00000020U 
                                                 & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                 ? 
                                                ((0x00000010U 
                                                  & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                  ? 
                                                 ((8U 
                                                   & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                   ? 
                                                  ((4U 
                                                    & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                    ? 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0x809ff374U
                                                     : 0x8277e707U)
                                                    : 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0x8584dad8U
                                                     : 0x89bfcf05U))
                                                   : 
                                                  ((4U 
                                                    & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                    ? 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0x8f1ec3aaU
                                                     : 0x9593b8e4U)
                                                    : 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0x9d0faecdU
                                                     : 0xa57ea57eU)))
                                                  : 
                                                 ((8U 
                                                   & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                   ? 
                                                  ((4U 
                                                    & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                    ? 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0xaecd9d0fU
                                                     : 0xb8e49593U)
                                                    : 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0xc3aa8f1eU
                                                     : 0xcf0589bfU))
                                                   : 
                                                  ((4U 
                                                    & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                    ? 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0xdad88584U
                                                     : 0xe7078277U)
                                                    : 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0xf374809fU
                                                     : 0x00008001U))))
                                                 : 
                                                ((0x00000010U 
                                                  & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                  ? 
                                                 ((8U 
                                                   & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                   ? 
                                                  ((4U 
                                                    & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                    ? 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0x0c8c809fU
                                                     : 0x18f98277U)
                                                    : 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0x25288584U
                                                     : 0x30fb89bfU))
                                                   : 
                                                  ((4U 
                                                    & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                    ? 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0x3c568f1eU
                                                     : 0x471c9593U)
                                                    : 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0x51339d0fU
                                                     : 0x5a82a57eU)))
                                                  : 
                                                 ((8U 
                                                   & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                   ? 
                                                  ((4U 
                                                    & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                    ? 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0x62f1aecdU
                                                     : 0x6a6db8e4U)
                                                    : 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0x70e2c3aaU
                                                     : 0x7641cf05U))
                                                   : 
                                                  ((4U 
                                                    & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                    ? 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0x7a7cdad8U
                                                     : 0x7d89e707U)
                                                    : 
                                                   ((2U 
                                                     & VL_SHIFTL_III(32,32,32, __VdfgRegularize_hebeb780c_0_0, 3U))
                                                     ? 0x7f61f374U
                                                     : 0x7fff0000U))))));
    vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT____VdfgRegularize_h07342c17_0_4 
        = (0x0000ffffU & (IData)((0x000000000003ffffULL 
                                  & ((VL_MULS_QQQ(33, 
                                                  (0x00000001ffffffffULL 
                                                   & VL_EXTENDS_QI(33,16, 
                                                                   (tb_fifo_fft__DOT__dut_fft__DOT__bu_W 
                                                                    >> 0x00000010U))), 
                                                  (0x00000001ffffffffULL 
                                                   & VL_EXTENDS_QI(33,16, 
                                                                   (tb_fifo_fft__DOT__dut_fft__DOT__bu_B 
                                                                    >> 0x00000010U)))) 
                                      - VL_MULS_QQQ(33, 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,16, 
                                                                     (0x0000ffffU 
                                                                      & tb_fifo_fft__DOT__dut_fft__DOT__bu_W))), 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,16, 
                                                                     (0x0000ffffU 
                                                                      & tb_fifo_fft__DOT__dut_fft__DOT__bu_B))))) 
                                     >> 0x0000000fU))));
    vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT____VdfgRegularize_h07342c17_0_5 
        = (0x0000ffffU & (IData)((0x000000000003ffffULL 
                                  & ((VL_MULS_QQQ(33, 
                                                  (0x00000001ffffffffULL 
                                                   & VL_EXTENDS_QI(33,16, 
                                                                   (0x0000ffffU 
                                                                    & tb_fifo_fft__DOT__dut_fft__DOT__bu_W))), 
                                                  (0x00000001ffffffffULL 
                                                   & VL_EXTENDS_QI(33,16, 
                                                                   (tb_fifo_fft__DOT__dut_fft__DOT__bu_B 
                                                                    >> 0x00000010U)))) 
                                      + VL_MULS_QQQ(33, 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,16, 
                                                                     (tb_fifo_fft__DOT__dut_fft__DOT__bu_W 
                                                                      >> 0x00000010U))), 
                                                    (0x00000001ffffffffULL 
                                                     & VL_EXTENDS_QI(33,16, 
                                                                     (0x0000ffffU 
                                                                      & tb_fifo_fft__DOT__dut_fft__DOT__bu_B))))) 
                                     >> 0x0000000fU))));
}

void Vtb_fifo_fft___024root___nba_sequent__TOP__2(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___nba_sequent__TOP__2\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __VdlyVal__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v16;
    __VdlyVal__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v16 = 0;
    CData/*3:0*/ __VdlyDim0__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v16;
    __VdlyDim0__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v16 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v16;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v16 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v17;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v17 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v18;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v18 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v19;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v19 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v20;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v20 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v21;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v21 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v22;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v22 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v23;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v23 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v24;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v24 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v25;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v25 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v26;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v26 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v27;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v27 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v28;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v28 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v29;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v29 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v30;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v30 = 0;
    IData/*31:0*/ __VdlyVal__tb_fifo_fft__DOT__fifo_out__v31;
    __VdlyVal__tb_fifo_fft__DOT__fifo_out__v31 = 0;
    // Body
    if (vlSelfRef.tb_fifo_fft__DOT__rst) {
        vlSelfRef.__Vdly__tb_fifo_fft__DOT__dut_fifo__DOT__write_index = 0U;
        vlSelfRef.tb_fifo_fft__DOT__frame_ready = 0U;
        vlSelfRef.__VdlySet__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v0 = 1U;
    } else {
        vlSelfRef.tb_fifo_fft__DOT__frame_ready = 0U;
        if (vlSelfRef.tb_fifo_fft__DOT__mic_ready) {
            __VdlyVal__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v16 
                = vlSelfRef.tb_fifo_fft__DOT__mic_data;
            __VdlyDim0__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v16 
                = vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__write_index;
            vlSelfRef.__VdlySet__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v16 = 1U;
            if ((0x0fU == (IData)(vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__write_index))) {
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v16 
                    = (vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[0U] 
                       << 0x00000010U);
                vlSelfRef.__VdlySet__tb_fifo_fft__DOT__fifo_out__v16 = 1U;
                vlSelfRef.tb_fifo_fft__DOT__frame_ready = 1U;
                vlSelfRef.__Vdly__tb_fifo_fft__DOT__dut_fifo__DOT__write_index = 0U;
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v17 
                    = (vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[1U] 
                       << 0x00000010U);
                vlSelfRef.__VdlySet__tb_fifo_fft__DOT__fifo_out__v17 = 1U;
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v18 
                    = (vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[2U] 
                       << 0x00000010U);
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v19 
                    = (vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[3U] 
                       << 0x00000010U);
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v20 
                    = (vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[4U] 
                       << 0x00000010U);
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v21 
                    = (vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[5U] 
                       << 0x00000010U);
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v22 
                    = (vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[6U] 
                       << 0x00000010U);
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v23 
                    = (vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[7U] 
                       << 0x00000010U);
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v24 
                    = (vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[8U] 
                       << 0x00000010U);
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v25 
                    = (vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[9U] 
                       << 0x00000010U);
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v26 
                    = (vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[10U] 
                       << 0x00000010U);
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v27 
                    = (vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[11U] 
                       << 0x00000010U);
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v28 
                    = (vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[12U] 
                       << 0x00000010U);
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v29 
                    = (vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[13U] 
                       << 0x00000010U);
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v30 
                    = (vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[14U] 
                       << 0x00000010U);
                __VdlyVal__tb_fifo_fft__DOT__fifo_out__v31 
                    = ((IData)(vlSelfRef.tb_fifo_fft__DOT__mic_data) 
                       << 0x00000010U);
            } else {
                vlSelfRef.__Vdly__tb_fifo_fft__DOT__dut_fifo__DOT__write_index 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__write_index)));
            }
        }
    }
    vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__write_index 
        = vlSelfRef.__Vdly__tb_fifo_fft__DOT__dut_fifo__DOT__write_index;
    if (vlSelfRef.__VdlySet__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v0) {
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[0U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[1U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[2U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[3U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[4U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[5U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[6U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[7U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[8U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[9U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[10U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[11U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[12U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[13U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[14U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[15U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[0U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[1U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[2U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[3U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[4U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[5U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[6U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[7U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[8U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[9U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[10U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[11U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[12U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[13U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[14U] = 0U;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[15U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v16) {
        vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__buffer[__VdlyDim0__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v16] 
            = __VdlyVal__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v16;
    }
    if (vlSelfRef.__VdlySet__tb_fifo_fft__DOT__fifo_out__v16) {
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[0U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v16;
    }
    if (vlSelfRef.__VdlySet__tb_fifo_fft__DOT__fifo_out__v17) {
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[1U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v17;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[2U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v18;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[3U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v19;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[4U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v20;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[5U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v21;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[6U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v22;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[7U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v23;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[8U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v24;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[9U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v25;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[10U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v26;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[11U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v27;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[12U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v28;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[13U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v29;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[14U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v30;
        vlSelfRef.tb_fifo_fft__DOT__fifo_out[15U] = __VdlyVal__tb_fifo_fft__DOT__fifo_out__v31;
    }
}

void Vtb_fifo_fft___024root___eval_nba(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_nba\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___Vdly__tb_fifo_fft__DOT__frame_count;
    __Vinline__nba_sequent__TOP__0___Vdly__tb_fifo_fft__DOT__frame_count = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___VdlyMask__tb_fifo_fft__DOT__frame_count;
    __Vinline__nba_sequent__TOP__0___VdlyMask__tb_fifo_fft__DOT__frame_count = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__Vdly__tb_fifo_fft__DOT__dut_fifo__DOT__write_index 
            = vlSelfRef.tb_fifo_fft__DOT__dut_fifo__DOT__write_index;
        vlSelfRef.__VdlySet__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v16 = 0U;
        vlSelfRef.__VdlySet__tb_fifo_fft__DOT__fifo_out__v16 = 0U;
        vlSelfRef.__VdlySet__tb_fifo_fft__DOT__fifo_out__v17 = 0U;
        vlSelfRef.__VdlySet__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v0 = 0U;
        if (vlSelfRef.tb_fifo_fft__DOT__frame_ready) {
            __Vinline__nba_sequent__TOP__0___Vdly__tb_fifo_fft__DOT__frame_count 
                = ((IData)(1U) + vlSelfRef.tb_fifo_fft__DOT__frame_count);
            __Vinline__nba_sequent__TOP__0___VdlyMask__tb_fifo_fft__DOT__frame_count = 0xffffffffU;
        }
        vlSelfRef.tb_fifo_fft__DOT__frame_count = (
                                                   (__Vinline__nba_sequent__TOP__0___Vdly__tb_fifo_fft__DOT__frame_count 
                                                    & __Vinline__nba_sequent__TOP__0___VdlyMask__tb_fifo_fft__DOT__frame_count) 
                                                   | (vlSelfRef.tb_fifo_fft__DOT__frame_count 
                                                      & (~ __Vinline__nba_sequent__TOP__0___VdlyMask__tb_fifo_fft__DOT__frame_count)));
        __Vinline__nba_sequent__TOP__0___VdlyMask__tb_fifo_fft__DOT__frame_count = 0U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_fifo_fft___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_fifo_fft___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vtb_fifo_fft___024root___timing_ready(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___timing_ready\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready("@(posedge tb_fifo_fft.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready("@(negedge tb_fifo_fft.clk)");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h7dc31d1b__0.ready("@( (tb_fifo_fft.frame_count == __Vtask_tb_fifo_fft.wait_for_frame__4__expected_count))");
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h19585463__0.ready("@( (tb_fifo_fft.frame_count == __Vtask_tb_fifo_fft.wait_for_frame__11__expected_count))");
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_ha77b1eaa__0.ready("@( tb_fifo_fft.fft_done)");
    }
}

void Vtb_fifo_fft___024root___timing_resume(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___timing_resume\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h48b8a5d3__0.moveToResumeQueue(
                                                          "@(posedge tb_fifo_fft.clk)");
    vlSelfRef.__VtrigSched_h48b8a27f__0.moveToResumeQueue(
                                                          "@(negedge tb_fifo_fft.clk)");
    vlSelfRef.__VtrigSched_h7dc31d1b__0.moveToResumeQueue(
                                                          "@( (tb_fifo_fft.frame_count == __Vtask_tb_fifo_fft.wait_for_frame__4__expected_count))");
    vlSelfRef.__VtrigSched_h19585463__0.moveToResumeQueue(
                                                          "@( (tb_fifo_fft.frame_count == __Vtask_tb_fifo_fft.wait_for_frame__11__expected_count))");
    vlSelfRef.__VtrigSched_ha77b1eaa__0.moveToResumeQueue(
                                                          "@( tb_fifo_fft.fft_done)");
    vlSelfRef.__VtrigSched_h48b8a5d3__0.resume("@(posedge tb_fifo_fft.clk)");
    vlSelfRef.__VtrigSched_h48b8a27f__0.resume("@(negedge tb_fifo_fft.clk)");
    vlSelfRef.__VtrigSched_h7dc31d1b__0.resume("@( (tb_fifo_fft.frame_count == __Vtask_tb_fifo_fft.wait_for_frame__4__expected_count))");
    vlSelfRef.__VtrigSched_h19585463__0.resume("@( (tb_fifo_fft.frame_count == __Vtask_tb_fifo_fft.wait_for_frame__11__expected_count))");
    vlSelfRef.__VtrigSched_ha77b1eaa__0.resume("@( tb_fifo_fft.fft_done)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_fifo_fft___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_fifo_fft___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_fifo_fft___024root___eval_phase__act(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_phase__act\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fifo_fft___024root___eval_triggers_vec__act(vlSelf);
    Vtb_fifo_fft___024root___timing_ready(vlSelf);
    Vtb_fifo_fft___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fifo_fft___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_fifo_fft___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_fifo_fft___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_fifo_fft___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fifo_fft___024root___eval_phase__inact(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_phase__inact\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_fifo_fft.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_fifo_fft___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_fifo_fft___024root___eval_phase__nba(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_phase__nba\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_fifo_fft___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_fifo_fft___024root___eval_nba(vlSelf);
        Vtb_fifo_fft___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_fifo_fft___024root___eval(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fifo_fft___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_fifo_fft.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_fifo_fft.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_fifo_fft___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_fifo_fft.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_fifo_fft___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_fifo_fft___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_fifo_fft___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_fifo_fft___024root____VbeforeTrig_h48b8a5d3__0(Vtb_fifo_fft___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root____VbeforeTrig_h48b8a5d3__0\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_fifo_fft__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_fifo_fft__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__clk__0 
        = vlSelfRef.tb_fifo_fft__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_fifo_fft___024root____VbeforeTrig_h48b8a27f__0(Vtb_fifo_fft___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root____VbeforeTrig_h48b8a27f__0\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((((~ (IData)(vlSelfRef.tb_fifo_fft__DOT__clk)) 
                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__clk__0)) 
                                   << 3U) | ((IData)(vlSelfRef.tb_fifo_fft__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__clk__0 
        = vlSelfRef.tb_fifo_fft__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a5d3__0.ready(__VeventDescription);
    }
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h48b8a27f__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_fifo_fft___024root____VbeforeTrig_h7dc31d1b__0(Vtb_fifo_fft___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root____VbeforeTrig_h7dc31d1b__0\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_h29f42cb2__0;
    __Vtrigprevexpr_h29f42cb2__0 = 0;
    // Body
    __Vtrigprevexpr_h29f42cb2__0 = (vlSelfRef.tb_fifo_fft__DOT__frame_count 
                                    == vlSelfRef.__Vtask_tb_fifo_fft__DOT__wait_for_frame__4__expected_count);
    __VTmp[0U] = (QData)((IData)((((IData)(__Vtrigprevexpr_h29f42cb2__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_h29f42cb2__1)) 
                                  << 4U)));
    vlSelfRef.__Vtrigprevexpr_h29f42cb2__1 = __Vtrigprevexpr_h29f42cb2__0;
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h7dc31d1b__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_fifo_fft___024root____VbeforeTrig_h19585463__0(Vtb_fifo_fft___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root____VbeforeTrig_h19585463__0\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    CData/*0:0*/ __Vtrigprevexpr_h8d6f63da__0;
    __Vtrigprevexpr_h8d6f63da__0 = 0;
    // Body
    __Vtrigprevexpr_h8d6f63da__0 = (vlSelfRef.tb_fifo_fft__DOT__frame_count 
                                    == vlSelfRef.__Vtask_tb_fifo_fft__DOT__wait_for_frame__11__expected_count);
    __VTmp[0U] = (QData)((IData)((((IData)(__Vtrigprevexpr_h8d6f63da__0) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr_h8d6f63da__1)) 
                                  << 5U)));
    vlSelfRef.__Vtrigprevexpr_h8d6f63da__1 = __Vtrigprevexpr_h8d6f63da__0;
    if ((0x0000000000000020ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h19585463__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_fifo_fft___024root____VbeforeTrig_ha77b1eaa__0(Vtb_fifo_fft___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root____VbeforeTrig_ha77b1eaa__0\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_fifo_fft__DOT__fft_done) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__fft_done__0)) 
                                  << 6U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__fft_done__0 
        = vlSelfRef.tb_fifo_fft__DOT__fft_done;
    if ((0x0000000000000040ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_ha77b1eaa__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_fifo_fft___024root___eval_debug_assertions(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_debug_assertions\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
