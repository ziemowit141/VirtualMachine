#ifndef VM_GENERAL_PURPOSE_REGISTER
#define VM_GENERAL_PURPOSE_REGISTER
#include <iostream>

class VMGeneralPurposeRegister
{
public:
    VMGeneralPurposeRegister() : v(0) {}
    int get_v() {return v;}
private:
    int v;
};

#endif //VM_GENERAL_PURPOSE_REGISTER