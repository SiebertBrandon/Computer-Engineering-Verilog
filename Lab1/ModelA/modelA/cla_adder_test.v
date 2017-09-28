`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:05:22 10/02/2016
// Design Name:   cla_adder
// Module Name:   H:/363-ComputerEngineeringLab1/Lab1/ModelA/modelA/cla_adder_test.v
// Project Name:  modelA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cla_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cla_adder_test;

	// Inputs
	reg [1:0] A;
	reg [1:0] B;
	reg CIN;

	// Outputs
	wire [1:0] SUM;
	wire COUT;

	// Instantiate the Unit Under Test (UUT)
	cla_adder uut (
		.A(A), 
		.B(B), 
		.CIN(CIN), 
		.SUM(SUM), 
		.COUT(COUT)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		CIN = 0;
		A = #5 1;
		B = #5 0;
		CIN = #5 0;
		A = #10 1;
		B = #10 1;
		CIN = #10 0;
		A = #15 1;
		B = #15 1;
		CIN = #15 1;
		A = #20 0;
		B = #20 1;
		CIN = #20 0;
		A = #25 0;
		B = #25 1;
		CIN = #25 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

