`timescale 1ns / 1ps

module cpu_test;

	// Inputs
	reg clk;
	reg reset;
   wire [15:0] mem_in; 
   wire [15:0] instr_in;

	// Outputs
	wire [11:0] address;
	wire write;
	wire [15:0] mem_out;

	// Instantiate the Unit Under Test (UUT)
	topmodule cpu (
		.clk(clk), 
		.reset(reset), 
		.mem_in(mem_in),
      .instr_in(instr_in),
		.address(address), 
		.write(write), 
		.mem_out(mem_out)
	);
    MainMemory mm(
        .write(write),
        .address(address),
        .write_data(mem_out),
        .dataout(mem_in),
        .instructionout(instr_in)
    );

	initial begin
		clk = 0;
		reset = 0;
        while (1) begin
            clk = #1 ~clk;
        end
	end
    
endmodule

module MainMemory(
    input write,
    input [11:0] address,
    input [15:0] write_data,
    //
    output reg [15:0] dataout,
    output reg [15:0] instructionout
    );
    reg [15:0] mem [0:299];
    integer i;
    initial begin
        for (i = 0; i <= 299; i = i + 1) begin
            mem[i] = 0;
        end
        // Instructions
        mem[0] = 16'hA010;
        mem[1] = 16'h2015;
        mem[2] = 16'h6000;
        mem[3] = 16'h0000;
        mem[4] = 16'h8005;
        mem[5] = 16'hB003;
        mem[6] = 16'h3003;
        mem[7] = 16'h9002;
        mem[8] = 16'h6000;
        mem[9] = 16'h4002;
        mem[10] = 16'h6000;
        mem[11] = 16'h6000;
        mem[12] = 16'h5002;
        mem[13] = 16'h9003;
        // Memory
        mem[299 - 10] = 10;
        mem[299 - 15] = 15;
        mem[299 - 3] = 6;
        mem[299 - 6] = 4;
        mem[299 - 2] = 12;
        mem[299 - 12] = 14;
        //
        instructionout = mem[0];
    end
    always @(address) begin
        dataout = mem[299 - address];
        instructionout = mem[address];
    end
    always @(posedge write) begin
        mem[299 - address] = write_data;
    end
endmodule
