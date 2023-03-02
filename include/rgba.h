#ifndef RGBA_H_
#define RGBA_H_
#include <cstdint>

struct rgba
{
    rgba() = default;
    rgba(unsigned char _r, unsigned char _g, unsigned _b, unsigned char _a)
    {
        r = _r;
        g = _g;
        b = _b;
        a = _a;
    }

    union 
    {
        uint32_t pixels=0x00000000;
        struct 
        {
            unsigned char r;
            unsigned char g;
            unsigned char b;
            unsigned char a;
        };
    };
};

#endif