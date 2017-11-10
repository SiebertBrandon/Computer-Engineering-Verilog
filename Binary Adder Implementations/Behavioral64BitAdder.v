`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: The College of New Jersey
// Engineer: Brandon Siebert, Jason Evans
//
// Create Date:	  18:05:22 10/02/2016
// Module Name:	  Behavioral Adder Implementation
// Project Name:  Behavioral 64-bit Adder
////////////////////////////////////////////////////////////////////////////////

module Behavioral_Adder (

	// Inputs
	input [63:0] A,
	input [63:0] B,
	
	// Output
	output [63:0] SUM
	);
	
	// Simple assign statement to replicate adder behavior
	assign SUM = A + B;
	
endmodule
