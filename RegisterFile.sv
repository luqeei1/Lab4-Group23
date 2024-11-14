module RegisterFile #(
    parameter   ADDRESS_WIDTH = 16,
                DATA_WIDTH = 32
) (
    input logic clk;
    input logic [ADDRESS_WIDTH-1:0]  AD1,
    input logic [ADDRESS_WIDTH-1:0]  AD2,
    input logic [ADDRESS_WIDTH-1:0]  AD3,
    input logic WE3,
    input logic [DATA_WIDTH-1:0]    WD3,
    output logic [DATA_WIDTH-1:0]   RD1,
    output logic [DATA_WIDTH-1:0]   RD2
    output logic [DATA_WIDTH-1:0]   a0;
);

logic [DATA_WIDTH-1:0] registerfile_array [2**ADDRESS_WIDTH-1:0];

// asynchronous logic. AD1 and AD2 stored in register_file array and at each clock edge, output as RD1 and RD2
RD1 <= registerfile_array[AD1];
RD2 <= registerfile_array[AD2];

always_ff @(posedge clk)
    begin   
        if (WE3 == 1'b1)
            registerfile_array[AD3] <= WD3;
    end 


    a0 <= registerfile_array[ADDRESS_WIDTH{1'b0}]

endmodule