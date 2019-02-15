#include "bitwise_op.h"
#include <limits.h>

unsigned int invert(unsigned int *s_num, int s_pos, int num)
{
    unsigned int mask;
    
    if (!integer_valid (*s_num)) {
		return FAILURE;
	}
	if ((!pos_validation (s_pos)) || (!pos_validation(num))) {
		return FAILURE;
	}
	
	mask = (~ (~ 0 << num)) << (s_pos + 1 - num);
	
	*s_num = *s_num ^ mask;

	return SUCCESS;
}

