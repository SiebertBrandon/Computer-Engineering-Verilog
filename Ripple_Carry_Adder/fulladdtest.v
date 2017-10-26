`timescale 1ns / 1ps

/*
	Group Members: Thomas Hudson and Warren Seto

	Lab Name: Combinational Logic 
	Project Name: eng312_proj2
	Design Name: four_bit_adder_test.v
	Design Description: Verilog Test Module for Four Bit Ripple Adder
*/

module fulladdtest;

	// Inputs
	reg [63:0] A;
	reg [63:0] B;

	// Outputs
	wire [64:0] SUM;

	
	// Instantiate the Unit Under Test (UUT)
	rippleAdder uut 
	(
		.A(A), 
		.B(B), 
		.SUM(SUM)
	);

  	initial begin
	
		// Initialize Inputs
		#5;
		A = 0;
		B = 0;
		#5;
		A = 64'b101;
		B = 64'b1000;
	
	end 
endmodule