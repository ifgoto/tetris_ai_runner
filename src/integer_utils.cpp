﻿
#include <cstddef>
#include <cstdint>

#if __SSE4__
#   include <nmmintrin.h>
#endif

namespace zzz
{
    size_t BitCount(uint32_t n)
    {
#if __SSE4__
        return size_t(_mm_popcnt_u32(n));
#else
        // HD, Figure 5-2
        n = n - ((n >> 1) & 0x55555555);
        n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
        n = (n + (n >> 4)) & 0x0f0f0f0f;
        n = n + (n >> 8);
        n = n + (n >> 16);
        return n & 0x3f;
#endif
    }

    size_t NumberOfTrailingZeros(uint32_t i)
    {
        // HD, Figure 5-14
        uint32_t y;
        if(i == 0)
        {
            return 32;
        }
        size_t n = 31;
        y = i << 16;
        if(y != 0)
        {
            n = n - 16; i = y;
        }
        y = i << 8;
        if(y != 0)
        {
            n = n - 8; i = y;
        }
        y = i << 4;
        if(y != 0)
        {
            n = n - 4; i = y;
        }
        y = i << 2;
        if(y != 0)
        {
            n = n - 2; i = y;
        }
        return n - ((i << 1) >> 31);
    }
}