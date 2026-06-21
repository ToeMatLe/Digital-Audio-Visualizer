// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_FFT_128__SYMS_H_
#define VERILATED_VTB_FFT_128__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_fft_128.h"

// INCLUDE MODULE CLASSES
#include "Vtb_fft_128___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_fft_128__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_fft_128* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_fft_128___024root          TOP;

    // CONSTRUCTORS
    Vtb_fft_128__Syms(VerilatedContext* contextp, const char* namep, Vtb_fft_128* modelp);
    ~Vtb_fft_128__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
