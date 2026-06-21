// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bar_mapper.h for the primary calling header

#include "Vtb_bar_mapper__pch.h"

VL_ATTR_COLD void Vtb_bar_mapper___024root___eval_static(Vtb_bar_mapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bar_mapper___024root___eval_static\n"); );
    Vtb_bar_mapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_bar_mapper___024root___eval_final(Vtb_bar_mapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bar_mapper___024root___eval_final\n"); );
    Vtb_bar_mapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bar_mapper___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_bar_mapper___024root___eval_phase__stl(Vtb_bar_mapper___024root* vlSelf);

VL_ATTR_COLD void Vtb_bar_mapper___024root___eval_settle(Vtb_bar_mapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bar_mapper___024root___eval_settle\n"); );
    Vtb_bar_mapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_bar_mapper___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_bar_mapper.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_bar_mapper___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_bar_mapper___024root___eval_triggers_vec__stl(Vtb_bar_mapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bar_mapper___024root___eval_triggers_vec__stl\n"); );
    Vtb_bar_mapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_bar_mapper___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bar_mapper___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bar_mapper___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_bar_mapper___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_bar_mapper___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bar_mapper___024root___trigger_anySet__stl\n"); );
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

void Vtb_bar_mapper___024root___act_sequent__TOP__0(Vtb_bar_mapper___024root* vlSelf);

VL_ATTR_COLD void Vtb_bar_mapper___024root___eval_stl(Vtb_bar_mapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bar_mapper___024root___eval_stl\n"); );
    Vtb_bar_mapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_bar_mapper___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_bar_mapper___024root___eval_phase__stl(Vtb_bar_mapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bar_mapper___024root___eval_phase__stl\n"); );
    Vtb_bar_mapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_bar_mapper___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_bar_mapper___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_bar_mapper___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_bar_mapper___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_bar_mapper___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bar_mapper___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bar_mapper___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_bar_mapper___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_bar_mapper___024root___ctor_var_reset(Vtb_bar_mapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bar_mapper___024root___ctor_var_reset\n"); );
    Vtb_bar_mapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_bar_mapper__DOT__switch16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14903413769074027533ull);
    vlSelf->tb_bar_mapper__DOT__switch64 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3485470912170563251ull);
    vlSelf->tb_bar_mapper__DOT__switch128 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2371124005772393599ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_bar_mapper__DOT__bin_heights[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3799207894061294926ull);
    }
    vlSelf->tb_bar_mapper__DOT__active_bars = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2108062807524281764ull);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_bar_mapper__DOT__bar_heights[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10626216291552852915ull);
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
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
