#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges

  Verilated::commandArgs(argc, argv);
  Vtopmod* top = new Vtopmod;
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("topmod.vcd");

  if (vbdOpen() !=1) return(-1);
  vbdHeader("L4: Reduced RiscV");


  top->clk = 1;
  top->rst = 0;
  top->PCSrc = 0;
  top->ImmOpp = 5;


  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    top->rst = simcyc > 2;
    top->PCsrc = simcyc > 20



    if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
        exit(0);
  }

  vbdClose();     
  tfp->close(); 
  exit(0);
}