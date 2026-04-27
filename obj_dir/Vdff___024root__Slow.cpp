// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdff.h for the primary calling header

#include "Vdff__pch.h"

void Vdff___024root___ctor_var_reset(Vdff___024root* vlSelf);

Vdff___024root::Vdff___024root(Vdff__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vdff___024root___ctor_var_reset(this);
}

void Vdff___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdff___024root::~Vdff___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
