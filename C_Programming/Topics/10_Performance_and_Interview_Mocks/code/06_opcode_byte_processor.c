#include <assert.h>
#include <stdint.h>

/*
 * Byte format:
 * [ bit7 bit6 | bit5 bit4 bit3 bit2 bit1 bit0 ]
 *    opcode              data (6 bits)
 *
 * Opcode behavior:
 * 00 -> no change
 * 01 -> swap bit0 and bit1 of data
 * 10 -> toggle all data bits
 * 11 -> clear all data bits
 */
uint8_t process_data(uint8_t input)
{
    uint8_t opcode = input & 0xC0;
    uint8_t data = input & 0x3F;

    switch (opcode)
    {
    case 0x00:
        break;

    case 0x40:
        data = (uint8_t)((data & (uint8_t)~0x03) | ((data & 0x01) << 1) | ((data & 0x02) >> 1));
        break;

    case 0x80:
        data = (uint8_t)((~data) & 0x3F);
        break;

    case 0xC0:
        data = 0x00;
        break;
    }

    return (uint8_t)(opcode | data);
}

int main(void)
{
    assert(0b00000001 == process_data(0b00000001));
    assert(0b01000010 == process_data(0b01000001));
    assert(0b10110100 == process_data(0b10001011));
    assert(0b11000000 == process_data(0b11000001));

    /* Extra checks */
    assert(0b01000001 == process_data(0b01000010));
    assert(0b10000000 == process_data(0b10111111));
    assert(0b11000000 == process_data(0b11111111));

    return 0;
}
