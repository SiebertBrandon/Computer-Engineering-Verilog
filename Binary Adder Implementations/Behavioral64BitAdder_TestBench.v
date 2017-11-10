`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: The College of New Jersey
// Engineer: Brandon Siebert, Jason Evans
//
// Create Date:	  18:06:03 10/02/2016
// Module Name:	  Behavioral Adder Testbench
// Project Name:  Behavioral 64-bit Adder
////////////////////////////////////////////////////////////////////////////////

module Behavioral_Adder_Test;

	// Test module inputs
	reg [63:0] A;
	reg [63:0] B;

	// Test module outputs
	wire [63:0] SUM;

	// Instantiate our test module
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
		
		// Desired Output Behavior: 64'hFFFFFFFFFFFFFFFE
		$display("%h + %h = %h", A, B, SUM);
	  
	end
endmodule

