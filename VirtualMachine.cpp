#include "VirtualMachine.h"

VMGeneralPurposeRegister& VirtualMachine::reg(const int& r)
{
    return registers_[r & 0xf];
}