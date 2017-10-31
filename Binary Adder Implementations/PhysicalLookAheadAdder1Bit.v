////////////////////////////////////////////////////////////////////////////////
// Company: The College of New Jersey
// Engineer: Brandon Siebert, Jason Evans
//
// Create Date:	  16:21:56 10/02/2016
// Design Name:	  Single Bit Look Ahead Adder
// Module Name:	  Look Ahead Adder Implementation
// Project Name:  Synthesizable Carry Look Ahead Adder
////////////////////////////////////////////////////////////////////////////////

module cla_adder (

	// Inpute
	input [1:0] A,
	input [1:0] B,
	input CIN,
	
	// Outputs
	output [1:0] SUM,
	output COUT
	);
	
	// Defined wires attached to gates
	wire [1:0] P;
	wire [1:0] G;
	wire [1:0] T;
	wire C;
	
	// Assigning AND, OR, and XOR Gates
	// Pattern:
	// GATE_INDENTIFIER (OUTPUT, INPUT1, INPUT2),
	and #1
		A1 (G[0], A[0], B[0]),
		A2 (G[1], A[1], B[1]),
		A3 (T[0], P[0], CIN),
		A4 (T[1], P[1], C);
	or #1
		O1 (C, G[0], T[0]),
		O2 (COUT, G[1], T[1]);
	xor #1
		X1 (P[0], A[0], B[0]),
		X2 (P[1], A[1], B[1]),
		X3 (SUM[0], P[0], CIN),
		X4 (SUM[1], P[1], C);
		
endmodule