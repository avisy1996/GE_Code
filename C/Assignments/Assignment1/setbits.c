#include <stdio.h>

int setbits(unsigned int x, int p, int n, unsigned int y)
{
    unsigned int mask;

    mask = y & (~ (~ 0 << n));
    mask = mask << (p + 1 - n);
    x = x & (~ mask);
    x = x | mask;

    return x;
}
