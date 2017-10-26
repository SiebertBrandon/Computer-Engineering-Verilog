`timescale 1ns / 1ps
module alu(
    input [63:0] a,
    input [63:0] b,
    input [3:0] aluCtrl,
    output reg [63:0] z,
	 output reg zero
    );
	wire [63:0] ored, anded, subbed, sum;
	
	or_mod or1 (a,b, ored);
	and_mod and1 (a,b, anded);
	sub_mod sub1 (a,b, subbed);
	full_adder fa1 (a,b,sum);
	
	always @ (a or b or aluCtrl) begin 
		if (aluCtrl == 4'b0000) begin 
			assign z = anded;
		end
		if (aluCtrl == 4'b0001) begin 
			assign z = ored;
		end
		if (aluCtrl == 4'b0010) begin 
			assign z = sum;
		end
		if (aluCtrl == 4'b0110) begin 
			assign z = subbed;
		end
		if (aluCtrl == 4'b0111) begin 
			assign z = b;
		end
		if (aluCtrl == 4'b0111) begin 
			assign z = b;
		end
		
		if (z == 0) begin
			assign zero = 1;
		end
	
	end
	
endmodule
