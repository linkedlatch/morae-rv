// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtb_morae_core__Syms.h"


void Vtb_morae_core___024root__trace_chg_0_sub_0(Vtb_morae_core___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtb_morae_core___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root__trace_chg_0\n"); );
    // Init
    Vtb_morae_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_morae_core___024root*>(voidSelf);
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_morae_core___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_morae_core___024root__trace_chg_0_sub_0(Vtb_morae_core___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_morae_core__DOT__cycles),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[0]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[1]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[2]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[3]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[4]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[5]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[6]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[7]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[8]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[9]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[10]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[11]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[12]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[13]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[14]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[15]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[16]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[17]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[18]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[19]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[20]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[21]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[22]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[23]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[24]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[25]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[26]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[27]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[28]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[29]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_regfile__DOT__regs[30]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_morae_core__DOT__u_dmem__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+33,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_morae_core__DOT__dmem_wdata),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_morae_core__DOT__dmem_rdata),32);
        bufp->chgCData(oldp+37,(vlSelfRef.tb_morae_core__DOT__dmem_wstrb),4);
        bufp->chgCData(oldp+38,(vlSelfRef.tb_morae_core__DOT__mem_wstrb),4);
        bufp->chgBit(oldp+39,((1U == (vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y 
                                      >> 0x1cU))));
        bufp->chgIData(oldp+40,(((2U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__jump))
                                  ? vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc_target
                                  : ((3U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__jump))
                                      ? (0xfffffffeU 
                                         & vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y)
                                      : ((1U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__jump))
                                          ? (((4U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                               ? ((2U 
                                                   & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
                                                    ? 
                                                   (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data 
                                                    >= vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data)
                                                    : 
                                                   (vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data 
                                                    < vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data))
                                                   : 
                                                  ((1U 
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
        bufp->chgIData(oldp+41,(((IData)(4U) + vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc)),32);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc_target),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__inst),32);
        bufp->chgCData(oldp+44,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_addr),5);
        bufp->chgCData(oldp+45,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_addr),5);
        bufp->chgCData(oldp+46,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_addr),5);
        bufp->chgCData(oldp+47,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3),3);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm_sel),3);
        bufp->chgCData(oldp+49,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_op),4);
        bufp->chgCData(oldp+50,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__a_sel),2);
        bufp->chgBit(oldp+51,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__b_sel));
        bufp->chgBit(oldp+52,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rd_write));
        bufp->chgCData(oldp+53,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__wb_sel),2);
        bufp->chgBit(oldp+54,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__mem_write));
        bufp->chgCData(oldp+55,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__jump),2);
        bufp->chgIData(oldp+56,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs1_data),32);
        bufp->chgIData(oldp+57,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__rs2_data),32);
        bufp->chgIData(oldp+58,(((1U == (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__wb_sel))
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
                                      ? ((IData)(4U) 
                                         + vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc)
                                      : vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y))),32);
        bufp->chgIData(oldp+59,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__imm),32);
        bufp->chgIData(oldp+60,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_a),32);
        bufp->chgIData(oldp+61,(vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_b),32);
        bufp->chgIData(oldp+62,(((4U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
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
                                                & vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0)))))),32);
        bufp->chgBit(oldp+63,(((4U & (IData)(vlSelfRef.tb_morae_core__DOT__u_core__DOT__funct3))
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
        bufp->chgCData(oldp+64,((0x1fU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_b)),5);
        bufp->chgIData(oldp+65,(vlSelfRef.tb_morae_core__DOT__u_core__DOT____Vcellinp__u_imm_gen__inst),25);
        bufp->chgCData(oldp+66,((3U & vlSelfRef.tb_morae_core__DOT__u_core__DOT__alu_y)),2);
        bufp->chgSData(oldp+67,((0xffffU & vlSelfRef.tb_morae_core__DOT__u_core__DOT__u_lsu__DOT____VdfgRegularize_hafb1eba5_0_0)),16);
    }
    bufp->chgBit(oldp+68,(vlSelfRef.tb_morae_core__DOT__clk));
    bufp->chgBit(oldp+69,(vlSelfRef.tb_morae_core__DOT__rst_n));
    bufp->chgIData(oldp+70,(vlSelfRef.tb_morae_core__DOT__u_imem__DOT__mem
                            [(0x3fffU & (vlSelfRef.tb_morae_core__DOT__u_core__DOT__pc 
                                         >> 2U))]),32);
}

void Vtb_morae_core___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_morae_core___024root__trace_cleanup\n"); );
    // Init
    Vtb_morae_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_morae_core___024root*>(voidSelf);
    Vtb_morae_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
