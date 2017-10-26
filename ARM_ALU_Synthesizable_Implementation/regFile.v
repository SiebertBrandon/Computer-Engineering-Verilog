`timescale 1ns / 1ps

module regFile(
    input initialmem,
	 input [4:0] readreg1,
    input [4:0] readreg2,
    input [4:0] writereg,
    input [63:0] writedata,
    input reg_write,
	 input clk, 
	 input reset,
    output reg [63:0] readdata1,
    output reg [63:0] readdata2
    );
	integer i;
	reg[63:0] mem[31:0];
	
	always @* begin
		if (initialmem == 1) begin //initialize memory when meminit is enabled
			for (i=0; i<32; i=i+1) begin
			    mem[i]=i;
			end
		end
			
	end
	
	
	always @ (posedge clk) begin
		if (reg_write == 1) begin
			mem[writereg] = writedata;
		end
		
		readdata1 <= mem[readreg1];
		readdata2 <= mem[readreg2];
			
	end

endmodule
