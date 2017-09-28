`timescale 1 ns/1 ps
module ARM_Testbench();
	reg MASTERCLOCK_BUFFERS;
	reg MASTERCLOCK_STAGES;

	// Program Counter Wires
	wire [31:0] npc_to_pc;

	// Instruction Memory Wires
	wire [31:0] pc_to_in;

	// Decode Stage Wires
	wire [31:0] in_to_de_prebuff;
	wire [31:0] in_to_de_postbuff;
	wire [31:0] pc_to_de_prebuff;
	wire [31:0] pc_to_de_postbuff;

	// Execute Stage Wires
	wire [31:0] pc_to_ex_prebuff;
	wire [31:0] pc_to_ex_postbuff;
	wire [63:0] reg1data_to_ex_prebuff;
	wire [63:0] reg1data_to_ex_postbuff;
	wire [63:0] reg2data_to_ex_prebuff;
	wire [63:0] reg2data_to_ex_postbuff;
	wire [63:0] se_to_ex_prebuff;
	wire [63:0] se_to_ex_postbuff;
	wire [4:0] wb_to_ex_prebuff;
	wire [4:0] wb_to_ex_postbuff;
	wire [3:0] aluop_to_ex_prebuff;
	wire [3:0] aluop_to_ex_postbuff;
	wire ub_to_ex_prebuff;
	wire ub_to_ex_postbuff;
	wire br_to_ex_prebuff;
	wire br_to_ex_postbuff;
	wire mr_to_ex_prebuff;
	wire mr_to_ex_postbuff;
	wire mw_to_ex_prebuff;
	wire mw_to_ex_postbuff;
	wire rw_to_ex_prebuff;
	wire rw_to_ex_postbuff;

	// Main Memory Wires
	wire [63:0] adr_to_mem_prebuff;
	wire [63:0] adr_to_mem_postbuff;
	wire [4:0] wb_to_mem_prebuff;
	wire [4:0] wb_to_mem_postbuff;
	wire read_to_mem_prebuff;
	wire read_to_mem_postbuff;
	wire write_to_mem_prebuff;
	wire write_to_mem_postbuff;
	//wire writereg_to_mem_prebuff;
	//wire writereg_to_mem_postbuff;

	// Register Memory Wires
	wire [4:0] reg1_to_reg;
	wire [4:0] reg2_to_reg;
	//
	wire [4:0] wb_to_reg_prebuff;
	wire [4:0] wb_to_reg_postbuff;
	wire [63:0] data_to_reg_prebuff;
	wire [63:0] data_to_reg_postbuff;
	wire iw_to_reg_prebuff;
	wire iw_to_reg_postbuff;
	
	// Clock Wires
	wire clock_signal_buffers;
	wire clock_signal_stages;
	
	// Buffer Modules
	StagingMemoryFD fetch_decode(
		.clock(clock_signal_buffers), 
		.instage1(in_to_de_prebuff),
		.outstage1(in_to_de_postbuff),
		.instage2(pc_to_de_prebuff),
		.outstage2(pc_to_de_postbuff)
	);
	
	StagingMemoryDE decode_execute(
		.clock(clock_signal_buffers), 
		.instage1(pc_to_ex_prebuff),
		.outstage1 (pc_to_ex_postbuff),
		.instage2(reg1data_to_ex_prebuff),
		.outstage2(reg1data_to_ex_postbuff),
		.instage3(reg2data_to_ex_prebuff),
		.outstage3(reg2data_to_ex_postbuff),
		.instage4(se_to_ex_prebuff),
		.outstage4(se_to_ex_postbuff),
		.instage5(ub_to_ex_prebuff),
		.outstage5(ub_to_ex_postbuff),
		.instage6(br_to_ex_prebuff),
		.outstage6(br_to_ex_postbuff),
		.instage7(mr_to_ex_prebuff),
		.outstage7(mr_to_ex_postbuff),
		.instage8(mw_to_ex_prebuff),
		.outstage8(mw_to_ex_postbuff),
		.instage9(rw_to_ex_prebuff),
		.outstage9(rw_to_ex_postbuff),
		.instage10(aluop_to_ex_prebuff),
		.outstage10(aluop_to_ex_postbuff),
		.instage11(wb_to_ex_prebuff),
		.outstage11(wb_to_ex_postbuff)
	);
	
	StagingMemoryEM execute_memory(
		.clock(clock_signal_buffers), 
		.instage1(adr_to_mem_prebuff),
		.outstage1(adr_to_mem_postbuff),
		.instage2(read_to_mem_prebuff),
		.outstage2(read_to_mem_postbuff),
		.instage3(write_to_mem_prebuff),
		.outstage3(write_to_mem_postbuff),
		//.instage4(writereg_to_mem_prebuff),
		//.outstage4(writereg_to_mem_postbuff),
		.instage5(wb_to_mem_prebuff),
		.outstage5(wb_to_mem_postbuff)
	);
	StagingMemoryMW memory_writeback(
		.clock(clock_signal_buffers),
		.instage1(wb_to_reg_prebuff),
		.outstage1(wb_to_reg_postbuff),
		.instage2(data_to_reg_prebuff),
		.outstage2(data_to_reg_postbuff),
		.instage3(iw_to_reg_prebuff),
		.outstage3(iw_to_reg_postbuff)
	);
	
	// Stage Modules
	ARM_Execute execute_stage(
		.clock(clock_signal_stages),
		.pcin(pc_to_ex_postbuff),
		.reg1data(reg1data_to_ex_postbuff),
		.reg2data(reg2data_to_ex_postbuff),
		.se(se_to_ex_postbuff),
		.Ubranch(ub_to_ex_postbuff),
		.Branch(br_to_ex_postbuff),
		.MemRead(mr_to_ex_postbuff),
		.MemWrite(mw_to_ex_postbuff),
		.RegWrite(rw_to_ex_postbuff),
		.ALUop(aluop_to_ex_postbuff),
		.WBReg(wb_to_ex_postbuff),
		//
		.pcout(npc_to_pc),
		.result(adr_to_mem_prebuff),
		.destreg(wb_to_mem_prebuff),
		.isMemReading(read_to_mem_prebuff),
		.isMemWriting(write_to_mem_prebuff)
		//.isRegWriting(writereg_to_mem_prebuff)
	);
	
	ARM_Decode decode_stage(
		.clock(clock_signal_stages),
		.instruction(in_to_de_postbuff),
		.pc(pc_to_de_postbuff),
		//
		.pcout(pc_to_ex_prebuff),
		.reg1(reg1_to_reg),
		.reg2(reg2_to_reg),
		.Ubranch(ub_to_ex_prebuff),
		.se(se_to_ex_prebuff),
		.Branch(br_to_ex_prebuff),
		.MemRead(mr_to_ex_prebuff),
		.MemWrite(mw_to_ex_prebuff),
		.RegWrite(rw_to_ex_prebuff),
		.ALUop(aluop_to_ex_prebuff),
		.WBReg(wb_to_ex_prebuff)
	);
	
	RegisterMemory regMem(
		.clock(clock_signal_stages),
		.reg1(reg1_to_reg),
		.reg2(reg2_to_reg),
		.writeTo(wb_to_reg_postbuff),
		.writeData(data_to_reg_postbuff),
		.isWriting(iw_to_reg_postbuff),
		//
		.reg1data(reg1data_to_ex_prebuff),
		.reg2data(reg2data_to_ex_prebuff)
	);
	
	ProgramCounter pCtr(
		.clock(clock_signal_stages),
		.npc(npc_to_pc),
		//
		.pc(pc_to_in)
	);
	
	InstructionMemory insMem(
		.clock(clock_signal_stages),
		.pc(pc_to_in),
		//
		.instruction(in_to_de_prebuff),
		.pcout(pc_to_de_prebuff)
	);
	
	MainMemory mainMem(
		.clock(clock_signal_stages),
		.address(adr_to_mem_postbuff),
		.read(read_to_mem_postbuff),
		.write(write_to_mem_postbuff),
		.writeto(wb_to_mem_postbuff),
		//.writereg(writereg_to_mem_postbuff),
		// Outputs
		.data(data_to_reg_prebuff),
		.writeback(wb_to_reg_prebuff),
		.iswriting(iw_to_reg_prebuff)
	);

	assign clock_signal_buffers = MASTERCLOCK_BUFFERS;
	assign clock_signal_stages = MASTERCLOCK_STAGES;
	
	initial begin
		MASTERCLOCK_BUFFERS = 0;
		MASTERCLOCK_STAGES = 0;
		while (1) begin
			#1 
			MASTERCLOCK_BUFFERS = ~MASTERCLOCK_BUFFERS;
			MASTERCLOCK_STAGES = ~MASTERCLOCK_STAGES;
		end
	end
endmodule

module InstructionMemory(
	input [31:0] pc,
	input clock,
	//
	output [31:0] pcout,
	output reg [31:0] instruction
);
	reg [31:0] instrFile [0:255];
	integer i;
	initial begin
		for (i = 0; i < 256; i = i + 1) begin
			instrFile[i] = 0;
		end
		// Initalize Custom Instructions
		instrFile[0] = 32'h00000000;  //		 NOP
		instrFile[1] = 32'h8B020029;  // 	 ADD X9, X2, X3
		instrFile[2] = 32'hf841006a;  // 	 LDUR X10, [X3, #16]
		instrFile[3] = 32'h00000000;  //		 NOP
		instrFile[4] = 32'h00000000;  //		 NOP
		instrFile[5] = 32'hcb0a012b;  // 	 SUB X11, X9, X10
		instrFile[6] = 32'h00000000;  //		 NOP
		instrFile[7] = 32'h00000000;  //		 NOP
		instrFile[8] = 32'hb40000db;  // 	 CBZ X11, Else
		instrFile[9] = 32'h00000000;  //		 NOP
		instrFile[10] = 32'h00000000; //		 NOP
		instrFile[11] = 32'h9a020020; // 	 AND X0, X1, X2
		instrFile[12] = 32'h14000004; // 	 B Exit
		instrFile[13] = 32'h00000000; //		 NOP
		instrFile[14] = 32'h00000000; //		 NOP
		instrFile[15] = 32'haa020020; //Else:ORR X8, X1, X2
		instrFile[16] = 32'hf8010060; //Exit:STUR X0, [X3, @16]
		// End Initialize
	end
	always @(clock) begin
		$display("Program Counter: %d", pc);
		instruction = instrFile[pc];
	end
	assign pcout = pc;
endmodule

module MainMemory(
	input [63:0] address,
	input read,
	input write,
	input [4:0] writeto,
	//input writereg,
	input clock,
	//
	output reg [63:0] data,
	output reg [4:0] writeback,
	output reg iswriting
);
	reg [63:0] memFile [0:999];
	integer i;
	initial begin
		iswriting = 0;
		for (i = 0; i < 1000; i = i + 1) begin
			memFile[i] = i * 10;
		end
		// Initialize Custom Memory
		
		// End Initialize
	end
	always @(clock) begin
		if (read) begin // Reading From Memory
			data <= memFile[address];
			writeback <= writeto;
			iswriting <= ~iswriting;
			$display("[MainMem] Reading from mem, Data = %d", data);
		end
		else begin // Writing to Memory
			if (write) begin
				memFile[address] <= data;
				$display("[MainMem] Writing to mem, Data = %d", data);
			end
			else begin // Writing to Register
				data <= address;
				writeback <= writeto;
				iswriting <= ~iswriting;
				$display("[MainMem] Forwarding Register Data, Data = %d", data);
			end
		end
	end
endmodule