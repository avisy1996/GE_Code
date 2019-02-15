#include "bitwise_op.h"

unsigned int bit_swap_num(unsigned int *d_num, unsigned int *s_num, int s_pos,
        int d_pos)
{
    unsigned int temp_num, dbit, sbit;

	if (!pos_validation (s_pos) || !pos_validation (d_pos)) {
        return FAILURE;
    }
	if (!integer_valid (*s_num) || !integer_valid (*d_num)) {
		return FAILURE;
	}
    sbit = (*s_num >> s_pos) & 1;
    dbit = (*d_num >> d_pos) & 1;

    temp_num = sbit ^ dbit;
    *s_num = *s_num ^ (temp_num << s_pos);
    *d_num = *d_num ^ (temp_num << d_pos);

    return SUCCESS;
}

