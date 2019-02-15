#include "bitwise.h"

int integer_valid(int num)
{
    if (num < 0 || num > INT_MAX) {
        return FAILURE;
    }
    return SUCCESS;
}
