#include "bitwise.h"

int getbits (int *snum, int pos, int n)
{
    unsigned int mask;
    
    if (!integer_valid (*snum)) {
		return FAILURE;
	}
	if ((!pos_validation (pos)) || (!pos_validation(n))) {
		return FAILURE;
	}
	if(!(n <= (NO_OF_BITS - pos))) {
		return FAILURE;
	}
	
	mask = (~ (~ 0 << n)) << pos;
	
	*snum = *snum &  mask;
	*snum = *snum >> pos;

	return SUCCESS;
}

