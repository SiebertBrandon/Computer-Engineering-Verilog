`timescale 1ns / 1ps
module mux_alu(
    input [63:0] readdata2,
    input [63:0] instruction,
    input alusrc,
    output reg [63:0] result
    );
		
	always @* begin
		if (alusrc == 0) begin 
			assign result = readdata2;
		end
		else begin 
			assign result = instruction;
		end
	end
	
endmodule
