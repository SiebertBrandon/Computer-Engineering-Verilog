`timescale 1ns / 1ps
module alu_control(
    input [10:0] opcode,
    input [1:0] alu_op,
    output reg [3:0] alu_ctrl
    );

	always @* begin 
		if (alu_op == 2'b00) begin
			assign alu_ctrl = 4'b0010;
		end
		if (alu_op == 2'b01) begin
			assign alu_ctrl = 4'b0111;
		end
		if (alu_op == 2'b10) begin
			if (opcode == 11'b10001011000) begin 
				assign alu_ctrl = 4'b0010;
			end
			else if (opcode == 11'b11001011000) begin 
				assign alu_ctrl = 4'b0110;
			end
			else if (opcode == 11'b10001010000) begin 
				assign alu_ctrl = 4'b0000;
			end
			if (opcode == 11'b10101010000) begin 
				assign alu_ctrl = 4'b0001;
			end
		end
	end

endmodule
