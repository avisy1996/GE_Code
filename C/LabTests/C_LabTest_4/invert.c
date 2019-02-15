#include "bitwise.h"

int invert(int *snum, int pos, int n)
{
    unsigned int mask;
    
    if (!integer_valid (*snum)) {
		return FAILURE;
	}
	if ((!pos_validation (pos)) || (!pos_validation(n))) {
		return FAILURE;
	}
	if(!(n <= (pos + 1))) {
		return FAILURE;
	}
	
	mask = (~ (~ 0 << n)) << (pos + 1 - n);
	
	*snum = *snum ^ mask;

	return SUCCESS;
}

