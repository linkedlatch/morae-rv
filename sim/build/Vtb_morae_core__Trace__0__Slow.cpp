// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_morae_core__Syms.h"


VL_ATTR_COLD void Vtb_morae_core___024root__trace_init_sub__TOP__morae_pkg__0(Vtb_morae_core___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_morae_core___024root__trace_init_sub__TOP__0(Vtb_morae_core___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("morae_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_morae_core___024root__trace_init_sub__TOP__morae_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_morae_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+72,0,"TOHOST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"MAX_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"imem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"imem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"dmem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"dmem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"dmem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"dmem_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+39,0,"mem_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+40,0,"is_mmio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("u_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"RESET_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"imem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"imem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"dmem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"dmem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"dmem_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"dmem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"pc_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+49,0,"imm_sel",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"alu_op",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"a_sel",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+52,0,"b_sel",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"rd_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"wb_sel",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+55,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"jump",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+57,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"alu_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"alu_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"load_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+64,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+61,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"op",2, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"SHAMT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+65,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_branch_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+57,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+64,0,"taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+47,0,"rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"funct3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+49,0,"imm_sel",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"alu_op",2, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"a_sel",3, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+52,0,"b_sel",4, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"rd_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"wb_sel",5, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+55,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"jump",6, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_imm_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+66,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,7);
    tracep->declBus(c+49,0,"sel",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+60,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_lsu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+55,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"store_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"load_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"dmem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"dmem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"dmem_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"dmem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+68,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+57,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"rd_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+59,0,"rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+2+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+1), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_dmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+76,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+69,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+76,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+34,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_morae_core___024root__trace_init_sub__TOP__morae_pkg__0(Vtb_morae_core___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root__trace_init_sub__TOP__morae_pkg__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+78,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_morae_core___024root__trace_init_top(Vtb_morae_core___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_morae_core___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_morae_core___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtb_morae_core___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_morae_core___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtb_morae_core___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtb_morae_core___024root__trace_register(Vtb_morae_core___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_morae_core___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_morae_core___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_morae_core___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_morae_core___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_morae_core___024root__trace_const_0_sub_0(Vtb_morae_core___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_morae_core___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root__trace_const_0\n"); );
    // Init
    Vtb_morae_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_morae_core___024root*>(voidSelf);
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_morae_core___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_morae_core___024root__trace_const_0_sub_0(Vtb_morae_core___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+72,(0x10000000U),32);
    bufp->fullIData(oldp+73,(0x186a0U),32);
    bufp->fullIData(oldp+74,(0U),32);
    bufp->fullIData(oldp+75,(5U),32);
    bufp->fullIData(oldp+76,(0x4000U),32);
    bufp->fullIData(oldp+77,(0xeU),32);
    bufp->fullIData(oldp+78,(0x20U),32);
}

VL_ATTR_COLD void Vtb_morae_core___024root__trace_full_0_sub_0(Vtb_morae_core___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtb_morae_core___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root__trace_full_0\n"); );
    // Init
    Vtb_morae_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_morae_core___024root*>(voidSelf);
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_morae_core___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_morae_core___024root__trace_full_0_sub_0(Vtb_morae_core___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.tb_morae_core__DOT__cycles),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+34,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc),32);
    bufp->fullIData(oldp+35,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y),32);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_morae_core__DOT__dmem_wdata),32);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_morae_core__DOT__dmem_rdata),32);
    bufp->fullCData(oldp+38,(vlSelfRef.tb_morae_core__DOT__dmem_wstrb),4);
    bufp->fullCData(oldp+39,(vlSelfRef.tb_morae_core__DOT__mem_wstrb),4);
    bufp->fullBit(oldp+40,((1U == (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y 
                                   >> 0x1cU))));
    bufp->fullIData(oldp+41,(((2U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__jump))
                               ? vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc_target
                               : ((3U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__jump))
                                   ? (0xfffffffeU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y)
                                   : ((1U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__jump))
                                       ? (((4U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                                    ? 
                                                   (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data 
                                                    >= vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data)
                                                    : 
                                                   (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data 
                                                    < vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                                    ? 
                                                   VL_GTES_III(32, vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data, vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data)
                                                    : 
                                                   VL_LTS_III(32, vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data, vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data)))
                                            : ((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3) 
                                                    >> 1U))) 
                                               && ((1U 
                                                    & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                                    ? 
                                                   (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data 
                                                    != vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data)
                                                    : 
                                                   (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data 
                                                    == vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data))))
                                           ? vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc_target
                                           : ((IData)(4U) 
                                              + vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc))
                                       : ((IData)(4U) 
                                          + vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc))))),32);
    bufp->fullIData(oldp+42,(((IData)(4U) + vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc)),32);
    bufp->fullIData(oldp+43,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc_target),32);
    bufp->fullIData(oldp+44,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst),32);
    bufp->fullCData(oldp+45,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_addr),5);
    bufp->fullCData(oldp+46,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_addr),5);
    bufp->fullCData(oldp+47,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_addr),5);
    bufp->fullCData(oldp+48,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3),3);
    bufp->fullCData(oldp+49,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm_sel),3);
    bufp->fullCData(oldp+50,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op),4);
    bufp->fullCData(oldp+51,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__a_sel),2);
    bufp->fullBit(oldp+52,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__b_sel));
    bufp->fullBit(oldp+53,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_write));
    bufp->fullCData(oldp+54,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__wb_sel),2);
    bufp->fullBit(oldp+55,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__mem_write));
    bufp->fullCData(oldp+56,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__jump),2);
    bufp->fullIData(oldp+57,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data),32);
    bufp->fullIData(oldp+58,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data),32);
    bufp->fullIData(oldp+59,(((1U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__wb_sel))
                               ? ((4U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                   ? ((2U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                       ? vlSelfRef.tb_morae_core__DOT__dmem_rdata
                                       : ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                           ? (0xffffU 
                                              & vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0)
                                           : (0xffU 
                                              & vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0)))
                                   : ((2U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                       ? vlSelfRef.tb_morae_core__DOT__dmem_rdata
                                       : ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0)))))
                               : ((2U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__wb_sel))
                                   ? ((IData)(4U) + vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc)
                                   : vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y))),32);
    bufp->fullIData(oldp+60,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm),32);
    bufp->fullIData(oldp+61,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_a),32);
    bufp->fullIData(oldp+62,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_b),32);
    bufp->fullIData(oldp+63,(((4U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                               ? ((2U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                   ? vlSelfRef.tb_morae_core__DOT__dmem_rdata
                                   : ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                       ? (0xffffU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0)
                                       : (0xffU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0)))
                               : ((2U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                   ? vlSelfRef.tb_morae_core__DOT__dmem_rdata
                                   : ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0))
                                       : (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0)))))),32);
    bufp->fullBit(oldp+64,(((4U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                             ? ((2U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                 ? ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                     ? (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data 
                                        >= vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data)
                                     : (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data 
                                        < vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data))
                                 : ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                     ? VL_GTES_III(32, vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data, vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data)
                                     : VL_LTS_III(32, vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data, vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data)))
                             : ((1U & (~ ((IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3) 
                                          >> 1U))) 
                                && ((1U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                     ? (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data 
                                        != vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data)
                                     : (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data 
                                        == vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data))))));
    bufp->fullCData(oldp+65,((0x1fU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_b)),5);
    bufp->fullIData(oldp+66,(vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst),25);
    bufp->fullCData(oldp+67,((3U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y)),2);
    bufp->fullSData(oldp+68,((0xffffU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0)),16);
    bufp->fullBit(oldp+69,(vlSelfRef.tb_morae_core__DOT__clk));
    bufp->fullBit(oldp+70,(vlSelfRef.tb_morae_core__DOT__rst_n));
    bufp->fullIData(oldp+71,(vlSelfRef.tb_morae_core__DOT__u_imem__DOT__mem
                             [(0x3fffU & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc 
                                          >> 2U))]),32);
}
