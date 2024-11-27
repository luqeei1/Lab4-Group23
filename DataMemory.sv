module DataMemory #(
    ADDRESS_WIDTH = 32
    DATA_WIDTH = 32


)(
    input logic wen,
    input logic [ADDRESS_WIDTH-1:0] ALUout,
    input logic [ADDRESS_WIDTH-1:0] WriteData,
    output logic [ADDRESS_WIDTH-1:0] ReadData


);

logic [DATA_WIDTH - 1:0] ram_array [2**ADDRESS_WIDTH-1:0];

always_ff @(posedge clk) begin
    if (wen == 1'b1)
        ram_array[ALUout] <= WriteData;
    else
        ram_array[ALUout] <= ram_array[ALUout];


assign ReadData = ram_array[ALUout];

endmodule




