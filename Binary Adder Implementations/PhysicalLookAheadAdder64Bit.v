`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: The College of New Jersey
// Engineer: Brandon Siebert, Jason Evans
//
// Create Date:	  18:05:22 10/02/2016
// Module Name:	  Look Ahead Adder Implementation
// Project Name:  Physical Carry Look Ahead Adder
////////////////////////////////////////////////////////////////////////////////

module lookaheadadder (

	// First 64-bit input
	input [63:0] A,
	
	// Second 64-bit input
	input [63:0] B,
	 
	// Output with add result
	output [63:0] SUM
	);
	
	// Wire used for carry bit between modules
	wire [31:0] CRRY;
	
	// Instantiation and connection of 32 adder modules chained together
	cla_adder add0 (.A(A[1:0]), .B(B[1:0]), .CIN(1'b0), .SUM(SUM[1:0]), .COUT(CRRY[0]));
	cla_adder add1 (.A(A[3:2]), .B(B[3:2]), .CIN(CRRY[0]), .SUM(SUM[3:2]), .COUT(CRRY[1]));
	cla_adder add2 (.A(A[5:4]), .B(B[5:4]), .CIN(CRRY[1]), .SUM(SUM[5:4]), .COUT(CRRY[2]));
	cla_adder add3 (.A(A[7:6]), .B(B[7:6]), .CIN(CRRY[2]), .SUM(SUM[7:6]), .COUT(CRRY[3]));
	cla_adder add4 (.A(A[9:8]), .B(B[9:8]), .CIN(CRRY[3]), .SUM(SUM[9:8]), .COUT(CRRY[4]));
	cla_adder add5 (.A(A[11:10]), .B(B[11:10]), .CIN(CRRY[4]), .SUM(SUM[11:10]), .COUT(CRRY[5]));
	cla_adder add6 (.A(A[13:12]), .B(B[13:12]), .CIN(CRRY[5]), .SUM(SUM[13:12]), .COUT(CRRY[6]));
	cla_adder add7 (.A(A[15:14]), .B(B[15:14]), .CIN(CRRY[6]), .SUM(SUM[15:14]), .COUT(CRRY[7]));
	cla_adder add8 (.A(A[17:16]), .B(B[17:16]), .CIN(CRRY[7]), .SUM(SUM[17:16]), .COUT(CRRY[8]));
	cla_adder add9 (.A(A[19:18]), .B(B[19:18]), .CIN(CRRY[8]), .SUM(SUM[19:18]), .COUT(CRRY[9]));
	cla_adder add10 (.A(A[21:20]), .B(B[21:20]), .CIN(CRRY[9]), .SUM(SUM[21:20]), .COUT(CRRY[10]));
	cla_adder add11 (.A(A[23:22]), .B(B[23:22]), .CIN(CRRY[10]), .SUM(SUM[23:22]), .COUT(CRRY[11]));
	cla_adder add12 (.A(A[25:24]), .B(B[25:24]), .CIN(CRRY[11]), .SUM(SUM[25:24]), .COUT(CRRY[12]));
	cla_adder add13 (.A(A[27:26]), .B(B[27:26]), .CIN(CRRY[12]), .SUM(SUM[27:26]), .COUT(CRRY[13]));
	cla_adder add14 (.A(A[29:28]), .B(B[29:28]), .CIN(CRRY[13]), .SUM(SUM[29:28]), .COUT(CRRY[14]));
	cla_adder add15 (.A(A[31:30]), .B(B[31:30]), .CIN(CRRY[14]), .SUM(SUM[31:30]), .COUT(CRRY[15]));
	cla_adder add16 (.A(A[33:32]), .B(B[33:32]), .CIN(CRRY[15]), .SUM(SUM[33:32]), .COUT(CRRY[16]));
	cla_adder add17 (.A(A[35:34]), .B(B[35:34]), .CIN(CRRY[16]), .SUM(SUM[35:34]), .COUT(CRRY[17]));
	cla_adder add18 (.A(A[37:36]), .B(B[37:36]), .CIN(CRRY[17]), .SUM(SUM[37:36]), .COUT(CRRY[18]));
	cla_adder add19 (.A(A[39:38]), .B(B[39:38]), .CIN(CRRY[18]), .SUM(SUM[39:38]), .COUT(CRRY[19]));
	cla_adder add20 (.A(A[41:40]), .B(B[41:40]), .CIN(CRRY[19]), .SUM(SUM[41:40]), .COUT(CRRY[20]));
	cla_adder add21 (.A(A[43:42]), .B(B[43:42]), .CIN(CRRY[20]), .SUM(SUM[43:42]), .COUT(CRRY[21]));
	cla_adder add22 (.A(A[45:44]), .B(B[45:44]), .CIN(CRRY[21]), .SUM(SUM[45:44]), .COUT(CRRY[22]));
	cla_adder add23 (.A(A[47:46]), .B(B[47:46]), .CIN(CRRY[22]), .SUM(SUM[47:46]), .COUT(CRRY[23]));
	cla_adder add24 (.A(A[49:48]), .B(B[49:48]), .CIN(CRRY[23]), .SUM(SUM[49:48]), .COUT(CRRY[24]));
	cla_adder add25 (.A(A[51:50]), .B(B[51:50]), .CIN(CRRY[24]), .SUM(SUM[51:50]), .COUT(CRRY[25]));
	cla_adder add26 (.A(A[53:52]), .B(B[53:52]), .CIN(CRRY[25]), .SUM(SUM[53:52]), .COUT(CRRY[26]));
	cla_adder add27 (.A(A[55:54]), .B(B[55:54]), .CIN(CRRY[26]), .SUM(SUM[55:54]), .COUT(CRRY[27]));
	cla_adder add28 (.A(A[57:56]), .B(B[57:56]), .CIN(CRRY[27]), .SUM(SUM[57:56]), .COUT(CRRY[28]));
	cla_adder add29 (.A(A[59:58]), .B(B[59:58]), .CIN(CRRY[28]), .SUM(SUM[59:58]), .COUT(CRRY[29]));
	cla_adder add30 (.A(A[61:60]), .B(B[61:60]), .CIN(CRRY[29]), .SUM(SUM[61:60]), .COUT(CRRY[30]));
	cla_adder add31 (.A(A[63:62]), .B(B[63:62]), .CIN(CRRY[30]), .SUM(SUM[63:62]), .COUT(CRRY[31]));

endmodule
