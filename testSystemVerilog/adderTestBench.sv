`timescale 1ns/1ns
module adder_tb();
    logic [7:0]aa = 8'd0;
    logic [7:0]bb = 8'd0;
    logic carryin = 0;
    logic carryout;
    wire [7:0]ww;
  CLAdder CUT(.dataA(aa),.dataB(bb),.dataOut(ww),.carryIn(carryin),.carryOut(carryout));
initial begin
 #43
 #100 aa = 8'd40;
 #100 bb = 8'd57;
 #100 aa = 8'd210;
 #100 bb = 8'd30;
 #100 $stop;
end
endmodule
