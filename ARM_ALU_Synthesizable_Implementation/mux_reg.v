`timescale 1ns / 1ps

module mux_reg(
    input reg2loc,
    input [4:0] R_instr,
    input [4:0] other_instr,
    output reg [4:0] readreg2
    );

	always @* begin
		if(reg2loc == 1) begin
			assign readreg2 = other_instr;
		end
		else begin
			assign readreg2 = R_instr;
		end
	end
endmodule
