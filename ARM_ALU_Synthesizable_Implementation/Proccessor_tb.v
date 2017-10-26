`timescale 1ns / 1ps
module Proccessor_tb;
	// Inputs
	reg [63:0] instruction;
	reg clock;
	reg [63:0] programcounter;
	reg meminit;
	reg [10:0] instr_31_21;
	reg [4:0] instr_20_16, instr_9_5, instr_4_0;

	// Outputs
	wire [63:0] writedata;
	wire [63:0] nextpc;

	// Instantiate the Unit Under Test (UUT)
	CPU uut (
		.meminit(meminit),
		.instruction(instruction),
		.instr_31_21(instr_31_21),
		.instr_20_16(instr_20_16),
		.instr_9_5(instr_9_5),
		.instr_4_0(instr_4_0),
		.clock(clock), 
		.programcounter(programcounter), 
		.nextpc(nextpc),
		.writedata(writedata)
	);
	initial begin
		// Initialize Inputs
		meminit = 1; 
		#100;
		instruction = 64'b0; 
		programcounter = 64'b0;
		clock=0;
		meminit = 0;
		#100;
	end
		always begin
			clock = ~clock;
			#100;
		end	
		always @(posedge clock) begin
		instruction = 64'b1111111111111111111111111111111110001011000100001000010010010011;//add
		instr_31_21 = 11'b10001011000;
		instr_20_16 = 5'b10000;
		instr_9_5 = 5'b00100;
		instr_4_0 = 5'b10011;
	 end
endmodule 