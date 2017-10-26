`timescale 1ns / 1ps
module data_mem(
    input [63:0] address,
    input [63:0] writedata,
    input memwrite,
    input memread,
    output reg [63:0] readdata
    );

	always @* begin 
		if (memwrite == 1) begin
			assign readdata = writedata;
		end
		if (memread == 1) begin
			assign readdata = address;
		end
	end
endmodule
