// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_PINGPONG_BUFFER__SYMS_H_
#define VERILATED_VTB_PINGPONG_BUFFER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_pingpong_buffer.h"

// INCLUDE MODULE CLASSES
#include "Vtb_pingpong_buffer___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_pingpong_buffer__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_pingpong_buffer* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_pingpong_buffer___024root  TOP;

    // CONSTRUCTORS
    Vtb_pingpong_buffer__Syms(VerilatedContext* contextp, const char* namep, Vtb_pingpong_buffer* modelp);
    ~Vtb_pingpong_buffer__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
