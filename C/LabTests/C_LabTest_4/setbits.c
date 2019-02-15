#include "bitwise.h"

int setbits(int *snum, int *dnum, int pos, int n)
{
    unsigned int bit1, bit2, ans;

    if ((!integer_valid (*snum)) || (!integer_valid (*dnum))) {
		return FAILURE;
	}	
	if ((!pos_validation (pos)) || (!pos_validation (n))) {
		return FAILURE;
	}
	if(!(n <= (pos + 1))) {
		return FAILURE;
	}
		    
	bit1 = *snum >> ((pos + 1) - n) & (~(~0 << n));
	bit2 = *dnum >> ((pos + 1) - n) & (~(~0 << n));

	ans = bit1 ^ bit2;

	ans = ans << ((pos + 1) - n);

	*snum = *snum ^ ans;

	return SUCCESS;
}
