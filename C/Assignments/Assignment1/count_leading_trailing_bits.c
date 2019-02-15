#include <stdio.h>
#include "Assignment1.h"

int cnt_leading_set_bits(unsigned int num)
{
    unsigned int mask;
    int count; 
    mask = 1 << ((sizeof(int) * 8) - 1);
    count = 0;

    while((num & mask) != 0)
    {
        num = num << 1;
        count ++;
    }

    return count;
}

int cnt_leading_cleared_bits(unsigned int num)
{
    unsigned int mask;
    int count; 
    mask = 1 << ((sizeof(int) * 8) - 1);
    count = 0;

    while((num & mask) == 0)
    {
        num = num << 1;
        count ++;
    }

    return count;
}

int cnt_trailing_set_bits(unsigned int num)
{
    unsigned int mask;
    int count; 
    mask = 1;
    count = 0;

    while((num & mask) == 1)
    {
        num = num >> 1;
        count ++;
    }

    return count;
}

int cnt_trailing_cleared_bits(unsigned int num)
{
    unsigned int mask;
    int count; 
    mask = 1;
    count = 0;

    while((num & mask) == 0)
    {
        num = num >> 1;
        count ++;
    }

    return count;
}
