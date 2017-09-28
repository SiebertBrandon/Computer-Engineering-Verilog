`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:14:55 10/02/2016
// Design Name:   ripplecarryadder
// Module Name:   H:/363-ComputerEngineeringLab1/Lab1/ModelA/modelA/rippleadder_test.v
// Project Name:  modelA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ripplecarryadder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module rippleadder_test;

	// Inputs
	reg [63:0] A;
	reg [63:0] B;

	// Outputs
	wire [63:0] SUM;

	// Instantiate the Unit Under Test (UUT)
	ripplecarryadder uut (
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
        
		// Add stimulus here

	end
      
endmodule

