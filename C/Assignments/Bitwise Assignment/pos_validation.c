#include "bitwise_op.h"

unsigned int pos_validation (unsigned int s_pos)
{
	if (s_pos < NO_OF_BITS && s_pos >= LSB_BIT) {
		return SUCCESS;
	}
	return FAILURE;
}
