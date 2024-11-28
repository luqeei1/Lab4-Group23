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

// trial to see how finished we are
always_comb begin
    case
    ALUout = '0;
    EQ = 1'b0;
    
    if (ALUctrl == 1'b0)
        ALUout = ALUop1 + ALUop2;
    else if (ALUctrl == 1'b1)
        EQ = (ALUop1 - ALUop2) == {DATA_WIDTH{1'b0}};
    endcase
end

endmodule