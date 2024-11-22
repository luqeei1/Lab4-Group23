#include "gtest/gtest.h"
#include "VsignExtend.h"  // Include the correct Verilated header for the module
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <memory>

class SignExtensionTest : public ::testing::Test
{
public:

protected:
    VsignExtend* dut; 

    virtual void SetUp() override {
        dut = new VsignExtend;
    }

    virtual void TearDown() override {
        delete dut;
    }

    void evaluate() {
        dut->eval(); 
    }
};

TEST_F(SignExtensionTest, PositiveImmediateNoSignExtension) {
    dut->ImmInput = 0x00000A;   
    dut->IMMSrc = 0b00;
    evaluate();
    EXPECT_EQ(dut->ImmExt, 0x0000000A); 
}

TEST_F(SignExtensionTest, NegativeImmediateWithSignExtension) {
    dut->ImmInput = 0xFFFFFA;   
    dut->IMMSrc = 0b00;
    evaluate();
    EXPECT_EQ(dut->ImmExt, 0xFFFFFFFA); 
}

TEST_F(SignExtensionTest, ImmSrcZeroNoSignExtension) {
    dut->ImmInput = 0x00000A;  
    dut->IMMSrc = 0b01;        
    evaluate();
    EXPECT_EQ(dut->ImmExt, 0x0000000A); 
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    auto res = RUN_ALL_TESTS();
    return res;
}
