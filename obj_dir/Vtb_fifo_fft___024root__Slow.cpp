// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fifo_fft.h for the primary calling header

#include "Vtb_fifo_fft__pch.h"

void Vtb_fifo_fft___024root___ctor_var_reset(Vtb_fifo_fft___024root* vlSelf);

Vtb_fifo_fft___024root::Vtb_fifo_fft___024root(Vtb_fifo_fft__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_fifo_fft___024root___ctor_var_reset(this);
}

void Vtb_fifo_fft___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_fifo_fft___024root::~Vtb_fifo_fft___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
