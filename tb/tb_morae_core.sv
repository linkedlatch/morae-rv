module tb_morae_core;
  import morae_pkg::*;

  localparam word_t TOHOST     = 32'h1000_0000;
  localparam int    MAX_CYCLES = 100000;

  logic clk = 1'b0;
  logic rst_n;

  word_t      imem_addr, imem_rdata;
  word_t      dmem_addr, dmem_wdata, dmem_rdata;
  logic [3:0] dmem_wstrb, mem_wstrb;
  logic       is_mmio;

  always #5 clk = ~clk;

  morae_core u_core (
    .clk,
    .rst_n,
    .imem_addr,
    .imem_rdata,
    .dmem_addr,
    .dmem_wdata,
    .dmem_wstrb,
    .dmem_rdata
  );

  morae_imem u_imem (
    .addr  (imem_addr),
    .rdata (imem_rdata)
  );

  assign is_mmio   = dmem_addr[31:28] == 4'h1;
  assign mem_wstrb = is_mmio ? '0 : dmem_wstrb;

  morae_dmem u_dmem (
    .clk,
    .addr  (dmem_addr),
    .wdata (dmem_wdata),
    .wstrb (mem_wstrb),
    .rdata (dmem_rdata)
  );

  initial begin
    if ($test$plusargs("trace")) begin
      $dumpfile("build/wave.fst");
      $dumpvars(0, tb_morae_core);
    end
    rst_n = 1'b0;
    repeat (2) @(negedge clk);
    rst_n = 1'b1;
  end

  int cycles = 0;

  always @(posedge clk) begin
    if (rst_n) begin
      cycles <= cycles + 1;
      if (imem_addr[1:0] != 2'b00) $fatal(1, "misaligned pc=%08h", imem_addr);
      if (dmem_wstrb != '0 && dmem_addr == TOHOST) begin
        if (dmem_wdata == 32'd1) begin
          $display("PASS (%0d cycles)", cycles);
          $finish;
        end else begin
          $fatal(1, "FAIL: test %0d (pc=%08h)", dmem_wdata >> 1, imem_addr);
        end
      end
      if (cycles >= MAX_CYCLES) $fatal(1, "TIMEOUT after %0d cycles (pc=%08h)", cycles, imem_addr);
    end
  end

endmodule
