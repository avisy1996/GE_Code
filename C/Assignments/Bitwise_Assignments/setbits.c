#include "bitwise_op.h"

unsigned int setbits(unsigned  int  *s_num,  int  s_pos,  int  num,  unsigned  int *d_num)
{
    unsigned int bit1, bit2, ans;

    if ((!integer_valid (*s_num)) || (!integer_valid (*d_num))) {
		return FAILURE;
	}	
	if ((!pos_validation (s_pos)) || (!pos_validation (num))) {
		return FAILURE;
	}
	if(!(num <= (s_pos + 1))) {
		return FAILURE;
	}

		    
	bit1 = *s_num >> ((s_pos + 1) - num) & (~(~0 << num));
	bit2 = *d_num >> ((s_pos + 1) - num) & (~(~0 << num));

	ans = bit1 ^ bit2;

	ans = ans << ((s_pos + 1) - num);

	*s_num = *s_num ^ ans;

	return SUCCESS;

}
