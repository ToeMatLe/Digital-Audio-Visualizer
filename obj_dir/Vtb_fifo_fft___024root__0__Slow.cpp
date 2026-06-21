// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo_fft.h for the primary calling header

#include "Vtb_fifo_fft__pch.h"

void Vtb_fifo_fft___024root___timing_ready(Vtb_fifo_fft___024root* vlSelf);

VL_ATTR_COLD void Vtb_fifo_fft___024root___eval_static(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_static\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000040ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__clk__0 
        = vlSelfRef.tb_fifo_fft__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__rst__0 
        = vlSelfRef.tb_fifo_fft__DOT__rst;
    vlSelfRef.__Vtrigprevexpr_h29f42cb2__1 = (vlSelfRef.tb_fifo_fft__DOT__frame_count 
                                              == vlSelfRef.__Vtask_tb_fifo_fft__DOT__wait_for_frame__4__expected_count);
    vlSelfRef.__Vtrigprevexpr_h8d6f63da__1 = (vlSelfRef.tb_fifo_fft__DOT__frame_count 
                                              == vlSelfRef.__Vtask_tb_fifo_fft__DOT__wait_for_frame__11__expected_count);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__fft_done__0 
        = vlSelfRef.tb_fifo_fft__DOT__fft_done;
    Vtb_fifo_fft___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_fifo_fft___024root___eval_final(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_final\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_fft___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_fifo_fft___024root___eval_phase__stl(Vtb_fifo_fft___024root* vlSelf);

VL_ATTR_COLD void Vtb_fifo_fft___024root___eval_settle(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_settle\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fifo_fft___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_fifo_fft.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_fifo_fft___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_fifo_fft___024root___eval_triggers_vec__stl(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_triggers_vec__stl\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_fifo_fft___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_fft___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fifo_fft___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_fifo_fft___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_fifo_fft___024root___stl_sequent__TOP__0(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___stl_sequent__TOP__0\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_fifo_fft__DOT__dut_fft__DOT__bu_A;
    tb_fifo_fft__DOT__dut_fft__DOT__bu_A = 0;
    IData/*31:0*/ tb_fifo_fft__DOT__dut_fft__DOT__bu_B;
    tb_fifo_fft__DOT__dut_fft__DOT__bu_B = 0;
    IData/*31:0*/ tb_fifo_fft__DOT__dut_fft__DOT__bu_W;
    tb_fifo_fft__DOT__dut_fft__DOT__bu_W = 0;
    QData/*32:0*/ tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT__WxB_re;
    tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT__WxB_re = 0;
    QData/*32:0*/ tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT__WxB_im;
    tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT__WxB_im = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    // Body
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
    tb_fifo_fft__DOT__dut_fft__DOT__bu_A = 0U;
    tb_fifo_fft__DOT__dut_fft__DOT__bu_B = 0U;
    if ((1U == (IData)(vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__state))) {
        tb_fifo_fft__DOT__dut_fft__DOT__bu_A = vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__data
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
        = ((0x00010000U & (tb_fifo_fft__DOT__dut_fft__DOT__bu_A 
                           >> 0x0000000fU)) | (tb_fifo_fft__DOT__dut_fft__DOT__bu_A 
                                               >> 0x00000010U));
    vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT____VdfgRegularize_h07342c17_0_6 
        = ((0x00010000U & (tb_fifo_fft__DOT__dut_fft__DOT__bu_A 
                           << 1U)) | (0x0000ffffU & tb_fifo_fft__DOT__dut_fft__DOT__bu_A));
    tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT__WxB_re 
        = (0x00000001ffffffffULL & (VL_MULS_QQQ(33, 
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
                                                                    & tb_fifo_fft__DOT__dut_fft__DOT__bu_B))))));
    tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT__WxB_im 
        = (0x00000001ffffffffULL & (VL_MULS_QQQ(33, 
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
                                                                    & tb_fifo_fft__DOT__dut_fft__DOT__bu_B))))));
    vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT____VdfgRegularize_h07342c17_0_5 
        = ((0x00010000U & ((IData)((tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT__WxB_re 
                                    >> 0x0000001eU)) 
                           << 0x00000010U)) | (0x0000ffffU 
                                               & (IData)(
                                                         (tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT__WxB_re 
                                                          >> 0x0000000fU))));
    vlSelfRef.tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT____VdfgRegularize_h07342c17_0_7 
        = ((0x00010000U & ((IData)((tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT__WxB_im 
                                    >> 0x0000001eU)) 
                           << 0x00000010U)) | (0x0000ffffU 
                                               & (IData)(
                                                         (tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT__WxB_im 
                                                          >> 0x0000000fU))));
}

VL_ATTR_COLD void Vtb_fifo_fft___024root___eval_stl(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_stl\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_fifo_fft___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_fifo_fft___024root___eval_phase__stl(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___eval_phase__stl\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_fifo_fft___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fifo_fft___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_fifo_fft___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_fifo_fft___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_fifo_fft___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fifo_fft___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fifo_fft___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_fifo_fft.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb_fifo_fft.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_fifo_fft.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( (tb_fifo_fft.frame_count == __Vtask_tb_fifo_fft.wait_for_frame__4__expected_count))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( (tb_fifo_fft.frame_count == __Vtask_tb_fifo_fft.wait_for_frame__11__expected_count))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( tb_fifo_fft.fft_done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fifo_fft___024root___ctor_var_reset(Vtb_fifo_fft___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fifo_fft___024root___ctor_var_reset\n"); );
    Vtb_fifo_fft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_fifo_fft__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2974250175566484652ull);
    vlSelf->tb_fifo_fft__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15848149311172204279ull);
    vlSelf->tb_fifo_fft__DOT__mic_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13348615257228354964ull);
    vlSelf->tb_fifo_fft__DOT__mic_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4085831233374201007ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_fifo_fft__DOT__fifo_out[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10836878967010627951ull);
    }
    vlSelf->tb_fifo_fft__DOT__frame_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11156477608240666840ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_fifo_fft__DOT__fft_out[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7281493730577772733ull);
    }
    vlSelf->tb_fifo_fft__DOT__fft_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2908118057041604763ull);
    vlSelf->tb_fifo_fft__DOT__frame_count = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_fifo_fft__DOT__dut_fifo__DOT__buffer[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 25910770633323728ull);
    }
    vlSelf->tb_fifo_fft__DOT__dut_fifo__DOT__write_index = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5321582195700102746ull);
    vlSelf->tb_fifo_fft__DOT__dut_fft__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3517132093861683458ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_fifo_fft__DOT__dut_fft__DOT__data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12274868713456125504ull);
    }
    vlSelf->tb_fifo_fft__DOT__dut_fft__DOT__stage_index = 0;
    vlSelf->tb_fifo_fft__DOT__dut_fft__DOT__group_index = 0;
    vlSelf->tb_fifo_fft__DOT__dut_fft__DOT__pair_index = 0;
    vlSelf->tb_fifo_fft__DOT__dut_fft__DOT__index_a = 0;
    vlSelf->tb_fifo_fft__DOT__dut_fft__DOT__index_b = 0;
    vlSelf->tb_fifo_fft__DOT__dut_fft__DOT__half_size = 0;
    vlSelf->tb_fifo_fft__DOT__dut_fft__DOT__stage_size = 0;
    vlSelf->tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT____VdfgRegularize_h07342c17_0_4 = 0;
    vlSelf->tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT____VdfgRegularize_h07342c17_0_5 = 0;
    vlSelf->tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT____VdfgRegularize_h07342c17_0_6 = 0;
    vlSelf->tb_fifo_fft__DOT__dut_fft__DOT__bu__DOT____VdfgRegularize_h07342c17_0_7 = 0;
    vlSelf->__Vtask_tb_fifo_fft__DOT__wait_for_frame__4__expected_count = 0;
    vlSelf->__Vtask_tb_fifo_fft__DOT__wait_for_frame__11__expected_count = 0;
    vlSelf->__Vdly__tb_fifo_fft__DOT__dut_fifo__DOT__write_index = 0;
    vlSelf->__VdlySet__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v0 = 0;
    vlSelf->__VdlySet__tb_fifo_fft__DOT__dut_fifo__DOT__buffer__v16 = 0;
    vlSelf->__VdlySet__tb_fifo_fft__DOT__fifo_out__v16 = 0;
    vlSelf->__VdlySet__tb_fifo_fft__DOT__fifo_out__v17 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr_h29f42cb2__1 = 0;
    vlSelf->__Vtrigprevexpr_h8d6f63da__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_fifo_fft__DOT__fft_done__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
