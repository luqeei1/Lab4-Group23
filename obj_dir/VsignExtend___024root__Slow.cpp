// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsignExtend.h for the primary calling header

#include "verilated.h"

#include "VsignExtend__Syms.h"
#include "VsignExtend___024root.h"

void VsignExtend___024root___ctor_var_reset(VsignExtend___024root* vlSelf);

VsignExtend___024root::VsignExtend___024root(VsignExtend__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsignExtend___024root___ctor_var_reset(this);
}

void VsignExtend___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VsignExtend___024root::~VsignExtend___024root() {
}
