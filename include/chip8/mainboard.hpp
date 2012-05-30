#ifndef _CPU_H_
#define _CPU_H_

#include <array>
#include "types.h"

namespace mainboard
{

class cpu
{
public:
    uint8_t delay_timer;
    uint8_t sound_timer;
    uint8_t stack_pointer;
    uint16_t programm_counter;
    uint16_t i_register;
    std::array<uint8_t, 16> general_regs;
};

}

#endif
