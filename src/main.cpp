#include <iostream>
#include "VirtualMachine.h"

int main()
{
    VirtualMachine vm;
    VMGeneralPurposeRegister& reg_10 = vm.reg(10);
    std::cout << reg_10.get_v() << std::endl;
    return 0;
}