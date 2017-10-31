`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:49:02 10/02/2016 
// Design Name: 
// Module Name:    ripplecarryadder 
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
module ripplecarryadder(
   input [63:0] A,
   input [63:0] B,
   output [63:0] SUM
   );
	wire [63:0] CRRY;
	adder add0 (.A(A[0]), .B(B[0]), .CIN(1'b0), .SUM(SUM[0]), .COUT(CRRY[0]));
	adder add1 (.A(A[1]), .B(B[1]), .CIN(CRRY[0]), .SUM(SUM[1]), .COUT(CRRY[1]));
	adder add2 (.A(A[2]), .B(B[2]), .CIN(CRRY[1]), .SUM(SUM[2]), .COUT(CRRY[2]));
	adder add3 (.A(A[3]), .B(B[3]), .CIN(CRRY[2]), .SUM(SUM[3]), .COUT(CRRY[3]));
	adder add4 (.A(A[4]), .B(B[4]), .CIN(CRRY[3]), .SUM(SUM[4]), .COUT(CRRY[4]));
	adder add5 (.A(A[5]), .B(B[5]), .CIN(CRRY[4]), .SUM(SUM[5]), .COUT(CRRY[5]));
	adder add6 (.A(A[6]), .B(B[6]), .CIN(CRRY[5]), .SUM(SUM[6]), .COUT(CRRY[6]));
	adder add7 (.A(A[7]), .B(B[7]), .CIN(CRRY[6]), .SUM(SUM[7]), .COUT(CRRY[7]));
	adder add8 (.A(A[8]), .B(B[8]), .CIN(CRRY[7]), .SUM(SUM[8]), .COUT(CRRY[8]));
	adder add9 (.A(A[9]), .B(B[9]), .CIN(CRRY[8]), .SUM(SUM[9]), .COUT(CRRY[9]));
	adder add10 (.A(A[10]), .B(B[10]), .CIN(CRRY[9]), .SUM(SUM[10]), .COUT(CRRY[10]));
	adder add11 (.A(A[11]), .B(B[11]), .CIN(CRRY[10]), .SUM(SUM[11]), .COUT(CRRY[11]));
	adder add12 (.A(A[12]), .B(B[12]), .CIN(CRRY[11]), .SUM(SUM[12]), .COUT(CRRY[12]));
	adder add13 (.A(A[13]), .B(B[13]), .CIN(CRRY[12]), .SUM(SUM[13]), .COUT(CRRY[13]));
	adder add14 (.A(A[14]), .B(B[14]), .CIN(CRRY[13]), .SUM(SUM[14]), .COUT(CRRY[14]));
	adder add15 (.A(A[15]), .B(B[15]), .CIN(CRRY[14]), .SUM(SUM[15]), .COUT(CRRY[15]));
	adder add16 (.A(A[16]), .B(B[16]), .CIN(CRRY[15]), .SUM(SUM[16]), .COUT(CRRY[16]));
	adder add17 (.A(A[17]), .B(B[17]), .CIN(CRRY[16]), .SUM(SUM[17]), .COUT(CRRY[17]));
	adder add18 (.A(A[18]), .B(B[18]), .CIN(CRRY[17]), .SUM(SUM[18]), .COUT(CRRY[18]));
	adder add19 (.A(A[19]), .B(B[19]), .CIN(CRRY[18]), .SUM(SUM[19]), .COUT(CRRY[19]));
	adder add20 (.A(A[20]), .B(B[20]), .CIN(CRRY[19]), .SUM(SUM[20]), .COUT(CRRY[20]));
	adder add21 (.A(A[21]), .B(B[21]), .CIN(CRRY[20]), .SUM(SUM[21]), .COUT(CRRY[21]));
	adder add22 (.A(A[22]), .B(B[22]), .CIN(CRRY[21]), .SUM(SUM[22]), .COUT(CRRY[22]));
	adder add23 (.A(A[23]), .B(B[23]), .CIN(CRRY[22]), .SUM(SUM[23]), .COUT(CRRY[23]));
	adder add24 (.A(A[24]), .B(B[24]), .CIN(CRRY[23]), .SUM(SUM[24]), .COUT(CRRY[24]));
	adder add25 (.A(A[25]), .B(B[25]), .CIN(CRRY[24]), .SUM(SUM[25]), .COUT(CRRY[25]));
	adder add26 (.A(A[26]), .B(B[26]), .CIN(CRRY[25]), .SUM(SUM[26]), .COUT(CRRY[26]));
	adder add27 (.A(A[27]), .B(B[27]), .CIN(CRRY[26]), .SUM(SUM[27]), .COUT(CRRY[27]));
	adder add28 (.A(A[28]), .B(B[28]), .CIN(CRRY[27]), .SUM(SUM[28]), .COUT(CRRY[28]));
	adder add29 (.A(A[29]), .B(B[29]), .CIN(CRRY[28]), .SUM(SUM[29]), .COUT(CRRY[29]));
	adder add30 (.A(A[30]), .B(B[30]), .CIN(CRRY[29]), .SUM(SUM[30]), .COUT(CRRY[30]));
	adder add31 (.A(A[31]), .B(B[31]), .CIN(CRRY[30]), .SUM(SUM[31]), .COUT(CRRY[31]));
	adder add32 (.A(A[32]), .B(B[32]), .CIN(CRRY[31]), .SUM(SUM[32]), .COUT(CRRY[32]));
	adder add33 (.A(A[33]), .B(B[33]), .CIN(CRRY[32]), .SUM(SUM[33]), .COUT(CRRY[33]));
	adder add34 (.A(A[34]), .B(B[34]), .CIN(CRRY[33]), .SUM(SUM[34]), .COUT(CRRY[34]));
	adder add35 (.A(A[35]), .B(B[35]), .CIN(CRRY[34]), .SUM(SUM[35]), .COUT(CRRY[35]));
	adder add36 (.A(A[36]), .B(B[36]), .CIN(CRRY[35]), .SUM(SUM[36]), .COUT(CRRY[36]));
	adder add37 (.A(A[37]), .B(B[37]), .CIN(CRRY[36]), .SUM(SUM[37]), .COUT(CRRY[37]));
	adder add38 (.A(A[38]), .B(B[38]), .CIN(CRRY[37]), .SUM(SUM[38]), .COUT(CRRY[38]));
	adder add39 (.A(A[39]), .B(B[39]), .CIN(CRRY[38]), .SUM(SUM[39]), .COUT(CRRY[39]));
	adder add40 (.A(A[40]), .B(B[40]), .CIN(CRRY[39]), .SUM(SUM[40]), .COUT(CRRY[40]));
	adder add41 (.A(A[41]), .B(B[41]), .CIN(CRRY[40]), .SUM(SUM[41]), .COUT(CRRY[41]));
	adder add42 (.A(A[42]), .B(B[42]), .CIN(CRRY[41]), .SUM(SUM[42]), .COUT(CRRY[42]));
	adder add43 (.A(A[43]), .B(B[43]), .CIN(CRRY[42]), .SUM(SUM[43]), .COUT(CRRY[43]));
	adder add44 (.A(A[44]), .B(B[44]), .CIN(CRRY[43]), .SUM(SUM[44]), .COUT(CRRY[44]));
	adder add45 (.A(A[45]), .B(B[45]), .CIN(CRRY[44]), .SUM(SUM[45]), .COUT(CRRY[45]));
	adder add46 (.A(A[46]), .B(B[46]), .CIN(CRRY[45]), .SUM(SUM[46]), .COUT(CRRY[46]));
	adder add47 (.A(A[47]), .B(B[47]), .CIN(CRRY[46]), .SUM(SUM[47]), .COUT(CRRY[47]));
	adder add48 (.A(A[48]), .B(B[48]), .CIN(CRRY[47]), .SUM(SUM[48]), .COUT(CRRY[48]));
	adder add49 (.A(A[49]), .B(B[49]), .CIN(CRRY[48]), .SUM(SUM[49]), .COUT(CRRY[49]));
	adder add50 (.A(A[50]), .B(B[50]), .CIN(CRRY[49]), .SUM(SUM[50]), .COUT(CRRY[50]));
	adder add51 (.A(A[51]), .B(B[51]), .CIN(CRRY[50]), .SUM(SUM[51]), .COUT(CRRY[51]));
	adder add52 (.A(A[52]), .B(B[52]), .CIN(CRRY[51]), .SUM(SUM[52]), .COUT(CRRY[52]));
	adder add53 (.A(A[53]), .B(B[53]), .CIN(CRRY[52]), .SUM(SUM[53]), .COUT(CRRY[53]));
	adder add54 (.A(A[54]), .B(B[54]), .CIN(CRRY[53]), .SUM(SUM[54]), .COUT(CRRY[54]));
	adder add55 (.A(A[55]), .B(B[55]), .CIN(CRRY[54]), .SUM(SUM[55]), .COUT(CRRY[55]));
	adder add56 (.A(A[56]), .B(B[56]), .CIN(CRRY[55]), .SUM(SUM[56]), .COUT(CRRY[56]));
	adder add57 (.A(A[57]), .B(B[57]), .CIN(CRRY[56]), .SUM(SUM[57]), .COUT(CRRY[57]));
	adder add58 (.A(A[58]), .B(B[58]), .CIN(CRRY[57]), .SUM(SUM[58]), .COUT(CRRY[58]));
	adder add59 (.A(A[59]), .B(B[59]), .CIN(CRRY[58]), .SUM(SUM[59]), .COUT(CRRY[59]));
	adder add60 (.A(A[60]), .B(B[60]), .CIN(CRRY[59]), .SUM(SUM[60]), .COUT(CRRY[60]));
	adder add61 (.A(A[61]), .B(B[61]), .CIN(CRRY[60]), .SUM(SUM[61]), .COUT(CRRY[61]));
	adder add62 (.A(A[62]), .B(B[62]), .CIN(CRRY[61]), .SUM(SUM[62]), .COUT(CRRY[62]));
	adder add63 (.A(A[63]), .B(B[63]), .CIN(CRRY[62]), .SUM(SUM[63]), .COUT(CRRY[63]));
	
endmodule
