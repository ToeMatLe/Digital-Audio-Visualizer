// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bar_mapper.h for the primary calling header

#include "Vtb_bar_mapper__pch.h"

void Vtb_bar_mapper___024root___ctor_var_reset(Vtb_bar_mapper___024root* vlSelf);

Vtb_bar_mapper___024root::Vtb_bar_mapper___024root(Vtb_bar_mapper__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_bar_mapper___024root___ctor_var_reset(this);
}

void Vtb_bar_mapper___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_bar_mapper___024root::~Vtb_bar_mapper___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
