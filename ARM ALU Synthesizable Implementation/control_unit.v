`timescale 1ns / 1ps
module control_unit( 
	input [10:0] opcode,
   output reg reg2loc,
   output reg  branch,
   output reg memread,
   output reg memtoreg,
   output reg [1:0] aluop,
   output reg memwrite,
   output reg alusrc,
   output reg regwrite
   );
	always @* begin
		casex(opcode) //R- ADD
			11'b10001011000: 
			begin
			
				reg2loc = 1'b0;
				 alusrc = 1'b0;
				 memtoreg= 1'b0;
				 regwrite = 1'b1;
				 memread = 1'b0;
				 memwrite = 1'b0;
				 branch = 1'b0;
				 aluop = 2'b10;
			
			end
			
			11'b11001011000:  //R-SUB
			begin
			
				reg2loc = 0;
				alusrc = 0;
				memtoreg= 0;
				regwrite = 1;
				memread = 0;
				memwrite = 0;
				branch = 0;
				aluop = 2'b10;
			
			end
		
			11'b10001010000: //R-AND 
			begin
			
				reg2loc = 0;
				alusrc = 0;
				memtoreg= 0;
				regwrite = 1;
				memread = 0;
				memwrite = 0;
				branch = 0;
				aluop = 2'b10;
			
			end
			
			11'b10101010000: //R-ORR 
			begin
			
				reg2loc = 0;
				alusrc = 0;
				memtoreg= 0;
				regwrite = 1;
				memread = 0;
				memwrite = 0;
				branch = 0;
				aluop = 2'b10;
			
			end
			
			11'b11111000010:  //LDUR
			begin
			
				reg2loc = 0;
				alusrc = 1;
				memtoreg= 1;
				regwrite = 1;
				memread = 1;
				memwrite = 0;
				branch = 0;
				aluop = 2'b00;
			
			end
			
			11'b11111000000:  //STUR
			begin
			
				reg2loc = 1;
				alusrc = 1;
				memtoreg= 0;
				regwrite = 0;
				memread = 0;
				memwrite = 1;
				branch = 0;
				aluop = 2'b00;
			
			end
			
			11'b10110100xxx: //CBZ
			begin
			
				reg2loc = 1;
				alusrc = 0;
				memtoreg= 0;
				regwrite = 0;
				memread = 0;
				memwrite = 0;
				branch = 1;
				aluop = 2'b01;
			
			end
		endcase
	end
endmodule
