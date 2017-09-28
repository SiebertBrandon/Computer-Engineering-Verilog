`timescale 1ns / 1ps

module topmodule(
    input clk,
    input reset,
    input [15:0] instr_in,
    input [15:0] mem_in,
    //
    output [11:0] address,
    output write,
    output [15:0] mem_out
    );
    wire enable_md;
    wire enable_ir;
    wire enable_c;
    wire enable_ac;
    wire enable_ma;
    wire enable_pc;
    wire enable_inc;
    wire enable_mux1;
    wire enable_mux2;
    wire [1:0] enable_mux3;
    //
    wire [15:0] mem_to_md;
    wire [15:0] mem_to_ir;
    wire [11:0] ir_to_mux3_mux1;
    wire [3:0] ir_to_controller;
    //wire [11:0] ir_to_mux1;
    wire [15:0] md_to_b;
    wire [11:0] md_to_mux3_mux1;
    //wire [11:0] md_to_mux1;
    wire c_to_alu;
    wire alu_to_c;
    wire [15:0] ac_to_a_write;
    wire ac_to_control;
    //wire [15:0] ac_to_write;
    wire [15:0] alu_to_ac;
    wire [11:0] mux1_to_ma;
    wire [11:0] mux3_to_pc;
    wire [11:0] ma_to_mux2;
    wire [11:0] pc_to_mux2_inc;
    //wire [11:0] pc_to_inc;
    wire [11:0] inc_to_mux3;
    wire [11:0] mux2_to_mem;
    wire clk_to_controller;
    wire 			reset_to_controller;
    wire 			write_to_mem;
    wire [2:0] 	controller_to_alu;
    
    //assign clk_to_controller = clk;
    //assign reset_to_controller = reset;
    //assign mem_to_md = mem_in;
    //assign mem_to_ir = instr_in;
    //assign mux2_to_mem = address;
    
    Accumulator a1(
        .indata(alu_to_ac),
        .enable(enable_ac),
        .outdata(mem_out),
        .rwn(write),
        .z(ac_to_control)
    );
	 ALU alu1(
        .a(mem_out),
        .b(md_to_b),
        .cin(c_to_alu),
        .aluc(controller_to_alu),
        .y(alu_to_ac),
        .cout(alu_to_c)
	 );
    Controller c1(
        .instruction_code(ir_to_controller),
        .gtz(ac_to_control),
        .clk(clk),
        .reset(reset),
        .ma_mux_con(enable_mux1),
        .pc_mux_con(enable_mux3),
        .a_mux_con(enable_mux2),
        .md_enable(enable_md),
        .ir_enable(enable_ir),
        .ma_enable(enable_ma),
        .pc_enable(enable_pc),
        .c_enable(enable_c),
        .ac_enable(enable_ac),
        .rwn(write),
        .inca_enable(enable_inc),
        .aluc(controller_to_alu)
    );
    Increment i1(
        .in(pc_to_mux2_inc),
        .enable(enable_inc),
        .out(inc_to_mux3)
    );
    InstructionRegister ir1(
        .indata(instr_in),
        .enable(enable_ir),
        .outdata(ir_to_mux3_mux1),
        .opcode(ir_to_controller)
    );
    MemoryAddress ma1(
        .indata(mux1_to_ma),
        .enable(enable_ma),
        .outdata(ma_to_mux2)
    );
    MemoryData md1(
        .indata(mem_in),
        .enable(enable_md),
        .outdata1(md_to_mux3_mux1),
        .outdata2(md_to_b)
    );
    ProgramCounter pc1(
        .indata(mux3_to_pc),
        .enable(enable_pc),
        .outdata(pc_to_mux2_inc)
    );
    Carry ca1(
        .in(alu_to_c),
        .enable(enable_c),
        .out(c_to_alu)
    );
    two_way_mux mux1(
        .in0(ir_to_mux3_mux1),
        .in1(md_to_mux3_mux1),
        .mode(enable_mux1),
        .out(mux1_to_ma)
    );
    two_way_mux mux2(
        .in0(pc_to_mux2_inc),
        .in1(ma_to_mux2),
        .mode(enable_mux2),
        .out(address)
    );
    three_way_mux mux3(
        .in0(inc_to_mux3),
        .in1(ir_to_mux3_mux1),
        .in2(md_to_mux3_mux1),
        .mode(enable_mux3),
        .out(mux3_to_pc)
    );
endmodule
