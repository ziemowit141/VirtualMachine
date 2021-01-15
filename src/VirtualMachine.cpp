#include <iostream>

#include "VirtualMachine.h"
#include "constants.h"

VMGeneralPurposeRegister& VirtualMachine::reg(const int& r)
{
    return registers_[r & 0xf];
}

void VirtualMachine::crash()
{
    terminated_ = true;
    std::cout << "The virtual machine entered the erroneus state and is terminating";
    std::cout << "Register values at termination";
    for(auto& reg : registers_)
    {
        std::cout << reg.get_v() << std::endl;
    }
}

void VirtualMachine::interrupt(std::string interrupt)
{
    std::lock_guard<std::mutex> lg(interrupt_queue_mutex_);
    interrupt_queue_.push_back(interrupt);
}

std::string VirtualMachine::fetch_pending_interrupt()
{
    std::lock_guard<std::mutex> lg(interrupt_queue_mutex_);

    if(interrupt_queue_.empty())
        return ""; //some optional value?

    if(cr[CREG_INT_CONTROL] & 1 == 0)
    {
        for(auto& interrupt : interrupt_queue_)
        {
            auto non_maskable_interrupt = std::find(std::begin(interrupt_queue_), std::end(interrupt_queue_), interrupt);
            if(non_maskable_interrupt != interrupt_queue_.end())
            {
                return interrupt_queue_[non_maskable_interrupt];
            }
        }
        return "";
    }

    auto front = interrupt_queue_.front();
    interrupt_queue_.pop_back();
    return front;
}

bool VirtualMachine::process_interrupt_queue()
{
    auto interrupt = fetch_pending_interrupt();

    if(interrupt == "")
    {
        return true;
    }

    auto tmp_sp = sp_.get_v();
    for(auto rr : registers_)
    {
        for(auto r : rr.get_v());
    }
}