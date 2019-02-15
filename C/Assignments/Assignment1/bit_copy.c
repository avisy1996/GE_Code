#include <stdio.h>
#include "Assignment1.h"

int bit_copy(unsigned int snum, unsigned int dnum, int n, int s, int d)
{
    unsigned int res;
    unsigned int sbit, dbit, xbit;

    sbit = (snum >> (s + 1 - n)) & (~ (~ 0 << n));
    dbit = (dnum >> (d + 1 - n)) & (~ (~ 0 << n));  
    xbit = sbit ^ dbit;

    res = dnum ^ (xbit << (d + 1 - n));

    return res;
}
