`timescale 1ns / 1ps

module MemBufferTest;

	// Inputs
	reg clock;
	reg [32:0] instage1;
	reg [32:0] instage2;
	reg [3:0] instage3;
	reg  instage4;
	reg [63:0] instage5;
	reg [63:0] instage6;
	reg [63:0] instage7;
	reg [63:0] instage8;
	reg [63:0] instage9;
	reg [63:0] instage10;

	// Outputs
	wire [32:0] outstage1;
	wire [32:0] outstage2;
	wire [3:0] outstage3;
	wire outstage4;
	wire [1:0] outstage5;
	wire [63:0] outstage6;
	wire [63:0] outstage7;
	wire [63:0] outstage8;
	wire [63:0] outstage9;
	wire [63:0] outstage10;

	// Instantiate the Unit Under Test (UUT)
	StagingMemory uut (
		.clock(clock), 
		.instage1(instage1), 
		.instage2(instage2), 
		.instage3(instage3), 
		.instage4(instage4), 
		.instage5(instage5), 
		.instage6(instage6), 
		.instage7(instage7), 
		.instage8(instage8), 
		.instage9(instage9), 
		.instage10(instage10), 
		.outstage1(outstage1), 
		.outstage2(outstage2), 
		.outstage3(outstage3), 
		.outstage4(outstage4), 
		.outstage5(outstage5), 
		.outstage6(outstage6), 
		.outstage7(outstage7), 
		.outstage8(outstage8), 
		.outstage9(outstage9), 
		.outstage10(outstage10)
	);

	initial begin
		// Initialize Inputs
		clock = 1;
		instage1 = 0;
		instage2 = 0;
		instage3 = 0;
		instage4 = 0;
		instage5 = 0;
		instage6 = 0;
		instage7 = 0;
		instage8 = 0;
		instage9 = 0;
		instage10 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		clock = 0;
		instage1 = 32'hAAAA;
		instage2 = 32'hBBBB;
		instage3 = 4'hC;
		#1;
		clock = 1;
		instage1 = 32'hCCCC;
		instage2 = 32'hDDDD;
		instage3 = 4'hE;
		#1;
		clock = 0;
		instage1 = 4;
		instage2 = 8;
		instage3 = 12;
		#1;
		clock = 1;
		instage1 = 8;
		instage2 = 16;
		instage3 = 24;
		#1;
		clock = 0;
		instage1 = 16;
		instage2 = 32;
		instage3 = 48;
		#1;
		clock = 1;
		instage1 = 32;
		instage2 = 64;
		instage3 = 96;
	end
      
endmodule

