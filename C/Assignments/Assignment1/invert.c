#include <stdio.h>
#include "Assignment1.h"

int invert(unsigned int x, int p, int n)
{
    unsigned int mask;
    mask = (~ (~ 0 << n)) << (p + 1 - n);
    return x ^ mask;
}

