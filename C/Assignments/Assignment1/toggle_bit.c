#include <stdio.h>
#include "Assignment1.h"

int even_bit_toggle (unsigned int num) 
{
    unsigned int mask = -1;
    mask = mask / 3;

    return(num ^ mask);
}

int odd_bit_toggle (unsigned int num)     
{
    unsigned int mask = -1;
    mask = (mask / 3) * 2;

    return (num ^ mask);
}
