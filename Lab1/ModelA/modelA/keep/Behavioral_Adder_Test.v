`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// Company: The College of New Jersey
// Engineer: Brandon Siebert, Jason Evans
//
// Create Date:	  18:05:22 10/02/2016
// Design Name:	  Behavioral_Adder_Test
// Module Name:	  Behavioral Adder Testbench
// Project Name:  Behavioral 64-bit Adder
////////////////////////////////////////////////////////////////////////////////

module Behavioral_Adder_Test;
	// Inputs
	reg [63:0] A;
	reg [63:0] B;

	// Outputs
	wire [63:0] SUM;

	// Instantiate the Unit Under Test (UUT)
	Behavioral_Adder uut (
		.A(A), 
		.B(B), 
		.SUM(SUM)
	);

	initial begin
		// Initialize Inputs
		A = 64'h7FFFFFFFFFFFFFFF;
		B = 64'h7FFFFFFFFFFFFFFF;

		// Wait 100 ns for global reset to finish
		#100;
	end
endmodule

