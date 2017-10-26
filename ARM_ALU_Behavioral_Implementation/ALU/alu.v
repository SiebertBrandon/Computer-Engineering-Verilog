`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:59:21 09/29/2016 
// Design Name: 
// Module Name:    alu 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module alu(
    input [63:0] a,
    input [63:0] b,
    input [3:0] s,
    output reg [63:0] z
    //output reg c_out
    );
	wire [63:0] ored, anded, subbed, sum;
	
	or_mod or1 (a,b, ored);
	and_mod and1 (a,b, anded);
	sub_mod sub1 (a,b, subbed);
	full_adder fa1 (a,b,sum);
	
	always @ (a or b or s) begin 
		if (s == 4'b0000) begin 
			assign z = anded;
		end
		if (s == 4'b0001) begin 
			assign z = ored;
		end
		if (s == 4'b0010) begin 
			assign z = sum;
		end
		if (s == 4'b0110) begin 
			assign z = subbed;
		end
		if (s == 4'b0111) begin 
			assign z = b;
		end
		if (s == 4'b1100) begin 
			assign z = ~ored;
		end		
	end
	
endmodule
