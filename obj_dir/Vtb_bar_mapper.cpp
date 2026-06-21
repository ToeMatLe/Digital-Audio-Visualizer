// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_bar_mapper__pch.h"

//============================================================
// Constructors

Vtb_bar_mapper::Vtb_bar_mapper(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_bar_mapper__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_bar_mapper::Vtb_bar_mapper(const char* _vcname__)
    : Vtb_bar_mapper(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_bar_mapper::~Vtb_bar_mapper() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_bar_mapper___024root___eval_debug_assertions(Vtb_bar_mapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_bar_mapper___024root___eval_static(Vtb_bar_mapper___024root* vlSelf);
void Vtb_bar_mapper___024root___eval_initial(Vtb_bar_mapper___024root* vlSelf);
void Vtb_bar_mapper___024root___eval_settle(Vtb_bar_mapper___024root* vlSelf);
void Vtb_bar_mapper___024root___eval(Vtb_bar_mapper___024root* vlSelf);

void Vtb_bar_mapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_bar_mapper::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_bar_mapper___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_bar_mapper___024root___eval_static(&(vlSymsp->TOP));
        Vtb_bar_mapper___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_bar_mapper___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_bar_mapper___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_bar_mapper::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_bar_mapper::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_bar_mapper::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_bar_mapper___024root___eval_final(Vtb_bar_mapper___024root* vlSelf);

VL_ATTR_COLD void Vtb_bar_mapper::final() {
    Vtb_bar_mapper___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_bar_mapper::hierName() const { return vlSymsp->name(); }
const char* Vtb_bar_mapper::modelName() const { return "Vtb_bar_mapper"; }
unsigned Vtb_bar_mapper::threads() const { return 1; }
void Vtb_bar_mapper::prepareClone() const { contextp()->prepareClone(); }
void Vtb_bar_mapper::atClone() const {
    contextp()->threadPoolpOnClone();
}
