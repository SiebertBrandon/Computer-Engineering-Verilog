<<<<<<< HEAD:elc363/Lab 2/lab2c/adder.v
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:28:29 09/27/2016 
// Design Name: 
// Module Name:    adder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module adder(
    input [63:0] A,
    input [63:0] B,
    output [63:0] SUM
    );

	assign SUM = A + B;
endmodule
=======
module full_adder
(
    input A, input B, input CARRY_IN,
    output SUM, output CARRY
);

	// This uses two exclusive OR (XOR) gates to SUM three inputs 
	assign SUM = (A ^ B) ^ CARRY_IN;

	// This uses three OR gates to detect a CARRY_OUT from three inputs
	assign CARRY = (A & ~B & CARRY_IN) | (~A & B & CARRY_IN) | (A & B);

endmodule
>>>>>>> master:elc363/Lab 2/full_adder.v
