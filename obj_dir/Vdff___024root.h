// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdff.h for the primary calling header

#ifndef VERILATED_VDFF___024ROOT_H_
#define VERILATED_VDFF___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdff__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdff___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clk;
    CData/*0:0*/ tb__DOT__rst;
    CData/*0:0*/ tb__DOT__d;
    CData/*0:0*/ tb__DOT__q;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__rst__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vdff__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdff___024root(Vdff__Syms* symsp, const char* namep);
    ~Vdff___024root();
    VL_UNCOPYABLE(Vdff___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
