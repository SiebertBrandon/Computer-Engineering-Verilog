`timescale 1ns / 1ps

module lookahead(
    input [1:0] a,
    input [1:0] b,
	 input c_in,
    output [1:0] sum,
    output c_out
    );
	 
	wire [1:0] p;
	wire [1:0] g;
	
	
	
	assign g[0] = a[0]&b[0];
	assign g[1] = a[1]&b[1];
	assign p[0] = a[0]^b[0];
	assign p[1] = a[1]^b[1];
	
	assign c_out = g[0] + p[0]&c_in;
	
	assign sum[0] = p[0]^c_in;
	assign sum[1] = p[1]^c_out;


endmodule

