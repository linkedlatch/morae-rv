module morae_decoder
  import morae_pkg::*;
(
  /* verilator lint_off UNUSEDSIGNAL */
  input  inst_t       inst,
  /* verilator lint_on UNUSEDSIGNAL */

  output reg_addr_t   rs1_addr,
  output reg_addr_t   rs2_addr,
  output reg_addr_t   rd_addr,
  output logic [2:0]  funct3,

  output imm_sel_t    imm_sel,
  output alu_op_t     alu_op,
  output a_sel_t      a_sel,
  output b_sel_t      b_sel,
  output logic        rd_write,
  output wb_sel_t     wb_sel,
  output logic        mem_write,
  output jump_t       jump
);

  assign rs1_addr = inst[19:15];
  assign rs2_addr = inst[24:20];
  assign rd_addr  = inst[11:7];
  assign funct3   = inst[14:12];

  function automatic alu_op_t alu_op_from_funct3(logic [2:0] f3, logic arith);
    unique case (f3)
      3'b000:  return arith ? ALU_SUB : ALU_ADD;
      3'b001:  return ALU_SLL;
      3'b010:  return ALU_SLT;
      3'b011:  return ALU_SLTU;
      3'b100:  return ALU_XOR;
      3'b101:  return arith ? ALU_SRA : ALU_SRL;
      3'b110:  return ALU_OR;
      default: return ALU_AND;
    endcase
  endfunction

  always_comb begin
    imm_sel   = IMM_I;
    alu_op    = ALU_ADD;
    a_sel     = A_RS1;
    b_sel     = B_IMM;
    rd_write  = 1'b0;
    wb_sel    = WB_ALU;
    mem_write = 1'b0;
    jump      = JUMP_NONE;

    unique case (inst[6:0])
      OPC_OP: begin
        alu_op   = alu_op_from_funct3(funct3, inst[30]);
        b_sel    = B_RS2;
        rd_write = 1'b1;
      end
      OPC_OP_IMM: begin
        alu_op   = alu_op_from_funct3(funct3, funct3 == 3'b101 && inst[30]);
        rd_write = 1'b1;
      end
      OPC_LUI: begin
        imm_sel  = IMM_U;
        a_sel    = A_ZERO;
        rd_write = 1'b1;
      end
      OPC_AUIPC: begin
        imm_sel  = IMM_U;
        a_sel    = A_PC;
        rd_write = 1'b1;
      end
      OPC_LOAD: begin
        rd_write = 1'b1;
        wb_sel   = WB_MEM;
      end
      OPC_STORE: begin
        imm_sel   = IMM_S;
        mem_write = 1'b1;
      end
      OPC_BRANCH: begin
        imm_sel = IMM_B;
        jump    = JUMP_BRANCH;
      end
      OPC_JAL: begin
        imm_sel  = IMM_J;
        rd_write = 1'b1;
        wb_sel   = WB_PC4;
        jump     = JUMP_JAL;
      end
      OPC_JALR: begin
        rd_write = 1'b1;
        wb_sel   = WB_PC4;
        jump     = JUMP_JALR;
      end
      default: ;
    endcase
  end

endmodule
