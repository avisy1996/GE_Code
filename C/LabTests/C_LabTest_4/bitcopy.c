#include "bitwise.h"

int bitcopy(int *snum, int *dnum, int n, int spos, int dpos)
{
    unsigned int sbit, dbit, xbit;
    if(!pos_validation (spos) || !pos_validation (dpos) || !pos_validation
			(n)) {
        return FAILURE;
    }
	if (!integer_valid (*snum) || !integer_valid (*dnum)) {
		return FAILURE;
	}
	if (!(n <= (spos + 1)) || !(n <= (dpos + 1))) {
		return FAILURE;
	}

    sbit = (*snum >> (spos + 1 - n)) & (~ (~ 0 << n));
    dbit = (*dnum >> (dpos + 1 - n)) & (~ (~ 0 << n));  
    xbit = sbit ^ dbit;

    *dnum = *dnum ^ (xbit << (dpos + 1 - n));

    return SUCCESS;
}
