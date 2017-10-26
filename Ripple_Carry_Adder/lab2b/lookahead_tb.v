`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:56:24 09/27/2016
// Design Name:   lookahead64
// Module Name:   H:/lab2b/lookahead_tb.v
// Project Name:  lab2b
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lookahead64
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lookahead_tb;

	// Inputs
	reg [63:0] a;
	reg [63:0] b;
	
	//outputs
	wire [63:0] sum;

	// Instantiate the Unit Under Test (UUT)
	lookahead64 uut (
		.a(a), 
		.b(b), 
		.sum(sum)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		a = 64'b11010001010111110111111;
		b = 64'b00101111100100100100110;
	end
      
endmodule

