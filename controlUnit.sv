module controlUnit #(
) (
    input logic [6:0] op,
    input logic [14:12] funct3,
    input logic funct7,
    input logic zero,
    output logic PCSrc,
    output logic ResultSrc,
    output logic MemWrite,
    output logic [2:0] ALUControl,
    output logic ALUSrc,
    output logic [1:0] IMMSrc,
    output logic RegWrite
);
    logic branch;
    logic [1:0] ALUOp; 
    always_comb begin
        case (op)
            7'b0000011: RegWrite = 1'b1; ImmSrc = 2'b00; ALUSrc = 1'b1; MemWrite = 1'b0; ResultSrc = 1'b1; Branch = 1'b0; ALUOp = 2'b00; //lw
            7'b0100011: RegWrite = 1'b0; ImmSrc = 2'b01; ALUSrc = 1'b1; MemWrite = 1'b1; ResultSrc = 1'b0; Branch = 1'b0; ALUOp = 2'b00; //sw
            7'b0110011: RegWrite = 1'b1; ImmSrc = 2'b00; ALUSrc = 1'b0; MemWrite = 1'b0; ResultSrc = 1'b0; Branch = 1'b0; ALUOp = 2'b10; //R-type
            7'b1100011: RegWrite = 1'b0; ImmSrc = 2'b10; ALUSrc = 1'b0; MemWrite = 1'b0; ResultSrc = 1'b0; Branch = 1'b1; ALUOp = 2'b01; //B-type
            default: RegWrite = 1'b0; ImmSrc = 2'b00; ALUSrc = 1'b1; MemWrite = 1'b0; ResultSrc = 1'b1; Branch = 1'b0; ALUOp = 2'b11; //Invalid
        endcase
    PCSrc = branch && zero
    end

    ALUDecoder alu_decoder (
        .ALUOp(ALUOp),
        .op(op[5]),
        .funct3(funct3),
        .funct7(funct7),
        .ALUControl(ALUControl)
    );

endmodule
