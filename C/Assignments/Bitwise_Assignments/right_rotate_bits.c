#include "bitwise_op.h"

unsigned int right_rotate_bits(unsigned *s_num)
{
    unsigned int bit;
	if (!integer_valid (*s_num)) {
		return FAILURE;
	}

	bit = *s_num << ((sizeof(int) * 8) - 1);
    *s_num = *s_num >> 1;
    *s_num = *s_num | bit;
    
	return SUCCESS;
}
