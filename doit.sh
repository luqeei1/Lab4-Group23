#!/bin/bash

# Translate Verilog -> C++ including testbench
verilator   -Wall --trace \
            -cc signExtend.sv \
            --exe signext_test.cpp \
            --prefix "VsignExtend" \
            -o VsignExtend \
            -LDFLAGS "-lgtest -lgtest_main -lpthread"

# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f VsignExtend.mk

# Run executable simulation file
./obj_dir/VsignExtend