`timescale 1ns / 1ps

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
		A = 64'b11110000111100001111000011110000;
		B = 64'b11100011110001111000111100000111;
	
	end 
endmodule