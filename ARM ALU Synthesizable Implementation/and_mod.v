`timescale 1ns / 1ps

module and_mod(
	input [63:0] a, input [63:0] b,
	output [63:0] anded
    );
	
	assign anded = a & b;

endmodule
