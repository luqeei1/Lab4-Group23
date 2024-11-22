// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsignExtend.h for the primary calling header

#include "verilated.h"

#include "VsignExtend___024root.h"

VL_ATTR_COLD void VsignExtend___024root___eval_initial(VsignExtend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtend___024root___eval_initial\n"); );
}

void VsignExtend___024root___combo__TOP__0(VsignExtend___024root* vlSelf);

VL_ATTR_COLD void VsignExtend___024root___eval_settle(VsignExtend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtend___024root___eval_settle\n"); );
    // Body
    VsignExtend___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VsignExtend___024root___final(VsignExtend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtend___024root___final\n"); );
}

VL_ATTR_COLD void VsignExtend___024root___ctor_var_reset(VsignExtend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtend___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->IMMSrc = VL_RAND_RESET_I(2);
    vlSelf->ImmInput = VL_RAND_RESET_I(25);
    vlSelf->ImmExt = VL_RAND_RESET_I(32);
}
