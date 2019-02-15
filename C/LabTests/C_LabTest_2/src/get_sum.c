#include <stdio.h>
#include "Calc_sum.h"

int get_sum (char *str_num, int *flag)
{
	int sum=0;
	if(*str_num == '\0') {
		return 0;
	}

	if((*str_num >= '0') && (*str_num <= '9')) {
		*flag = 1;
		sum = *str_num - '0';
	}
	
	return sum + get_sum ((str_num) + 1, flag);
}
