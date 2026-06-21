// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fft_128.h for the primary calling header

#include "Vtb_fft_128__pch.h"

void Vtb_fft_128___024root___timing_ready(Vtb_fft_128___024root* vlSelf);

VL_ATTR_COLD void Vtb_fft_128___024root___eval_static(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval_static\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__clk__0 
        = vlSelfRef.tb_fft_128__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__rst__0 
        = vlSelfRef.tb_fft_128__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fft_128__DOT__done__0 
        = vlSelfRef.tb_fft_128__DOT__done;
    Vtb_fft_128___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_fft_128___024root___eval_final(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval_final\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft_128___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_fft_128___024root___eval_phase__stl(Vtb_fft_128___024root* vlSelf);

VL_ATTR_COLD void Vtb_fft_128___024root___eval_settle(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval_settle\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_fft_128___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_fft_128.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_fft_128___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_fft_128___024root___eval_triggers_vec__stl(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval_triggers_vec__stl\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_fft_128___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft_128___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fft_128___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_fft_128___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_fft_128___024root___stl_sequent__TOP__0(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___stl_sequent__TOP__0\n"); );
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
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    // Body
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

VL_ATTR_COLD void Vtb_fft_128___024root___eval_stl(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval_stl\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_fft_128___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_fft_128___024root___eval_phase__stl(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___eval_phase__stl\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_fft_128___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fft_128___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_fft_128___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_fft_128___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_fft_128___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft_128___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fft_128___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_fft_128.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge tb_fft_128.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_fft_128.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( tb_fft_128.done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fft_128___024root___ctor_var_reset(Vtb_fft_128___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft_128___024root___ctor_var_reset\n"); );
    Vtb_fft_128__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_fft_128__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11063815101599235056ull);
    vlSelf->tb_fft_128__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3407880363912758104ull);
    vlSelf->tb_fft_128__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15891303354218790531ull);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_fft_128__DOT__fft_in[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7679291884826620310ull);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_fft_128__DOT__fft_out[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1272326674572048953ull);
    }
    vlSelf->tb_fft_128__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3592771865506222096ull);
    vlSelf->tb_fft_128__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10239797197934963134ull);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->tb_fft_128__DOT__dut__DOT__data[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 179329307595926040ull);
    }
    vlSelf->tb_fft_128__DOT__dut__DOT__stage_index = 0;
    vlSelf->tb_fft_128__DOT__dut__DOT__group_index = 0;
    vlSelf->tb_fft_128__DOT__dut__DOT__pair_index = 0;
    vlSelf->tb_fft_128__DOT__dut__DOT__index_a = 0;
    vlSelf->tb_fft_128__DOT__dut__DOT__index_b = 0;
    vlSelf->tb_fft_128__DOT__dut__DOT__half_size = 0;
    vlSelf->tb_fft_128__DOT__dut__DOT__stage_size = 0;
    vlSelf->tb_fft_128__DOT__dut__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->tb_fft_128__DOT__dut__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->tb_fft_128__DOT__dut__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_4 = 0;
    vlSelf->tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_5 = 0;
    vlSelf->tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_6 = 0;
    vlSelf->tb_fft_128__DOT__dut__DOT__bu__DOT____VdfgRegularize_h07342c17_0_7 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_fft_128__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_fft_128__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_fft_128__DOT__done__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
