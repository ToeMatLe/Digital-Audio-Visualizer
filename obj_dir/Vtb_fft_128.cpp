// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_fft_128__pch.h"

//============================================================
// Constructors

Vtb_fft_128::Vtb_fft_128(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_fft_128__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_fft_128::Vtb_fft_128(const char* _vcname__)
    : Vtb_fft_128(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_fft_128::~Vtb_fft_128() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_fft_128___024root___eval_debug_assertions(Vtb_fft_128___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_fft_128___024root___eval_static(Vtb_fft_128___024root* vlSelf);
void Vtb_fft_128___024root___eval_initial(Vtb_fft_128___024root* vlSelf);
void Vtb_fft_128___024root___eval_settle(Vtb_fft_128___024root* vlSelf);
void Vtb_fft_128___024root___eval(Vtb_fft_128___024root* vlSelf);

void Vtb_fft_128::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_fft_128::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_fft_128___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_fft_128___024root___eval_static(&(vlSymsp->TOP));
        Vtb_fft_128___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_fft_128___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_fft_128___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_fft_128::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_fft_128::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_fft_128::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_fft_128___024root___eval_final(Vtb_fft_128___024root* vlSelf);

VL_ATTR_COLD void Vtb_fft_128::final() {
    Vtb_fft_128___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_fft_128::hierName() const { return vlSymsp->name(); }
const char* Vtb_fft_128::modelName() const { return "Vtb_fft_128"; }
unsigned Vtb_fft_128::threads() const { return 1; }
void Vtb_fft_128::prepareClone() const { contextp()->prepareClone(); }
void Vtb_fft_128::atClone() const {
    contextp()->threadPoolpOnClone();
}
