module morae_regfile
  import morae_pkg::*;
(
  input  logic      clk,

  input  reg_addr_t rs1_addr,
  input  reg_addr_t rs2_addr,
  output word_t     rs1_data,
  output word_t     rs2_data,

  input  logic      rd_write,
  input  reg_addr_t rd_addr,
  input  word_t     rd_data
);

  word_t regs [1:31];

  assign rs1_data = (rs1_addr == '0) ? '0 : regs[rs1_addr];
  assign rs2_data = (rs2_addr == '0) ? '0 : regs[rs2_addr];

  always_ff @(posedge clk) begin
    if (rd_write && rd_addr != '0) regs[rd_addr] <= rd_data;
  end

endmodule
