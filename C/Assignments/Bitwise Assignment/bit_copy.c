#include "bitwise_op.h"

unsigned int bit_copy(unsigned int *s_num, unsigned int *d_num, int num, int s_pos, int
        d_pos)
{
    unsigned int sbit, dbit, xbit;
    if(!pos_validation (s_pos) || !pos_validation (d_pos)) {
        return FAILURE;
    }
	if (!integer_valid (*s_num) || !integer_valid (*d_num)) {
		return FAILURE;
	}
	if (!(num < (s_pos + 1)) || !(num < (d_pos + 1))) {
		return FAILURE;
	}

    sbit = (*s_num >> (s_pos + 1 - num)) & (~ (~ 0 << num));
    dbit = (*d_num >> (d_pos + 1 - num)) & (~ (~ 0 << num));  
    xbit = sbit ^ dbit;

    *d_num = *d_num ^ (xbit << (d_pos + 1 - num));

    return SUCCESS;
}
