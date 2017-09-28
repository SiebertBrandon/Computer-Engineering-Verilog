`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:38:05 10/02/2016
// Design Name:   lookaheadadder
// Module Name:   H:/363-ComputerEngineeringLab1/Lab1/ModelA/modelA/lookaheadadder_test.v
// Project Name:  modelA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lookaheadadder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lookaheadadder_test;

	// Inputs
	reg [63:0] A;
	reg [63:0] B;
	reg [63:0] SUM;

	// Instantiate the Unit Under Test (UUT)
	lookaheadadder uut (
		.A(A), 
		.B(B), 
		.SUM(SUM)
	);

	initial begin
		// Initialize Inputs
		A = 1;
		B = 2;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

