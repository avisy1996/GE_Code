#include "bitwise_op.h"

unsigned int integer_valid(unsigned int num)
{
    if (num < 0 && num > UINT_MAX) {
        return FAILURE;
    }
    return SUCCESS;
}
