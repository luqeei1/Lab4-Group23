module ALU #(
    parameter   DATA_WIDTH = 8,
                CTRLSIG = 1
) (
    input logic [CTRLSIG-1:0]   ALUctrl,
    input logic [DATA_WIDTH-1:0]    ALUop1,
    input logic [DATA_WIDTH-1:0]    ALUop2,
    output logic [DATA_WIDTH-1:0]   ALUout,
    output logic EQ
);

if (ALUctrl == 1'b0)
    SUM <= ALUOp1 + ALUOp2;
if (ALUctrl == 1'b1)
    if (ALUop1 - ALUop2==[DATA_WIDTH{1'b0}])
        EQ <= 1'b1;
    else 
        EQ <= 1'b0;

endmodule 