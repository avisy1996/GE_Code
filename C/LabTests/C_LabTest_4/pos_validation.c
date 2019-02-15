#include "bitwise.h"

int pos_validation (int pos)
{
	if (pos < NO_OF_BITS && pos >= LSB_BIT) {
		return SUCCESS;
	}
	return FAILURE;
}
