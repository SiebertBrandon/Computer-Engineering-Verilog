`timescale 1ns / 1ps

module CPU(
	 input meminit,
	 input [63:0] instruction,
    input [10:0] instr_31_21,
	 input [4:0] instr_20_16,
	 input [4:0] instr_9_5,
	 input [4:0] instr_4_0,
	 input clock,
	 input [63:0] programcounter,
	 output [63:0] nextpc,
	 output reg [63:0] writedata
    );

	wire cbzctrl;
	wire reg2loc, branch, memread, memtoreg, memwrite, alusrc, regwrite;
	wire [1:0] aluop;
	wire [4:0] readreg2;
	wire [63:0]readdata1, readdata2;	
	wire [63:0] mux_result;
	wire [3:0] aluctrl;
	wire [63:0] alu_result;
	wire isZero;
	wire [63:0] readdata_out;
	wire [63:0] cbz_alu_result;
	wire [63:0] dataout;
	wire [63:0] newpc;
	
	control_unit C( 			//initialize controls
		.opcode(instr_31_21),
		.reg2loc(reg2loc),
		.branch(branch),
		.memread(memread), 
		.memtoreg(memtoreg),
		.aluop(aluop),
		.memwrite(memwrite),
		.alusrc(alusrc),
		.regwrite(regwrite)
	);
	
	mux_reg M1(             //select correct readreg2
		.reg2loc(reg2loc),
		.R_instr(instr_20_16),
		.other_instr(instr_4_0),
		.readreg2(readreg2)
	);
	
	regFile RF(					//reg file
		.initialmem(meminit),
   	.readreg1(instr_9_5),
		.readreg2(readreg2),
		.writereg(instr_4_0),
		.writedata(dataout),
		.reg_write(regwrite),
		.clk(clock),
		.readdata1(readdata1),
		.readdata2(readdata2)
	 );
	
	mux_alu M2(					//mux before ALU to choose second input
		.readdata2(readdata2),
		.instruction(instruction),
		.alusrc(alusrc),
		.result(mux_result)
	
	);
	
	alu A(						// main alu
		.a(readdata1),
		.b(mux_result),
		.aluCtrl(aluctrl),
		.z(alu_result),
		.zero(isZero)
	);
	
	data_mem DM(				//data memory
		.address(alu_result),
		.writedata(readdata2),
		.memwrite(memwrite),
		.memread(memread),
		.readdata(readdata_out)
	);
	
	mux_data M3(				//mux after data memory to select which number is written back to mem
		.readdata(readdata_out),
		.aluresult(alu_result),
		.memtoreg(memtoreg),
		.writedata(dataout)
	);
	
	alu_control AC(			//ALU control 
		.opcode(instr_31_21),
		.alu_op(aluop),
		.alu_ctrl(aluctrl)
	);
	
	cbz_alu CA(					//ALU that is used only when CBZ or B
		.pc(programcounter),
		.instruction(instruction),
		.result(cbz_alu_result)
	);
	
	assign cbzctrl = branch && isZero;	 //assign CBZ branch AND zero
	
	mux_pc M4(				//mux that selectes next PC
		.pc(programcounter),
		.aluresult_in(cbz_alu_result),
		.cbz(cbzctrl),
		.pc_out(nextpc)
	);
	
	always @(instruction or nextpc) begin
		assign writedata = dataout;
	end

endmodule
