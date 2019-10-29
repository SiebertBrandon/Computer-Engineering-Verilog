`timescale 1 ns/1 ps

// The purpose of ARM_Decode is to take a full instruction input and to decode the type of instruction
// It's run by a stepin clock that ripples to subsequent modules

module ARM_Decode(
	input clock,
	input [31:0] instruction,
	input [31:0] pc,
	//
	output reg [4:0] reg1,
	output reg [4:0] reg2,
	output reg [63:0] se,
	output reg Ubranch,
	output reg Branch,
	output reg MemRead,
	output reg MemWrite,
	output reg RegWrite,
	output reg [3:0] ALUop,
	output reg [4:0] WBReg,
	output [31:0] pcout
);
	reg [31:0] tmp;
	assign pcout = pc;
	initial begin
		reg1 = 0;	
		reg2 = 0;
		se = 0;
		Ubranch = 0;
		Branch = 0;
		MemRead = 0;
		MemWrite = 0;
		RegWrite = 0;	
		ALUop = 0;
		WBReg = 0;
	end
	always @(*) begin // At any time the clock changes, set all outputs to zero to clear previous instruction
		reg1 = 0;	
		reg2 = 0;
		se = 0;
		Ubranch = 0;
		Branch = 0;
		MemRead = 0;
		MemWrite = 0;
		RegWrite = 0;	
		ALUop = 0;
		WBReg = 0;
		
		tmp = instruction >> 26; // Extract the opcode if it's 6 bits long
		if (tmp == 6'b000101) begin // It's a Branch
			Ubranch = 1; // Branch no matter what
			se = instruction & 25'h1FFFFFF; // Offset from base address
			ALUop = 4'b0111; // ALU function pass input b
		end
		
		tmp = instruction >> 24; // Extract the opcode if it's 8 bits long
		if (tmp == 8'b10110100) begin // It's a Branch if Zero
			Branch = 1; // Check with zero to branch
			se = (instruction >> 5) & 19'h7FFFF; 
			ALUop = 4'b0111; // ALU function pass input b
			reg2 = instruction & 5'h1F; // Register to check if zero
		end
		
		tmp = instruction >> 21; // Default to last possibility
		
		case (tmp)
			11'b11111000000: begin // It's a Store
				MemWrite = 1; // We're writing to memory
				reg1 = (instruction >> 5) & 5'h1F; // Base address of destination
				reg2 = instruction & 5'h1F; // Data to store
				se = (instruction >> 12) & 9'h1FF; // Offset from base address
				MemWrite = 1; // We're writing to memory
				ALUop = 4'b0010; // Add base address and offset
			end	
			11'b11111000010: begin // It's a Load
				reg1 = (instruction >> 5) & 5'h1F; // Base address of source
				se = (instruction >> 12) & 9'h1FF; // Offset from base address
				WBReg = instruction & 5'h1F; // The register we load into
				RegWrite = 1; // We're writing to a register
				MemRead = 1; // We're reading from memory
				ALUop = 4'b0010; // Add base address and offset
			end
			11'b10001011000: begin // It's an Add
				reg1 = (instruction >> 5) & 5'h1F; // Operand 1
				reg2 = (instruction >> 16) & 5'h1F; // Operand 2
				WBReg = instruction & 5'h1F; // Where we write back to
				ALUop = 4'b0010; // Set ALU to Add
				RegWrite = 1; // We're writing to a register
				//$display("Decoded an Add instruction");
				//$display("reg1: %d", reg1);
				//$display("reg2: %d", reg2);
				//$display("ALUop: %b", ALUop);
				//$display("WB Reg: %d", WBReg);
			end
			11'b11001011000: begin // It's a Sub
				reg1 = (instruction >> 5) & 5'h1F; // Operand 1
				reg2 = (instruction >> 16) & 5'h1F; // Operand 2
				WBReg = instruction & 5'h1F; // Where we write back to
				ALUop = 4'b0110; // Set ALU to Sub
				RegWrite = 1; // We're writing to a register
			end
			11'b10001010000: begin // It's an And
				reg1 = (instruction >> 5) & 5'h1F; // Operand 1
				reg2 = (instruction >> 16) & 5'h1F; // Operand 2
				WBReg = instruction & 5'h1F; // Where we write back to
				ALUop = 4'b0000; // Set ALU to And
				RegWrite = 1; // We're writing to a register
			end
			11'b10101010000: begin // It's an Or
				reg1 = (instruction >> 5) & 5'h1F; // Operand 1
				reg2 = (instruction >> 16) & 5'h1F; // Operand 2
				WBReg = instruction & 5'h1F; // Where we write back to
				ALUop = 4'b0001; // Set ALU to Or
				RegWrite = 1; // We're writing to a register
			end
			default: begin
				ALUop = 4'b1111;
			end
		endcase
	end
endmodule

// The purpose of ARM_Execute is to receive the decoded instruction,
// execute the instruction, output to the register file, and to update the program counter

module ARM_Execute(
  input clock,
  input [31:0] pcin,
  input [63:0] reg1data,
  input [63:0] reg2data,
  input [63:0] se,
  input Ubranch,
  input Branch,
  input MemRead,
  input MemWrite,
  input RegWrite,
  input [3:0] ALUop,
  input [4:0] WBReg,
  //
  output reg [31:0] pcout,
  output reg [63:0] result,
  output reg [4:0] destreg,
  output reg isMemReading,
  output reg isMemWriting
  //output reg isRegWriting
  //output reg stepout
);
	reg [63:0] ALU_in1;
	reg [63:0] ALU_in2;
	reg [3:0] ALU_op;
	reg mainALU_Z;
	initial begin
		ALU_in1 = 0;
		ALU_in2 = 0;
		ALU_op = 0;
		mainALU_Z = 0;
		pcout = 0;
		destreg = 0;
	end
	always @(ALU_in1 or ALU_in2 or ALUop) begin
		case(ALUop)
			4'b0000: result = ALU_in1 & ALU_in2;
			4'b0001: result = ALU_in1 | ALU_in2;
			4'b0010: result = ALU_in1 + ALU_in2;
			4'b0110: result = ALU_in1 - ALU_in2;
			4'b0111: result = ALU_in1;
			4'b1100: result = ~(ALU_in1 | ALU_in2);
			4'b1111: result = 0;
		endcase
		if (result == 0) begin
			mainALU_Z = 1;
		end
		else begin
			mainALU_Z = 0;
		end
		if ((mainALU_Z & Branch) | Ubranch) begin
			pcout = pcin + se;
		end
	end
	always @(clock) begin
		result = 0;
		destreg = 0;
		isMemReading = 0;
		isMemWriting = 0;
	end
  always @(*) begin
    // We only assume positive number branches for this implementation
    if (Ubranch) begin // We're dealing with an unconditional branch and just need to update PC
      pcout = pcin + se; // Update the PC and finish instruction execution
    end
    else if (Branch) begin // We're dealing with a CBZ and need to compare before the PC gets updated
      ALU_in2 <= reg2data; // Check if this is zero
		ALU_op <= ALUop;
    end
    else if (MemWrite) begin // We're dealing with a store and will need to access memory
      ALU_in1 <= reg1data; // This is the base address
      ALU_in2 <= se; // Add the offset
      ALU_op <= ALUop; // This is the ALU Operation
      isMemWriting <= 1; // We're writing to memory
      //pcout = pcin + 1; // Move on to next instruction
      $display("Executed a Store operation");
    end
    else if (MemRead) begin // We're dealing with a load and will need to write to the register file
      ALU_in1 <= reg1data; // This is the base address
      ALU_in2 <= se; // Add the offset
      ALU_op <= ALUop; // This is the ALU Operation
      destreg <= WBReg; // Forward our destination write register to memory
      isMemReading <= 1; // We're reading from memory
      isMemWriting <= 0; // We're writing to a register
      //pcout = pcin + 1; // Move on to next instruction
      $display("Executed a Load operation");
    end
    else if (~MemRead & RegWrite) begin // We're dealing with an R type instruction. Execute and write back to register
      ALU_in1 <= reg1data; // This is operand #1
      ALU_in2 <= reg2data; // This is operand #2
		ALU_op <= ALUop; // This is the ALU Operation
      destreg <= WBReg; // Forward our destination write register to memory
      isMemWriting <= 0; // We're writing to a register, so toggle
      //pcout = pcin + 1; // Move on to next instruction
      $display("Executed an R-Type operation.");
      $display("reg1data: %d", reg1data);
      $display("reg2data: %d", reg2data);
      $display("ALUop: %d", ALUop);
      $display("result: %d", result);
      $display("Writeback Reg: %d", destreg);
    end
  end
  
endmodule

// ALU was designed as part of a bottoms up approach to creating the processor 

module ALU(
	input [63:0] A,
	input [63:0] B,
	input [3:0] ALUc,
	output reg Z,
	output reg [63:0] C
);

  always @(A or B or ALUc) begin
    case(ALUc)
      4'b0000: C = A & B;
      4'b0001: C = A | B;
      4'b0010: C = A + B;
      4'b0110: C = A - B;
      4'b0111: C = B;
      4'b1100: C = ~(A | B);
    endcase
    if (C == 0) begin
      Z = 1;
    end
    else begin
      Z = 0;
    end
    $monitor("ALU Changed Output To: %d", C);
  end
endmodule
/////
/////
/////
module DeMux64(
	input [63:0] in,
	input selection,
	//
	output reg [63:0] out1,
	output reg [63:0] out2
);
	initial begin
		out1 = 0;
		out2 = 0;
	end
	always @(*) begin
		case(selection)
			1: out1 = in; 
			0: out2 = in;
		endcase
	end
endmodule
module Mux64(
	input [63:0] in1,
	input [63:0] in2,
	input selection,
	//
	output reg [63:0] out
);
	initial begin
		out = 0;
	end
	always @(*) begin
		case(selection)
			0: out = in1;
			1: out = in2;
		endcase
	end
endmodule
module DeMux32 (
	input [31:0] in,
	input selection,
	//
	output reg [31:0] out1,
	output reg [31:0] out2
);
	initial begin
		out1 = 0;
		out2 = 0;
	end
	always @(*) begin
		case(selection)
			1: out1 = in; 
			0: out2 = in;
		endcase
	end
endmodule
module Mux32(
	input [31:0] in1,
	input [31:0] in2,
	input selection,
	//
	output reg [31:0] out
);
	initial begin
		out = 0;
	end
	always @(*) begin
		case(selection)
			0: out = in1;
			1: out = in2;
		endcase
	end
endmodule
module DeMux5(
	input [4:0] in,
	input selection,
	//
	output reg [4:0] out1,
	output reg [4:0] out2
);
	initial begin
		out1 = 0;
		out2 = 0;
	end
	always @(*) begin
		case(selection)
			1: out1 = in; 
			0: out2 = in;
		endcase
	end
endmodule
module Mux5(
	input [4:0] in1,
	input [4:0] in2,
	input selection,
	//
	output reg [4:0] out
);
	initial begin
		out = 0;
	end
	always @(*) begin
		case(selection)
			0: out = in1;
			1: out = in2;
		endcase
	end
endmodule
module DeMux4(
	input [3:0] in,
	input selection,
	//
	output reg [3:0] out1,
	output reg [3:0] out2
);
	initial begin
		out1 = 0;
		out2 = 0;
	end
	always @(*) begin
		case(selection)
			1: out1 = in; 
			0: out2 = in;
		endcase
	end
endmodule
module Mux4(
	input [3:0] in1,
	input [3:0] in2,
	input selection,
	//
	output reg [3:0] out
);
	initial begin
		out = 0;
	end
	always @(*) begin
		case(selection)
			0: out = in1;
			1: out = in2;
		endcase
	end
endmodule
module DeMux1(
	input in,
	input selection,
	//
	output reg out1,
	output reg out2
);
	initial begin
		out1 = 0;
		out2 = 0;
	end
	always @(*) begin
		case(selection)
			1: out1 = in; 
			0: out2 = in;
		endcase
	end
endmodule
module Mux1(
	input in1,
	input in2,
	input selection,
	//
	output reg out
);
	initial begin
		out = 0;
	end
	always @(*) begin
		case(selection)
			0: out = in1;
			1: out = in2;
		endcase
	end
endmodule
/////
/////
/////
module StagingMemoryFD(
	input clock,
	input wire [31:0] instage1,
	input wire [31:0] instage2,
	//
	output [31:0] outstage1,
	output [31:0] outstage2
);
	wire [31:0] buffers32 [1:4];
	reg [31:0] bufferStore32 [1:4];
	wire selection = clock;
	integer i;
	
	DeMux32 stage1DeMux(.in(instage1), .out1(buffers32[1]), .out2(buffers32[2]), .selection(selection));
	Mux32 stage1Mux(.in1(bufferStore32[1]), .in2(bufferStore32[2]), .out(outstage1), .selection(selection));
	DeMux32 stage2DeMux(.in(instage2), .out1(buffers32[3]), .out2(buffers32[4]), .selection(selection));
	Mux32 stage2Mux(.in1(bufferStore32[3]), .in2(bufferStore32[4]), .out(outstage2), .selection(selection));
	
	initial begin
		for (i = 1; i <= 4; i = i + 1) begin
			bufferStore32[i] = 0;
		end
	end
	always @(clock) begin
		for (i = 1; i <= 4; i = i + 1) begin
			bufferStore32[i] = buffers32[i];
		end
	end
endmodule
module StagingMemoryDE(
	input clock,
	input wire [31:0] instage1,
	input wire [63:0] instage2,
	input wire [63:0] instage3,
	input wire [63:0] instage4,
	input wire instage5,
	input wire instage6,
	input wire instage7,
	input wire instage8,
	input wire instage9,
	input wire [3:0] instage10,
	input wire [4:0] instage11,
	//
	output [31:0] outstage1,
	output [63:0] outstage2,
	output [63:0] outstage3,
	output [63:0] outstage4,
	output outstage5,
	output outstage6,
	output outstage7,
	output outstage8,
	output outstage9,
	output [3:0] outstage10,
	output [4:0] outstage11
);
	wire [31:0] buffers32 [1:2];
	reg [31:0] bufferStore32 [1:2];
	wire [63:0] buffers64 [1:8];
	reg [63:0] bufferStore64 [1:8];
	wire buffers1 [1:10];
	reg bufferStore1 [1:10];
	wire [3:0] buffers4 [1:2];
	reg [3:0] bufferStore4 [1:2];
	wire [4:0] buffers5 [1:2];
	reg [4:0] bufferStore5 [1:2];
	wire selection = clock;
	integer i;
	
	DeMux32 stage1DeMux(.in(instage1), .out1(buffers32[1]), .out2(buffers32[2]), .selection(selection));
	Mux32 stage1Mux(.in1(bufferStore32[1]), .in2(bufferStore32[2]), .out(outstage1), .selection(selection));
	
	DeMux64 stage2DeMux(.in(instage2), .out1(buffers64[1]), .out2(buffers64[2]), .selection(selection));
	Mux64 stage2Mux(.in1(bufferStore64[1]), .in2(bufferStore64[2]), .out(outstage2), .selection(selection));
	DeMux64 stage3DeMux(.in(instage3), .out1(buffers64[3]), .out2(buffers64[4]), .selection(selection));
	Mux64 stage3Mux(.in1(bufferStore64[3]), .in2(bufferStore64[4]), .out(outstage3), .selection(selection));
	DeMux64 stage4DeMux(.in(instage4), .out1(buffers64[5]), .out2(buffers64[6]), .selection(selection));
	Mux64 stage4Mux(.in1(bufferStore64[5]), .in2(bufferStore64[6]), .out(outstage4), .selection(selection));
	
	DeMux1 stage5DeMux(.in(instage5), .out1(buffers1[1]), .out2(buffers1[2]), .selection(selection));
	Mux1 stage5Mux(.in1(bufferStore1[1]), .in2(bufferStore1[2]), .out(outstage5), .selection(selection));
	DeMux1 stage6DeMux(.in(instage6), .out1(buffers1[3]), .out2(buffers1[4]), .selection(selection));
	Mux1 stage6Mux(.in1(bufferStore1[3]), .in2(bufferStore1[4]), .out(outstage6), .selection(selection));
	DeMux1 stage7DeMux(.in(instage7), .out1(buffers1[5]), .out2(buffers1[6]), .selection(selection));
	Mux1 stage7Mux(.in1(bufferStore1[5]), .in2(bufferStore1[6]), .out(outstage7), .selection(selection));
	DeMux1 stage8DeMux(.in(instage8), .out1(buffers1[7]), .out2(buffers1[8]), .selection(selection));
	Mux1 stage8Mux(.in1(bufferStore1[7]), .in2(bufferStore1[8]), .out(outstage8), .selection(selection));
	DeMux1 stage9DeMux(.in(instage9), .out1(buffers1[9]), .out2(buffers1[10]), .selection(selection));
	Mux1 stage9Mux(.in1(bufferStore1[9]), .in2(bufferStore1[10]), .out(outstage9), .selection(selection));
	
	DeMux4 stage10DeMux(.in(instage10), .out1(buffers4[1]), .out2(buffers4[2]), .selection(selection));
	Mux4 stage10Mux(.in1(bufferStore4[1]), .in2(bufferStore4[2]), .out(outstage10), .selection(selection));
	
	DeMux5 stage11DeMux(.in(instage11), .out1(buffers5[1]), .out2(buffers5[2]), .selection(selection));
	Mux5 stage11Mux(.in1(bufferStore5[1]), .in2(bufferStore5[2]), .out(outstage11), .selection(selection));
	
	initial begin
		for (i = 1; i <= 10; i = i + 1) begin
			bufferStore64[i] = 0;
			bufferStore32[i] = 0;
			bufferStore1[i] = 0;
			bufferStore4[i] = 0;
			bufferStore5[i] = 0;
		end
	end
	always @(clock) begin
		for (i = 1; i <= 10; i = i + 1) begin
			bufferStore64[i] = buffers64[i];
			bufferStore32[i] = buffers32[i];
			bufferStore1[i] = buffers1[i];
			bufferStore4[i] = buffers4[i];
			bufferStore5[i] = buffers5[i];
		end
	end
endmodule

module StagingMemoryEM(	
	input clock,
	input wire [63:0] instage1,
	input wire instage2,
	input wire instage3,
	//input wire instage4,
	input wire [4:0] instage5,
	//
	output [63:0] outstage1,
	output outstage2,
	output outstage3,
	//output outstage4,
	output [4:0] outstage5
);
	wire [63:0] buffers64 [1:2];
	reg [63:0] bufferStore64 [1:2];
	wire [4:0] buffers5 [1:2];
	reg [4:0] bufferStore5 [1:2];
	wire buffers1 [1:6];
	reg bufferStore1 [1:6];
	wire selection = clock;
	integer i;
	
	DeMux64 stage1DeMux(.in(instage1), .out1(buffers64[1]), .out2(buffers64[2]), .selection(selection));
	Mux64 stage1Mux(.in1(bufferStore64[1]), .in2(bufferStore64[2]), .out(outstage1), .selection(selection));
	
	DeMux1 stage2DeMux(.in(instage2), .out1(buffers1[1]), .out2(buffers1[2]), .selection(selection));
	Mux1 stage2Mux(.in1(bufferStore1[1]), .in2(bufferStore1[2]), .out(outstage2), .selection(selection));
	DeMux1 stage3DeMux(.in(instage3), .out1(buffers1[3]), .out2(buffers1[4]), .selection(selection));
	Mux1 stage3Mux(.in1(bufferStore1[3]), .in2(bufferStore1[4]), .out(outstage3), .selection(selection));
	//DeMux1 stage4DeMux(.in(instage4), .out1(buffers1[5]), .out2(buffers1[6]), .selection(selection));
	//Mux1 stage4Mux(.in1(bufferStore1[5]), .in2(bufferStore1[6]), .out(outstage4), .selection(selection));
	
	DeMux5 stage5DeMux(.in(instage5), .out1(buffers5[1]), .out2(buffers5[2]), .selection(selection));
	Mux5 stage5Mux(.in1(bufferStore5[1]), .in2(bufferStore5[2]), .out(outstage5), .selection(selection));

	
	initial begin
		for (i = 1; i <= 10; i = i + 1) begin
			bufferStore64[i] = 0;
			bufferStore5[i] = 0;
			bufferStore1[i] = 0;
		end
	end
	always @(clock) begin
		for (i = 1; i <= 10; i = i + 1) begin
			bufferStore64[i] = buffers64[i];
			bufferStore5[i] = buffers5[i];
			bufferStore1[i] = buffers1[i];
		end
	end
endmodule

module StagingMemoryMW(
	input clock,
	input wire [4:0] instage1,
	input wire [63:0] instage2,
	input wire instage3,
	//
	output [4:0] outstage1,
	output [63:0] outstage2,
	output outstage3
);
	wire [63:0] buffers64 [1:2];
	reg [63:0] bufferStore64 [1:2];
	wire [4:0] buffers5 [1:2];
	reg [4:0] bufferStore5 [1:2];
	wire buffers1 [1:2];
	reg bufferStore1 [1:2];
	wire selection = clock;
	integer i;
	
	DeMux5 stage1DeMux(.in(instage1), .out1(buffers5[1]), .out2(buffers5[2]), .selection(selection));
	Mux5 stage1Mux(.in1(bufferStore5[1]), .in2(bufferStore5[2]), .out(outstage1), .selection(selection));
	
	DeMux64 stage2DeMux(.in(instage2), .out1(buffers64[1]), .out2(buffers64[2]), .selection(selection));
	Mux64 stage2Mux(.in1(bufferStore64[1]), .in2(bufferStore64[2]), .out(outstage2), .selection(selection));
	
	DeMux1 stage3DeMux(.in(instage3), .out1(buffers1[1]), .out2(buffers1[2]), .selection(selection));
	Mux1 stage3Mux(.in1(bufferStore1[1]), .in2(bufferStore1[2]), .out(outstage3), .selection(selection));
	
	initial begin
		for (i = 1; i <= 4; i = i + 1) begin
			bufferStore64[i] = 0;
			bufferStore5[i] = 0;
			bufferStore1[i] = 0;
		end
	end
	always @(clock) begin
		for (i = 1; i <= 2; i = i + 1) begin
			bufferStore64[i] = buffers64[i];
			bufferStore5[i] = buffers5[i];
			bufferStore1[i] = buffers1[i];
		end
	end
endmodule
/////
/////
/////
module RegisterMemory(
	input clock,
	input [4:0] reg1,
	input [4:0] reg2,
	input [4:0] writeTo,
	input [63:0] writeData,
	input isWriting,
	//
	output reg [63:0] reg1data,
	output reg [63:0] reg2data
);
  reg [63:0] regFile [0:31];
  integer index;
  integer i;
  initial begin
	 reg1data = 0;
	 reg2data = 0;
    index = 0;
    for (i = 0; i < 32; i = i + 1) begin
      regFile[i] = 0;
    end
    // Load in register initializations
	 for (i = 0; i < 32; i = i + 1) begin
	   regFile[i] = i * 100;
	 end
  end
  always @(clock or reg1 or reg2) begin
    reg1data = regFile[reg1];
    reg2data = regFile[reg2];
  end
  always @(isWriting) begin
    index = writeTo;
    regFile[index] = writeData;
    $display("Writing %d to %d", regFile[index], index);
  end
    
endmodule

module ProgramCounter(
  input clock,
  input [31:0] npc,
  //
  output reg [31:0] pc
);
  initial begin
    pc = 0;
  end
  always @(clock) begin
    pc = pc + 1;
  end
  always @(npc) begin
	 pc = npc;
  end
endmodule