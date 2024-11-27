module RegisterFile #(
    parameter   ADDRESS_WIDTH = 5,
                DATA_WIDTH = 32
) (
    input logic clk,
    input logic [ADDRESS_WIDTH-1:0]  AD1,
    input logic [ADDRESS_WIDTH-1:0]  AD2,
    input logic [ADDRESS_WIDTH-1:0]  AD3,
    input logic WE3,
    input logic [DATA_WIDTH-1:0]    WD3,
    output logic [DATA_WIDTH-1:0]   RD1,
    output logic [DATA_WIDTH-1:0]   RD2,
    output logic [DATA_WIDTH-1:0]   a0
);

logic [DATA_WIDTH-1:0] registerfile_array [2**ADDRESS_WIDTH-1:0];

// Asynchronous read ports
assign RD1 = registerfile_array[AD1];
assign RD2 = registerfile_array[AD2];

// Synchronous write port
always_ff @(posedge clk)
    begin   
        if (WE3)
            registerfile_array[AD3] <= WD3;
    end 

// Asynchronous read of register 0 for a0 output
assign a0 = registerfile_array[0];

endmodule