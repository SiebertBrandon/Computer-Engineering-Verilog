`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:42:52 10/02/2016 
// Design Name: 
// Module Name:    Behavioral_Adder 
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
module Behavioral_Adder(
   input [63:0] A,
   input [63:0] B,
   output [63:0] SUM
	);
	assign SUM = A + B;
endmodule
