`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:46:49 10/31/2016 
// Design Name: 
// Module Name:    ARM_Decode 
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
module ARM_Decode(
   input [31:0] instruction,
	//
	output reg [4:0] reg1,
	output reg [4:0] reg2,
	output reg [63:0] se,
	//
	output reg ALUsrc,
	output reg Ubranch,
	output reg Branch,
	output reg MemRead,
	output reg MemWrite,
	output reg [3:0] ALUop,
	output reg RegWrite
   );

	always @(instruction) begin
		reg [31:0] tmp;
		reg1 = 0;
		reg2 = 0;
		se = 0;
		ALUsrc = 0;
		Ubranch = 0;
		Branch = 0;
		MemRead = 0;
		MemWrite = 0;
		ALUop = 0;
		RegWrite = 0;
		tmp = instruction >> 25;
		if (tmp == 3'h0A0) begin // Branch - B
			Ubranch = 1;
			ALUop = 4'b0111; // ALU function pass input b
		end
		assign tmp = instr >> 23; 
		if (tmp == 3'h2A0) begin // Branch if Zero - CB
			Branch = 1;
			ALUop = 4'b0111; // ALU function pass input b
			reg2 = instr & 2'h1F;
		end
		assign tmp = instr >> 20;
		case (tmp)
			3'h7C0: begin // STUR - D
				MemWrite = 1;
				reg1 = (instr >> 5) & 2'h1F;
				reg2 = (instr >> 15) & 2'h1F;
				MemWrite = 1;
				ALUop = 4'b0010; // ADD
				end	
			3'h7C2: begin // LDUR - D
				// set reg1 and reg
				RegWrite = 1;
				MemRead = 1;
				RegWrite = instruction & 2'h1F;
				ALUop = 4'b0010; // ADD
				end
				
S						case (tmp)
			3'h7C0: begin // STUR - D
				MemWrite = 1;
				ALUop = 4'b0010; // ADD
				// Do Sign Extend
				end	
			3'h7C2: begin // LDUR - D
				MemRead = 1;
				RegWrite = instruction & 2'h1F
				ALUop = 4'b0010; // ADD

			
			
			3'h458: begin // AND - R
				assign readReg1 = (instr >> 5) & 2'h1F;
				assign readReg2 = (instr >> 15) & 2'h1F;
				assign aluCtrl = 4'b0010;
				assign regWrite = 1;
				end
			3'h658: begin // SUB - R
				assign readReg1 = (instr >> 5) & 2'h1F;
				assign readReg2 = (instr >> 15) & 2'h1F;
				assign aluCtrl = 4'b0110;
				assign regWrite = 1;
				end
			3'h540: begin // AND - R
				assign readReg1 = (instr >> 5) & 2'h1F;
				assign readReg2 = (instr >> 15) & 2'h1F;
				assign aluCtrl = 4'b0000;
				assign regWrite = 1;
				end
			3'h550: begin // OR - R
				assign readReg1 = (instr >> 5) & 2'h1F;
				assign readReg2 = (instr >> 15) & 2'h1F;
				assign aluCtrl = 4'b0001;
				assign regWrite = 1;
				end
		endcase
	end
	//assign readReg1 = (instr >> 4) & 2'h1F;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	case(ctrl)
		3'h7C0: assign instrType = 2'b00; // STUR - D
		3'h7C2: assign instrType = 2'b00; // LDUR - D
		3'h458: assign instrType = 2'b01; // ADD - R
		3'h658: assign instrType = 2'b01; // SUB - R
		3'h540: assign instrType = 2'b01; // AND - R
		3'h550: assign instrType = 2'b01; // OR - R
	endcase
	if (ctrl > 4'h0A0 & ctrl < 4'h0BF) begin
		assign instrType = 2'b10;		 // B - B
	end
	
	if (ctrl > 4'h5A0 & ctrl < 4'h5A7) begin
		assign instrType = 2'b11;		 // CBZ - CB
	end
	
	if (instrType == 2'b00) begin
		case(ctrl)
			3'h7C0: assign aluCtrl = 4'b0010; // STUR
			3'h7C2: assign aluCtrl = 4'b0010; // LDUR
		endcase
		assign se = instr [20:12];
	end
	
	else if (instrType == 2'b01) begin
		case(ctrl)
			3'h458: assign aluCtrl = 4'b0010; // ADD
			3'h658: assign aluCtrl = 4'b0110; // SUB
			3'h540: assign aluCtrl = 4'b0000; // AND
			3'h550: assign aluCtrl = 4'b0001; // OR
		endcase
	end
	
	else if (instrType == 2'b10) begin
		assign se = instr [26:0];
	end
	
	else if (instrType == 2'b11) begin
		assign aluCtrl = 4'b0111;
		assign se = instr [23:5];
	end
	*/

endmodule
