module morae_imm_gen
  import morae_pkg::*;
(
  input  logic [31:7] inst,
  input  imm_sel_t    sel,
  output word_t       imm
);

  always_comb begin
    unique case (sel)
      IMM_I:   imm = {{20{inst[31]}}, inst[31:20]};
      IMM_S:   imm = {{20{inst[31]}}, inst[31:25], inst[11:7]};
      IMM_B:   imm = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
      IMM_U:   imm = {inst[31:12], 12'b0};
      IMM_J:   imm = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};
      default: imm = '0;
    endcase
  end

endmodule
