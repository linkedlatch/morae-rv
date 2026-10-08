module morae_lsu
  import morae_pkg::*;
(
  input  word_t      addr,
  input  logic [2:0] funct3,
  input  logic       mem_write,
  input  word_t      store_data,
  output word_t      load_data,

  output word_t      dmem_addr,
  output word_t      dmem_wdata,
  output logic [3:0] dmem_wstrb,
  input  word_t      dmem_rdata
);

  logic [1:0]  offset;
  logic [15:0] shifted;

  assign offset    = addr[1:0];
  assign dmem_addr = addr;

  always_comb begin
    unique case (funct3[1:0])
      2'b00: begin
        dmem_wdata = {4{store_data[7:0]}};
        dmem_wstrb = 4'b0001 << offset;
      end
      2'b01: begin
        dmem_wdata = {2{store_data[15:0]}};
        dmem_wstrb = 4'b0011 << offset;
      end
      default: begin
        dmem_wdata = store_data;
        dmem_wstrb = 4'b1111;
      end
    endcase
    if (!mem_write) dmem_wstrb = '0;
  end

  assign shifted = 16'(dmem_rdata >> {offset, 3'b000});

  always_comb begin
    unique case (funct3)
      3'b000:  load_data = {{24{shifted[7]}},  shifted[7:0]};
      3'b001:  load_data = {{16{shifted[15]}}, shifted[15:0]};
      3'b100:  load_data = {24'b0, shifted[7:0]};
      3'b101:  load_data = {16'b0, shifted[15:0]};
      default: load_data = dmem_rdata;
    endcase
  end

endmodule
