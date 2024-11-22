// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsignExtend.h for the primary calling header

#ifndef VERILATED_VSIGNEXTEND___024ROOT_H_
#define VERILATED_VSIGNEXTEND___024ROOT_H_  // guard

#include "verilated.h"

class VsignExtend__Syms;

class VsignExtend___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(IMMSrc,1,0);
    VL_IN(ImmInput,31,7);
    VL_OUT(ImmExt,31,0);

    // INTERNAL VARIABLES
    VsignExtend__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsignExtend___024root(VsignExtend__Syms* symsp, const char* name);
    ~VsignExtend___024root();
    VL_UNCOPYABLE(VsignExtend___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
