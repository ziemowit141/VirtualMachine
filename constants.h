#ifndef CONSTANTS
#define CONSTANTS

#include <cstdint>
const uint8_t NUM_OF_REGISTERS {16};
const uint8_t INSTR_HANDLER {0};
const uint8_t INSTR_LENGTH {1};
const uint8_t INT_MEMORY_ERROR {0};
const uint8_t INT_DIVISION_ERROR {1};
const uint8_t INT_GENERAL_ERROR {2};
const uint8_t INT_PIT {8};
const uint8_t INT_CONSOLE {9};
const uint8_t FLAG_ZF {0};
const uint8_t FLAG_CF {1};
const uint8_t MASKABLE_INTS[2] = {8, 9};

const uint16_t CREG_INT_FIRST {0x100};
const uint16_t CREG_INT_LAST {0x10f};
const uint16_t CREG_INT_CONTROL {0x110};

#endif //CONSTANTS