#include "VMMemory.h"

VMMemory::VMMemory()
{
    memory_[0] = 0xfa & 0xff;
    memory_[1] = 0xfd & 0xff;
}

int VMMemory::fetch_byte(const u_int32_t& addr)
{
    if(addr < 0 || addr >= memory_.size())
    {
        return 0;
    }

    return memory_[addr];
}