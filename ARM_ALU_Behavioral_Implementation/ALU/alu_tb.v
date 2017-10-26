`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:58:02 10/06/2016
// Design Name:   alu
// Module Name:   H:/engineering/elc363/Lab 3/ALU/alu_tb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_tb;

	// Inputs
	reg [63:0] a;
	reg [63:0] b;
	reg [3:0] s;

	// Outputs
	wire [63:0] z;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.a(a), 
		.b(b), 
		.s(s), 
		.z(z)
		
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		s = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		//TEST
		a=64'b0;
		b=64'b1;
		s=4'b1100;
	
		
	end
      
endmodule

