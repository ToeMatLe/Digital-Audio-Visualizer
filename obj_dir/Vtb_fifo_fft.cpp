// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_fifo_fft__pch.h"

//============================================================
// Constructors

Vtb_fifo_fft::Vtb_fifo_fft(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_fifo_fft__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_fifo_fft::Vtb_fifo_fft(const char* _vcname__)
    : Vtb_fifo_fft(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_fifo_fft::~Vtb_fifo_fft() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_fifo_fft___024root___eval_debug_assertions(Vtb_fifo_fft___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_fifo_fft___024root___eval_static(Vtb_fifo_fft___024root* vlSelf);
void Vtb_fifo_fft___024root___eval_initial(Vtb_fifo_fft___024root* vlSelf);
void Vtb_fifo_fft___024root___eval_settle(Vtb_fifo_fft___024root* vlSelf);
void Vtb_fifo_fft___024root___eval(Vtb_fifo_fft___024root* vlSelf);

void Vtb_fifo_fft::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_fifo_fft::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_fifo_fft___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_fifo_fft___024root___eval_static(&(vlSymsp->TOP));
        Vtb_fifo_fft___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_fifo_fft___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_fifo_fft___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_fifo_fft::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_fifo_fft::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_fifo_fft::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_fifo_fft___024root___eval_final(Vtb_fifo_fft___024root* vlSelf);

VL_ATTR_COLD void Vtb_fifo_fft::final() {
    Vtb_fifo_fft___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_fifo_fft::hierName() const { return vlSymsp->name(); }
const char* Vtb_fifo_fft::modelName() const { return "Vtb_fifo_fft"; }
unsigned Vtb_fifo_fft::threads() const { return 1; }
void Vtb_fifo_fft::prepareClone() const { contextp()->prepareClone(); }
void Vtb_fifo_fft::atClone() const {
    contextp()->threadPoolpOnClone();
}
