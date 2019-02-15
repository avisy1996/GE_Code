#include "bitwise_op.h"

unsigned int count_leading_set_bits(unsigned int *s_num, unsigned int *count)
{
    unsigned int mask;
	*count = 0;
    
    if (!integer_valid (*s_num)) {
		return FAILURE;
	}

	mask = 1 << ((sizeof(int) * 8) - 1);
	
	while((*s_num & mask) != 0)
    {
        *s_num = *s_num << 1;
        ++ *count;
    }

    return SUCCESS;
}
