module adder (
	input A,
	input B,
	input CIN,
	output SUM,
	output COUT
	);
	wire T1, T2, T3, T4;
	xor #1
		X1 (T1, A, B),
		X2 (SUM, T1, CIN);
	and #1
		A1 (T2, A, B),
		A2 (T3, B, CIN),
		A3 (T4, A, CIN);
	or #1
		O1 (COUT, T2, T3, T4);
endmodule