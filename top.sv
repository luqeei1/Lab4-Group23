module top#(
    parameter WIDTH = 32;
)(
    input logic clk,
    input logic rst,
    output logic [WIDTH-1:0] a0
);

    // PC
    logic  [WIDTH-1:0] ImmOp;
    logic  [WIDTH-1:0] PC_curr;

    // instruction memory
    logic [15:0] addr;
    logic [WIDTH-1:0] instr;

    // sign extend
    logic [1:0] ImmSrc;

    // Register File
    logic [15:0]  A1;
    logic [15:0]  A2;
    logic [15:0]  A3;
    logic WE3;
    logic [DATA_WIDTH-1:0] RD1;
    logic [DATA_WIDTH-1:0] RD2;


    // Control Unit
    logic  PCSrc;
    logic  ALUctrl;
    logic  ALUSrc;
    logic  RegWrite;

    // ALU
    logic  [WIDTH-1:0] ALUResult;
    logic  Zero;
    logic  SrcA;
    logic  SrcB;


    pc program_counter (
        .clk(clk),
        .rst(rst),
        .PCSrc(PCSrc),
        .ImmOp(ImmOp),
        .PC_curr(addr)
    );

    RegisterFile regfile (
        .clk(clk),
        .AD1(A1),
        .AD2(A2),
        .AD3(A3),
        .WE3(WE3),
        .WD3(ALUResult),
        .RD1(RD1),
        .RD2(RD2),
        .a0(a0)
    );

    instructionMemory instruction_memory (
        .addr(addr),
        .instr(instr)
    );

    controlUnit control_unit (
        .op(instr),
        .PCSrc(PCSrc),
        .ALUControl(ALUctrl),
        .IMMSrc(ImmSrc),
        .RegWrite(RegWrite),
        .ALUSrc(ALUSrc),
        .zero(Zero)
    );

    signExtend sign_extend (
        .IMMSrc(ImmSrc),
        .ImmExt(ImmOp),
        .ImmInput(instr)
    );

    ALU ALU (
        .EQ(Zero),
        .ALUout(ALUResult),
        .ALUop1(SrcA),
        .ALUop2(SrcB)
    );

endmodule