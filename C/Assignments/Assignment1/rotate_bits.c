#include <stdio.h>
#include "Assignment1.h"

int left_rotate_bits(unsigned num)
{
    unsigned int bit = num >> ((sizeof(int) * 8) - 1);
    num = num << 1;
    num = num | bit;
    return num;
}

int right_rotate_bits(unsigned num)
{
    unsigned int bit = num << ((sizeof(int) * 8) - 1);
    num = num >> 1;
    num = num | bit;
    return num;
}

int left_rotate_n_bits(unsigned num, int n)
{
    unsigned int bit = num >> ((sizeof(int) * 8) - n);
    num = num << n;
    num = num | bit;
    return num;
}

int right_rotate_n_bits(unsigned num, int n)
{
    unsigned int bit = num << ((sizeof(int) * 8) - n);
    num = num >> n;
    num = num | bit;
    return num;
}
