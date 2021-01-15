#ifndef VIRTUAL_MACHINE
#define VIRTUAL_MACHINE

#include <array>
#include <queue>
#include <string>
#include <mutex>

#include "constants.h"
#include "VMGeneralPurposeRegisters.h"

class VirtualMachine
{
public:
    VMGeneralPurposeRegister& reg(const int& r);
    void crash();
    void interrupt(std::string interrupt);

private:
    std::string fetch_pending_interrupt();
    bool process_interrupt_queue();

    std::array<VMGeneralPurposeRegister, NUM_OF_REGISTERS> registers_;
    VMGeneralPurposeRegister sp_;
    std::array<int, 2> cr;
    std::vector<std::string> interrupt_queue_;
    std::mutex interrupt_queue_mutex_;
    int fr_;
    bool terminated_;

};

#endif //VIRTUAL_MACHINE