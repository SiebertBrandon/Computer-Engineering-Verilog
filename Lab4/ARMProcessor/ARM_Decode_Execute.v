`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:30:48 10/24/2016 
// Design Name: 
// Module Name:    ARM_Decode_Execute 
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
module ARM_Decode_Execute(
   input [31:0] instr,
	input wire clk,
   output reg [10:0] ctrl,
   output reg [5:0] reg1,
   output reg [5:0] reg2,
   output reg [63:0] se,
	output reg [3:0] aluCtrl
   );
	reg [1:0] instrType;
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
	
	if (ctrl > 4'h0A0 & ctrl < 4'h0BF) begin
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
	

endmodule
