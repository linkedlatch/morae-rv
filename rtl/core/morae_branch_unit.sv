module morae_branch_unit
  import morae_pkg::*;
(
  input  word_t      a,
  input  word_t      b,
  input  logic [2:0] funct3,
  output logic       taken
);

  always_comb begin
    unique case (funct3)
      3'b000:  taken = a == b;
      3'b001:  taken = a != b;
      3'b100:  taken = $signed(a) <  $signed(b);
      3'b101:  taken = $signed(a) >= $signed(b);
      3'b110:  taken = a <  b;
      3'b111:  taken = a >= b;
      default: taken = 1'b0;
    endcase
  end

endmodule
