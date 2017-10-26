`timescale 1ns / 1ps

module Controller(
    input [3:0] instruction_code ,
    input gtz,
    input clk,
    input reset,
    //
    output reg ma_mux_con,
    output reg [1:0] pc_mux_con,
    output reg a_mux_con,
    output reg md_enable,
    output reg ir_enable,
    output reg ma_enable,
    output reg pc_enable,
    output reg c_enable,
    output reg ac_enable,
    output reg rwn,
    output reg inca_enable,
    output reg [2:0] aluc
    );

    reg [4:0] state;
    initial begin
        state <= 0;
        pc_mux_con <= 0;
        a_mux_con <= 0;
        ma_mux_con <= 0;
        md_enable <= 0;
        ir_enable <= 0;
        ma_enable <= 0;
        c_enable <= 0;
        ac_enable <= 0;
        inca_enable <= 0;
		  pc_enable <= 0;
        aluc <= 3'b111;
        pc_mux_con <= 0;
        rwn <= 0;
    end
    always @(posedge reset) begin
        state <= 0;
    end
    always @(clk) begin
        case(state)
            0: begin
                ma_mux_con <= 0;
                md_enable <= 0;
                ir_enable <= 0;
                ma_enable <= 0;
                c_enable <= 0;
                ac_enable <= 0;
                inca_enable <= 0;
                aluc <= 3'b111;
                pc_mux_con <= 0;
					 pc_enable <= 0;
                rwn <= 0;
                //
                state <= 1;
                a_mux_con <= 0;
                ir_enable <= 1;
            end
            1: begin 
                ir_enable <= 0;
                inca_enable <= 1;
                pc_enable <= 1;
                case(instruction_code [3:1])
                    3'b000: begin // NOT
                        state <= 2;
                    end
                    3'b010: begin // JPA
                        if (gtz) begin
                            if (instruction_code [0]) begin
                                state <= 4;
                            end else begin
                                state <= 7;
                            end
                        end else begin
                            state <= 0;
                        end
                    end
                    3'b011: begin // INCA
                        state <= 3;
                    end
						  default: begin
						      state <= 8;
						  end
                endcase
            end
            2: begin
                inca_enable <= 0;
                pc_enable <= 0;
                aluc <= 0;
                ac_enable <= 1;
                state <= 0;
            end
            3: begin
                inca_enable <= 0;
                pc_enable <= 0;
                aluc <= 2;
                ac_enable <= 1;
                state <= 0;
            end
            4: begin
                inca_enable <= 0;
                pc_enable <= 0;
                ma_mux_con <= 0;
                ma_enable <= 1;
                state <= 5;
            end
            5: begin
                ma_enable <= 0;
                a_mux_con <= 1;
                rwn <= 1;
                md_enable <= 1;
                state <= 6;
            end
            6: begin
                md_enable <= 0;
                pc_mux_con <= 2;
                pc_enable <= 1;
                state <= 0;
            end
            7: begin
                inca_enable <= 0;
                pc_enable <= 0;
                pc_mux_con <= 1;
                pc_enable <= 1;
                state <= 0;
            end
            8: begin
                ma_mux_con <= 0;
                ma_enable <= 1;
                if (instruction_code [3:1] == 4) begin // If STA
                    if (instruction_code [0]) begin
                        state <= 9;
                    end else begin
                        state <= 11;
                    end
                end else begin
                    state <= 12;
                end
            end
            9: begin
                ma_enable <= 0;
                md_enable <= 1;
                state <= 10;
            end
            10: begin
                md_enable <= 0;
                ma_mux_con <= 1;
                state <= 11;
            end
            11: begin
                ma_enable <= 0;
                rwn <= 1;       // On neg edge, clear AC
                state <= 0;
            end
            12: begin
                md_enable <= 1;
                if (instruction_code[0]) begin // If AM
                    state <= 13;
                end else begin
                    if (instruction_code[3:1] == 1) begin // If ADC
                        state <= 15;
                    end else begin
                        state <= 16;
                    end
                end
            end
            13: begin
                ma_mux_con <= 1;
                ma_enable <= 1;
                state <= 14;
            end
            14: begin
                ma_enable <= 0;
                md_enable <= 1;
                if (instruction_code[3:1] == 1) begin // If ADC
                    state <= 15;
                end else begin
                    state <= 16;
                end
            end
            15: begin
                aluc <= 1;
                ac_enable <= 1;
                c_enable <= 1;
                state <= 0;
            end
            16: begin
                aluc <= 4;
                ac_enable <= 1;
                state <= 0;
            end
        endcase
    end
endmodule

module ProgramCounter(
    input [11:0] indata,
    input enable,
    //
    output [11:0] outdata
    );
    reg [11:0] data;
    initial begin
        data = 0;
    end
    //wire [11:0] w1, w2;
    //two_way_mux m1(
    //    .in1(indata),
    //    .in0(w1),
    //    .mode(enable),
    //    .out(data)
    //    );
    always @(*) begin
        if (enable) begin
            data <= indata;
        end
    end
    assign outdata = data;
    //assign w1 = data;
endmodule

module MemoryAddress(
    input [11:0] indata,
    input enable,
    //
    output [11:0] outdata
    );
    reg [11:0] data;
    initial begin
        data = 0;
    end
    always @(*) begin
        if (enable) begin
            data <= indata;
        end
    end
    assign outdata = data;
endmodule

module MemoryData(
    input [15:0] indata,
    input enable,
    //
    output [11:0] outdata1,
    output [15:0] outdata2
    );
    reg [15:0] data;
    initial begin
        data = 0;
    end
    wire [15:0] w1;
    always @(*) begin
        if (enable) begin
            data <= indata;
        end
    end
    assign outdata1 = data [11:0];
    assign outdata2 = data;
endmodule

module InstructionRegister(
    input [15:0] indata,
    input enable,
    //
    output [11:0] outdata,
    output [3:0] opcode
    );
    reg [15:0] data;
    initial begin
        data = 0;
    end
    always @(*) begin
        if (enable) begin
            data <= indata;
        end
    end
    assign outdata = data;
    assign outdata = data [11:0];
    assign opcode = data [15:12];
endmodule

module Accumulator(
    input [15:0] indata,
    input enable,
    input rwn,
    //
    output [15:0] outdata,
    output reg z
    );
    reg [15:0] data1;
    reg [15:0] data2;
    initial begin
        //data1 <= 0;
        //data2 <= 0;
    end
    always @(negedge enable) begin
        data2 <= indata;
    end
	 wire [11:0] w1, w2;
    two_way_mux m1(
        .in1(indata),
        .in0(w1),
        .mode(enable),
        .out(data)
        );
    //always @(data2) begin
    //    if (data2 == 0) begin
    //        z <= 1;
    //    end else begin
    //        z <= 0;
    //    end
    //end
    //always @(negedge rwn) begin
    //    data1 <= 0;
    //    data2 <= 0;
    //end
	 assign outdata = data2;
    //assign indata = data1;
endmodule

module ALU(
    input [15:0] a,
    input [15:0] b,
    input cin,
    input [2:0] aluc,
    //
    output reg [15:0] y,
    output reg cout
    );
	 initial begin
	     carry <= 0;
		  sum <= 0;
		  y <= 0;
		  cout <= 0;
	 end
    reg [16:0] sum;
    reg carry;
    always @(a or b or cin or aluc) begin
        case(aluc)
            0: begin // NOT
               y <= ~a; 
            end
            1: begin // ADD
               {carry, y} = a + b; 
            end
            2: begin // INCa
               y <= a + 1;
            end
            3: begin // Pb
               y <= b;
            end
        endcase
    end
endmodule

module Increment(
    input [11:0] in,
    input enable,
    //
    output reg [11:0] out
    );
    reg [11:0] storage;
    initial begin
        storage = 0;
    end
    always @(posedge enable) begin
        storage <= in;
        out = storage + 1;
    end
endmodule

module Carry(
    input in,
    input enable,
    //
    output reg out
    );
	 initial begin
		out = 0;
	 end
    always @(posedge enable) begin
        out = in;
    end
    always @(negedge enable) begin
        out = 0;
    end
endmodule

module two_way_mux(
    input [11:0] in1,
    input [11:0] in0,
    input mode,
    //
    output [11:0] out
    );
    assign out = (mode) ? in1 : in0;
endmodule 

module two_way_mux15(
    input [15:0] in1,
    input [15:0] in0,
    input mode,
    //
    output [15:0] out
    );
    assign out = (mode) ? in1 : in0;
endmodule 

module three_way_mux(
    input [11:0] in2,
    input [11:0] in1,
    input [11:0] in0,
    input [1:0] mode,
    //
    output reg [11:0] out
    );
    always @(mode or in0 or in1 or in2) begin
        case(mode)
            2'b00: out <= in0;
            2'b01: out <= in1;
            2'b10: out <= in2;
        endcase
    end
endmodule
