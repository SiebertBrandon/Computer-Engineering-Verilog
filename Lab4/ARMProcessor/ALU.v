`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:06:46 10/24/2016 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
   input [63:0] A,
   input [63:0] B,
   input [3:0] ALUc,
   output reg Z,
   output reg [63:0] C
   );

 always @(A or B or ALUc) begin
   Z = 0;
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
end

endmodule
