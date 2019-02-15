#include "bitwise.h"

void display_binary_num(int num)
{
    unsigned int i;
    
    for (i = (1 << MSB_BIT); i > LSB_BIT; i = (i>>1))
        if(num & i)
            printf("1");
        else
            printf("0");

	printf ("\n");
}
