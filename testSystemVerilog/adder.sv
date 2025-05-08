`timescale 1ns/100ps
module CLAdder(input[7:0]dataA,dataB, input carryIn, output[7:0]dataOut , output carryOut);
    wire [8:0] help;
    assign #43.1 help = dataA + dataB + carryIn;
    assign dataOut = help[7:0];
    assign #36.2 carryOut = help[8];
endmodule
