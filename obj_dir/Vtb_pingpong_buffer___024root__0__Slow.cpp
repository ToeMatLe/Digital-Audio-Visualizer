// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_pingpong_buffer.h for the primary calling header

#include "Vtb_pingpong_buffer__pch.h"

void Vtb_pingpong_buffer___024root___timing_ready(Vtb_pingpong_buffer___024root* vlSelf);

VL_ATTR_COLD void Vtb_pingpong_buffer___024root___eval_static(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval_static\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__clk__0 
        = vlSelfRef.tb_pingpong_buffer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__rst__0 
        = vlSelfRef.tb_pingpong_buffer__DOT__rst;
    Vtb_pingpong_buffer___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_pingpong_buffer___024root___eval_final(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval_final\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pingpong_buffer___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_pingpong_buffer___024root___eval_phase__stl(Vtb_pingpong_buffer___024root* vlSelf);

VL_ATTR_COLD void Vtb_pingpong_buffer___024root___eval_settle(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval_settle\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_pingpong_buffer___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_pingpong_buffer.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_pingpong_buffer___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_pingpong_buffer___024root___eval_triggers_vec__stl(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval_triggers_vec__stl\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_pingpong_buffer___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pingpong_buffer___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_pingpong_buffer___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_pingpong_buffer___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_pingpong_buffer___024root___stl_sequent__TOP__0(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___stl_sequent__TOP__0\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vtb_pingpong_buffer___024root___eval_stl(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval_stl\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
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
}

VL_ATTR_COLD bool Vtb_pingpong_buffer___024root___eval_phase__stl(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___eval_phase__stl\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_pingpong_buffer___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_pingpong_buffer___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_pingpong_buffer___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_pingpong_buffer___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_pingpong_buffer___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_pingpong_buffer___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_pingpong_buffer___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_pingpong_buffer.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb_pingpong_buffer.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_pingpong_buffer.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_pingpong_buffer___024root___ctor_var_reset(Vtb_pingpong_buffer___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_pingpong_buffer___024root___ctor_var_reset\n"); );
    Vtb_pingpong_buffer__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_pingpong_buffer__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12313710603440396343ull);
    vlSelf->tb_pingpong_buffer__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14168442135432360138ull);
    vlSelf->tb_pingpong_buffer__DOT__frame_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 42071191914057184ull);
    vlSelf->tb_pingpong_buffer__DOT__update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9032948046042710543ull);
    vlSelf->tb_pingpong_buffer__DOT__next_active_bars = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15994780320394551636ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_pingpong_buffer__DOT__next_bar_heights[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8991328101832690711ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_pingpong_buffer__DOT__bar_heights[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3142913573230241233ull);
    }
    vlSelf->tb_pingpong_buffer__DOT__dut__DOT__front_select = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15310118163430365962ull);
    vlSelf->tb_pingpong_buffer__DOT__dut__DOT__update_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3617155768951313746ull);
    vlSelf->tb_pingpong_buffer__DOT__dut__DOT__active_bars0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8492143489716321298ull);
    vlSelf->tb_pingpong_buffer__DOT__dut__DOT__active_bars1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8468312993264277129ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_pingpong_buffer__DOT__dut__DOT__bar_buffer0[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3474026048616894104ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_pingpong_buffer__DOT__dut__DOT__bar_buffer1[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12545180017333837622ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_pingpong_buffer__DOT__rst__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
