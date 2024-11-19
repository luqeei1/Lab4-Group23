module signExtend #(
    parameter DATA_WIDTH = 32
) (
    input logic [1:0] IMMSrc,
    input logic [31:7] ImmInput,
    output logic [DATA_WIDTH-1:0] ImmExt 
);
    always_comb begin
        case (IMMSrc)
            2'b00: ImmExt = {{20{ImmInput[31]}}, ImmInput[31:20]};
            2'b01: ImmExt = {{20{ImmInput[31]}}, ImmInput[31:25], ImmInput[11:7]};
            2'b10: ImmExt = {{20{ImmInput[31]}}, ImmInput[7], ImmInput[30:25], ImmInput[11:8], 1'b0};
        endcase
    end
endmodule
