`timescale 1ns / 1ps

module or_mod(
	input [63:0] a, input [63:0] b,
	output [63:0] ored
    );
	
	assign ored = a | b;
endmodule
