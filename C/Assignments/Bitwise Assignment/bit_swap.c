#include "bitwise_op.h"

unsigned int bit_swap(unsigned int *s_num, int s_pos, int d_pos)
{
    unsigned int temp_num, bit1, bit2;
    if (!pos_validation (s_pos)|| !pos_validation (d_pos)) {
        return FAILURE;
    }
	if (!integer_valid (*s_num)) {
		return FAILURE;
	}

    bit1 = (temp_num >> s_pos) & 1;
    bit2 = (temp_num >> d_pos) & 1;
    temp_num = bit1 ^ bit2;
    *s_num = *s_num ^ (temp_num << s_pos | temp_num << d_pos);

    return SUCCESS;
}


