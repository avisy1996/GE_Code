#include "bitwise_op.h"

unsigned int count_trailing_clear_bits (unsigned int *s_num, unsigned int *count)
{
    unsigned int mask;    
    mask = 1;
    
	*count = 0;
    
    if (!integer_valid (*s_num)) {
		return FAILURE; 
	}
	
	while((*s_num & mask) == 0)
	{
	    *s_num = *s_num >> 1;
	    ++ *count;
	}

	return SUCCESS;
}
