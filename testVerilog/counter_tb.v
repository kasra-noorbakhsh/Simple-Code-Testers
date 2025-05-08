`timescale 1ns / 1ps

module counter_tb;
    reg clk;
    reg reset;
    wire [3:0] count;

    // Instantiate the counter module
    counter uut (
        .clk(clk),
        .reset(reset),
        .count(count)
    );

    // Generate clock signal
    always #5 clk = ~clk;

    initial begin
        // Initialize inputs
        clk = 0;
        reset = 1;

        // Wait for 10 ns and then de-assert reset
        #10 reset = 0;

        // Run the simulation for 100 ns
        #100;

        // Finish simulation
        $finish;
    end

    initial begin
        // Monitor the count
        $monitor("Time: %0dns, Count: %b", $time, count);
    end
endmodule

