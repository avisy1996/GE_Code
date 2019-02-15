#include "bitwise_op.h"

unsigned int count_clear_bits(unsigned int *s_num, unsigned int *count)
{
    int i;
    i = 0;
	*count = 0;
    if (!integer_valid (*s_num)) {
		return FAILURE;
	}

	while (*s_num)
    {
        if((*s_num & 1) == 0) {
        	*count ++;
		}
        i ++;
        *s_num = *s_num >> 1;
    }
    *count = (sizeof(int) * 8) - i + *count;

	return SUCCESS;
}
