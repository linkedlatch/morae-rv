// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_morae_core.h for the primary calling header

#ifndef VERILATED_VTB_MORAE_CORE___024ROOT_H_
#define VERILATED_VTB_MORAE_CORE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_morae_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_morae_core___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_morae_core__DOT__clk;
    CData/*0:0*/ tb_morae_core__DOT__rst_n;
    CData/*3:0*/ tb_morae_core__DOT__dmem_wstrb;
    CData/*3:0*/ tb_morae_core__DOT__mem_wstrb;
    CData/*4:0*/ tb_morae_core__DOT__u_core__DOT__rs1_addr;
    CData/*4:0*/ tb_morae_core__DOT__u_core__DOT__rs2_addr;
    CData/*4:0*/ tb_morae_core__DOT__u_core__DOT__rd_addr;
    CData/*2:0*/ tb_morae_core__DOT__u_core__DOT__funct3;
    CData/*2:0*/ tb_morae_core__DOT__u_core__DOT__imm_sel;
    CData/*3:0*/ tb_morae_core__DOT__u_core__DOT__alu_op;
    CData/*1:0*/ tb_morae_core__DOT__u_core__DOT__a_sel;
    CData/*0:0*/ tb_morae_core__DOT__u_core__DOT__b_sel;
    CData/*0:0*/ tb_morae_core__DOT__u_core__DOT__rd_write;
    CData/*1:0*/ tb_morae_core__DOT__u_core__DOT__wb_sel;
    CData/*0:0*/ tb_morae_core__DOT__u_core__DOT__mem_write;
    CData/*1:0*/ tb_morae_core__DOT__u_core__DOT__jump;
    CData/*3:0*/ __Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__Vfuncout;
    CData/*2:0*/ __Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__f3;
    CData/*0:0*/ __Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__0__arith;
    CData/*3:0*/ __Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__Vfuncout;
    CData/*2:0*/ __Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__f3;
    CData/*0:0*/ __Vfunc_tb_morae_core__DOT__u_core__DOT__u_decoder__DOT__alu_op_from_funct3__1__arith;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_morae_core__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_morae_core__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_morae_core__DOT__dmem_wdata;
    IData/*31:0*/ tb_morae_core__DOT__dmem_rdata;
    IData/*31:0*/ tb_morae_core__DOT__cycles;
    IData/*31:0*/ tb_morae_core__DOT__u_core__DOT__pc;
    IData/*31:0*/ tb_morae_core__DOT__u_core__DOT__pc_next;
    IData/*31:0*/ tb_morae_core__DOT__u_core__DOT__pc_target;
    IData/*31:0*/ tb_morae_core__DOT__u_core__DOT__inst;
    IData/*31:0*/ tb_morae_core__DOT__u_core__DOT__rs1_data;
    IData/*31:0*/ tb_morae_core__DOT__u_core__DOT__rs2_data;
    IData/*31:0*/ tb_morae_core__DOT__u_core__DOT__imm;
    IData/*31:0*/ tb_morae_core__DOT__u_core__DOT__alu_a;
    IData/*31:0*/ tb_morae_core__DOT__u_core__DOT__alu_b;
    IData/*31:0*/ tb_morae_core__DOT__u_core__DOT__alu_y;
    IData/*24:0*/ tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst;
    IData/*31:0*/ tb_morae_core__DOT__u_core__DOT__u_regfile__DOT____Vlvbound_hf9468087__0;
    IData/*31:0*/ tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0;
    IData/*31:0*/ tb_morae_core__DOT__u_dmem__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 31> tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs;
    VlUnpacked<IData/*31:0*/, 16384> tb_morae_core__DOT__u_imem__DOT__mem;
    VlUnpacked<IData/*31:0*/, 16384> tb_morae_core__DOT__u_dmem__DOT__mem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    std::string tb_morae_core__DOT__u_imem__DOT__unnamedblk1__DOT__prog;
    std::string tb_morae_core__DOT__u_dmem__DOT__unnamedblk1__DOT__prog;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h31ce0a72__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_morae_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_morae_core___024root(Vtb_morae_core__Syms* symsp, const char* v__name);
    ~Vtb_morae_core___024root();
    VL_UNCOPYABLE(Vtb_morae_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
