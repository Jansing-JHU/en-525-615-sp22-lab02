#include "utilities.h"

void ex8(void)
{
    uint32_t in = 0xFF;
    uint32_t bitOp = 0x0;
    uint32_t out;

    for (uint32_t k = 0; k < 8; k++)
    {
        out = bitFlipping(in, k, 1);
        printf("Ex 8.1, 0x%02X, Bit Clear 0x%02X = 0x%08X\n", in, k, out);
    }
    
    uint32_t list[] = {0x3, 0x6, 0xC, 0x18, 0x30, 0x60, 0xC0};
    for (int k = 0; k < 6; k++)
    {
        out = bitFlipping(in, list[k], 2);
        printf("Ex 8.2, 0x%02X, Bit Mask Clear 0x%08X = 0x%08X\n", in, k, out);
    }

    in = 0xF0;
    for (uint32_t k = 0; k < 8; k++)
    {
        out = bitFlipping(in, k, 3);
        printf("Ex 8.3, 0x%02X, Bit Set 0x%02X = 0x%08X\n", in, k, out);
    }

    for (int k = 0; k < 6; k++)
    {
        out = bitFlipping(in, list[k], 4);
        printf("Ex 8.4, 0x%02X, Bit Mask Clear 0x%08X = 0x%08X\n", in, k, out);
    }
}