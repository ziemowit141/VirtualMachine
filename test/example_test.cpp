#include "gtest/gtest.h"
#include "VMMemory.h"

TEST(VMMemory, fetch_byte)
{
    VMMemory vmm;
    EXPECT_EQ(vmm.fetch_byte(0x1), 0xfd);
}