#include "bitwise_op.h"
unsigned int right_rotate_n_bits(unsigned *s_num, int n)
{
	unsigned int bit;
	if (!pos_validation (n)) {
		return FAILURE;
	}
	if (!integer_valid (*s_num)) {
		return FAILURE;
	}

    bit = *s_num << ((sizeof(int) * 8) - n);
    *s_num = *s_num >> n;
    *s_num = *s_num | bit;
    
	return SUCCESS;
}
