module morae_core
  import morae_pkg::*;
#(
  parameter word_t RESET_PC = '0
) (
  input  logic       clk,
  input  logic       rst_n,

  output word_t      imem_addr,
  input  inst_t      imem_rdata,

  output word_t      dmem_addr,
  output word_t      dmem_wdata,
  output logic [3:0] dmem_wstrb,
  input  word_t      dmem_rdata
);

  word_t pc, pc_next, pc_plus4, pc_target;
  inst_t inst;

  reg_addr_t  rs1_addr, rs2_addr, rd_addr;
  logic [2:0] funct3;
  imm_sel_t   imm_sel;
  alu_op_t    alu_op;
  a_sel_t     a_sel;
  b_sel_t     b_sel;
  logic       rd_write;
  wb_sel_t    wb_sel;
  logic       mem_write;
  jump_t      jump;

  word_t rs1_data, rs2_data, rd_data;
  word_t imm;
  word_t alu_a, alu_b, alu_y;
  word_t load_data;
  logic  branch_taken;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) pc <= RESET_PC;
    else        pc <= pc_next;
  end

  assign imem_addr = pc;
  assign inst      = imem_rdata;
  assign pc_plus4  = pc + 4;

  morae_decoder u_decoder (
    .inst,
    .rs1_addr,
    .rs2_addr,
    .rd_addr,
    .funct3,
    .imm_sel,
    .alu_op,
    .a_sel,
    .b_sel,
    .rd_write,
    .wb_sel,
    .mem_write,
    .jump
  );

  morae_imm_gen u_imm_gen (
    .inst (inst[31:7]),
    .sel  (imm_sel),
    .imm
  );

  morae_regfile u_regfile (
    .clk,
    .rs1_addr,
    .rs2_addr,
    .rs1_data,
    .rs2_data,
    .rd_write,
    .rd_addr,
    .rd_data
  );

  always_comb begin
    unique case (a_sel)
      A_PC:    alu_a = pc;
      A_ZERO:  alu_a = '0;
      default: alu_a = rs1_data;
    endcase
  end

  assign alu_b = (b_sel == B_IMM) ? imm : rs2_data;

  morae_alu u_alu (
    .a  (alu_a),
    .b  (alu_b),
    .op (alu_op),
    .y  (alu_y)
  );

  morae_branch_unit u_branch_unit (
    .a      (rs1_data),
    .b      (rs2_data),
    .funct3,
    .taken  (branch_taken)
  );

  assign pc_target = pc + imm;

  always_comb begin
    unique case (jump)
      JUMP_JAL:    pc_next = pc_target;
      JUMP_JALR:   pc_next = {alu_y[XLEN-1:1], 1'b0};
      JUMP_BRANCH: pc_next = branch_taken ? pc_target : pc_plus4;
      default:     pc_next = pc_plus4;
    endcase
  end

  morae_lsu u_lsu (
    .addr       (alu_y),
    .funct3,
    .mem_write,
    .store_data (rs2_data),
    .load_data,
    .dmem_addr,
    .dmem_wdata,
    .dmem_wstrb,
    .dmem_rdata
  );

  always_comb begin
    unique case (wb_sel)
      WB_MEM:  rd_data = load_data;
      WB_PC4:  rd_data = pc_plus4;
      default: rd_data = alu_y;
    endcase
  end

endmodule
