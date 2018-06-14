`timescale 1ns / 1ps
module mux_data(
    input [63:0] readdata,
    input [63:0] aluresult,
    input memtoreg,
    output reg [63:0] writedata
    );

	always @* begin
		if(memtoreg == 1) begin
			assign writedata = readdata;
		end
		else begin
			assign writedata = aluresult; 
		end
	end
endmodule
