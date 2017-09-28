`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:05:09 10/02/2016
// Design Name:   adder
// Module Name:   H:/363-ComputerEngineeringLab1/Lab1/ModelA/modelA/adder_test.v
// Project Name:  modelA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module adder_test;

	// Inputs
	reg A;
	reg B;
	reg CIN;

	// Outputs
	wire SUM;
	wire COUT;

	// Instantiate the Unit Under Test (UUT)
	adder uut (
		.A(A), 
		.B(B), 
		.CIN(CIN), 
		.SUM(SUM), 
		.COUT(COUT)
	);

	initial begin
		// Initialize Inputs
		A = 64'h7FFFFFFFFFFFFFFF;
		B = 64'h7FFFFFFFFFFFFFFF;
		CIN = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

