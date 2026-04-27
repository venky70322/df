`timescale 1ns/1ps

module tb;

reg clk;
reg rst;
reg d;
wire q;

dff dut (
    .clk(clk),
    .rst(rst),
    .d(d),
    .q(q)
);

always #5 clk = ~clk;

initial begin
    $dumpfile("dff.vcd");
    $dumpvars(0,tb);

    clk = 0;
    rst = 1;
    d   = 0;

    #10 rst = 0;
    #10 d = 1;
    #10 d = 0;
    #10 d = 1;
    #10 rst = 1;
    #10 rst = 0;
    #10 d = 0;
    #20 $finish;
end

always @(posedge clk) begin
    $display("time=%0t d=%b q=%b", $time, d, q);
end

endmodule
