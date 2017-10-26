`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:40:13 09/27/2016 
// Design Name: 
// Module Name:    lookahead64 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module lookahead64(
    input [63:0] a,
    input [63:0] b,
    input [63:0] sum
    );
	 assign CARRY0 = 1'b0;
	 
	lookahead func1  (a[1:0],b[1:0], CARRY0, sum[1:0], CARRY1);
	lookahead func2  (a[3:2], b[3:2], CARRY1, sum[3:2], CARRY2);
	lookahead func3  (a[5:4], b[5:4], CARRY2, sum[5:4], CARRY3);
	lookahead func4  (a[7:6], b[7:6], CARRY3, sum[7:6], CARRY4);
	lookahead func5  (a[9:8], b[9:8], CARRY4, sum[9:8], CARRY5);
	lookahead func6  (a[11:10], b[11:10], CARRY5, sum[11:10], CARRY6);
	lookahead func7  (a[13:12], b[13:12], CARRY6, sum[13:12], CARRY7);
	lookahead func8  (a[15:14], b[15:14], CARRY7, sum[15:14], CARRY8);
	lookahead func9  (a[17:16], b[17:16], CARRY8, sum[17:16], CARRY9);
	lookahead func10 (a[19:18], b[19:18], CARRY9, sum[19:18], CARRY10);
	lookahead func11 (a[21:20], b[21:20], CARRY10, sum[21:20], CARRY11);
	lookahead func12 (a[23:22], b[23:22], CARRY11, sum[23:22], CARRY12);
	lookahead func13 (a[25:24], b[25:24], CARRY12, sum[25:24], CARRY13);
	lookahead func14 (a[27:26], b[27:26], CARRY13, sum[27:26], CARRY14);
	lookahead func15 (a[29:28], b[29:28], CARRY14, sum[29:28], CARRY15);
	lookahead func16 (a[31:30], b[31:30], CARRY15, sum[31:30], CARRY16);
	lookahead func17 (a[33:32], b[33:32], CARRY16, sum[33:32], CARRY17);
	lookahead func18 (a[35:34], b[35:34], CARRY17, sum[35:34], CARRY18);
	lookahead func19 (a[37:36], b[37:36], CARRY18, sum[37:36], CARRY19);
	lookahead func20 (a[39:38], b[39:38], CARRY19, sum[39:38], CARRY20);
	lookahead func21 (a[41:40], b[41:40], CARRY20, sum[41:40], CARRY21);
	lookahead func22 (a[43:42], b[43:42], CARRY21, sum[43:42], CARRY22);
	lookahead func23 (a[45:44], b[45:44], CARRY22, sum[45:44], CARRY23);
	lookahead func24 (a[47:46], b[47:46], CARRY23, sum[47:46], CARRY24);
	lookahead func25 (a[49:48], b[49:48], CARRY24, sum[49:48], CARRY25);
	lookahead func26 (a[51:50], b[51:50], CARRY25, sum[51:50], CARRY26);
	lookahead func27 (a[53:52], b[53:52], CARRY26, sum[53:52], CARRY27);
	lookahead func28 (a[55:54], b[55:54], CARRY27, sum[55:54], CARRY28);
	lookahead func29 (a[57:56], b[57:56], CARRY28, sum[57:56], CARRY29);
	lookahead func30 (a[59:58], b[59:58], CARRY29, sum[59:58], CARRY30);
	lookahead func31 (a[61:60], b[61:60], CARRY30, sum[61:60], CARRY31);
	lookahead func32 (a[63:62], b[63:62], CARRY31, sum[63:62], CARRY32);
endmodule
