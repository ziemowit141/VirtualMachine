#ifndef VIRTUAL_MACHINE
#define VIRTUAL_MACHINE

#include <array>

#include "constants.h"
#include "VMGeneralPurposeRegisters.h"

class VirtualMachine 
{
public:
    VMGeneralPurposeRegister& reg(const int& r);

private:
    std::array<VMGeneralPurposeRegister, NUM_OF_REGISTERS> registers_;
};

#endif //VIRTUAL_MACHINE