`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: The College of New Jersey
// Engineer: Brandon Siebert, Jason Evans
//
// Create Date:	  18:06:31 10/02/2016
// Module Name:	  Look Ahead Adder Test Bench
// Project Name:  Physical Carry Look Ahead Adder
////////////////////////////////////////////////////////////////////////////////

module ripple_carry_testbench;

	// Test module inputs
	reg [63:0] A;
	reg [63:0] B;

	// Test module outputs
	wire [63:0] SUM;

	// Instantiate our test module
	lookaheadadder uut (
		.A(A), 
		.B(B), 
		.SUM(SUM)
	);

	initial begin
	
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		A = 64'h7FFFFFFFFFFFFFFF;
		B = 64'h7FFFFFFFFFFFFFFF;
		
		// Desired Output Behavior: 64'hFFFFFFFFFFFFFFFF
		
	end
      
endmodule

