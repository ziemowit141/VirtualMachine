#include <array>
#include <cstdint>

class VMMemory{
public:
    VMMemory();
    int fetch_byte(const u_int32_t& addr);
    // bool store_byte();
    // int fetch_dword(int addr);
    // bool store_dword(int addr, int value);
    // int fetch_many(int addr, int size);
    // bool store_many(int addr, int array);

private:
    std::array<u_int8_t, 64*1024> memory_;
};