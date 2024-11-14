module pc #(
    parameter WIDTH = 32
)(
    input logic     rst,
    input logic     clk,
    input logic     PCSrc,
    input logic     [WIDTH-1:0] ImmOp,
    output logic    [WIDTH-1:0] PC_curr
);

logic [WIDTH-1:0] PC_incr;
logic [WIDTH-1:0] PCTarget;
logic [WIDTH-1:0] PCNext;

always_comb begin
    PC_incr = PC_curr + 4;
    PCTarget = PC_curr + ImmOp;
    PCNext = PCSrc ? PCTarget : PC_incr;
end

always_ff @ (posedge clk or posedge rst) begin
    if(rst) PC_curr <= 32'h1000;
    else PC_curr <= PCNext;
end

endmodule
