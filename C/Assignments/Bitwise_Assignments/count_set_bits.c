#include "bitwise_op.h"

unsigned int count_set_bits (unsigned int *s_num, unsigned int *count)
{
    *count = 0;

    if (!integer_valid (*s_num)) {
		return FAILURE;
	}
	
	while (*s_num)
	{
	    *s_num = *s_num & (*s_num - 1);
	    ++ *count;
	}

    return SUCCESS;
}

