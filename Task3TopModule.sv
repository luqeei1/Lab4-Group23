module top #(
    parameter A_WIDTH = 32,
              D_WIDTH = 32
)(
    input logic [D_WIDTH-1:0] addr,
    input logic EQ,
    output logic PCSrc,
    output logic [2:0] ALUControl,
    output logic ALUSrc,
    output logic RegWrite
    output logic [D_WIDTH-1:0] ImmOp
);

    logic [1:0] ImmScr;

rom instrRom (
    .addr (addr)
    .instr (instr)
);

controlUnit cntrlUnit (
    .op (instr[6:0]),
    .zero (EQ),
    .PCSrc (PCSrc),
    .ALUControl (ALUControl),
    .ALUSrc (ALUSrc),
    .IMMSrc (ImmSrc),
    .RegWrite (RegWrite)
);

signExtend signExt (
    .IMMSrc (ImmSrc),
    .ImmInput (instr),
    .ImmExt (ImmOp)
);
endmodule
