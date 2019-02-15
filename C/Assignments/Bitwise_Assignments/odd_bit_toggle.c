#include "bitwise_op.h"

unsigned int odd_bit_toggle (unsigned int *s_num)     
{
    unsigned int mask = -1;

	if (!integer_valid (*s_num)) {
		return FAILURE;
	}
    
	mask = (mask / 3) * 2;
    *s_num = *s_num ^ mask;

	return SUCCESS;
}
