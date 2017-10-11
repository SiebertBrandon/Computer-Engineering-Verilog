`timescale 1ns / 1ps
module mux_pc(
    input [63:0] pc,
    input [63:0] aluresult_in,
    input cbz,
    output reg [63:0] pc_out
    );

	always @* begin 
		
		if(cbz==1) begin 
			assign pc_out = aluresult_in;
		end
		if(cbz==0) begin
			assign pc_out = (pc+6'b100000);
		end
	end
endmodule
