`timescale 1ns / 1ps

module sub_mod(
	input [63:0] a, input [63:0] b,
	output [63:0] subbed
    );
	
	
	assign subbed = a - b;

endmodule
