`timescale 1ns / 1ps

module full_adder
(
    input [63:0] A, input [63:0] B, //input CARRY_IN,
    output [63:0] SUM//, output CARRY_OUT
);

	assign SUM = A + B;
endmodule