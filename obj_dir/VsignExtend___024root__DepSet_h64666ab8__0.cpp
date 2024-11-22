// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsignExtend.h for the primary calling header

#include "verilated.h"

#include "VsignExtend___024root.h"

VL_INLINE_OPT void VsignExtend___024root___combo__TOP__0(VsignExtend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtend___024root___combo__TOP__0\n"); );
    // Body
    if ((0U == (IData)(vlSelf->IMMSrc))) {
        vlSelf->ImmExt = (((- (IData)((1U & (vlSelf->ImmInput 
                                             >> 0x18U)))) 
                           << 0xcU) | (0xfffU & (vlSelf->ImmInput 
                                                 >> 0xdU)));
    } else if ((1U == (IData)(vlSelf->IMMSrc))) {
        vlSelf->ImmExt = (((- (IData)((1U & (vlSelf->ImmInput 
                                             >> 0x18U)))) 
                           << 0xcU) | ((0xfe0U & (vlSelf->ImmInput 
                                                  >> 0xdU)) 
                                       | (0x1fU & vlSelf->ImmInput)));
    } else if ((2U == (IData)(vlSelf->IMMSrc))) {
        vlSelf->ImmExt = (((- (IData)((1U & (vlSelf->ImmInput 
                                             >> 0x18U)))) 
                           << 0xcU) | ((0x800U & (vlSelf->ImmInput 
                                                  << 0xbU)) 
                                       | ((0x7e0U & 
                                           (vlSelf->ImmInput 
                                            >> 0xdU)) 
                                          | (0x1eU 
                                             & vlSelf->ImmInput))));
    }
}

void VsignExtend___024root___eval(VsignExtend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtend___024root___eval\n"); );
    // Body
    VsignExtend___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VsignExtend___024root___eval_debug_assertions(VsignExtend___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsignExtend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsignExtend___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->IMMSrc & 0xfcU))) {
        Verilated::overWidthError("IMMSrc");}
    if (VL_UNLIKELY((vlSelf->ImmInput & 0xfe000000U))) {
        Verilated::overWidthError("ImmInput");}
}
#endif  // VL_DEBUG
