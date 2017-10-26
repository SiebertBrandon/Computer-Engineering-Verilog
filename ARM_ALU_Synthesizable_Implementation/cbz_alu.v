`timescale 1ns / 1ps
module cbz_alu(
    input [63:0] pc,
    input [63:0] instruction,
    output [63:0] result
    );
	 assign result=pc+(instruction<<2);
endmodule
