#include "bitwise.h"

int my_atoi(char *str)
{
    long res = 0;
	long sign = 1;
    
	if (*str == '+') {
        sign = 1;
        str ++;
    }
    if (*str == '-') {
        sign = -1;
        str ++;
	} 

    while (*str != '\n')
    {
        if(*str >= '0' && *str <= '9') {
            res = res * 10 + (*str - '0');
        }
        else {
            return -1;
        }
        str ++;
    }
    res = res * sign;
	printf ("%d\n", res);
	if (res < 0 || res > INT_MAX) {
		return -1;
    } 

    return res;
}
