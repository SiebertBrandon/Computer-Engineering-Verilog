`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:42:08 10/31/2016 
// Design Name: 
// Module Name:    ARM_Execute 
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
module ARM_Execute(
	input [32:0] curInstructionAddr,
   input ALUsrc,
	input mem2Reg,
	input regWrite,
	input memRead,
	input unconBranch,
	input branch,
   input clk,
   input [63:0] operand1,
	input [63:0] operand2,
   input [3:0] aluCtrl,
	output reg [63:0] result,
	output reg [63:0] destAddr
   );
	reg Z;
	reg [63:0] add4 = 4;
	
	ALU ALU_instance_1 (reg1contents, reg2contents, aluCtrl, Z, result);
	ALU ALU_instance_2 (.A(curInstructionAddr), .B(add4), .ALUc(0'b0010), .C(result));
	//
	

endmodule
