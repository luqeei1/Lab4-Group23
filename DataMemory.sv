module DataMemory #(
    parameter WIDTH = 32
                


)(
    input logic [1:0]            address_mode,
    input logic [WIDTH-1:0]      A,
    input logic [WIDTH-1:0]      WD,
    input logic                  WE,
    output logic [WIDTH-1:0]     RD
    


);

    logic [7:0] ram_array [2**17:0];

always_ff @(posedge clk) 
    begin
    if (wen == 1'b1)
        ram_array[ALUout] <= WriteData;    // CHANGE TO single byte addressing
    else
        ram_array[ALUout] <= ram_array[ALUout];
    end 


assign ReadData = ram_array[ALUout];

endmodule




