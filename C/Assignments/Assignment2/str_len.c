#ifndef _STDIO_H
    #include <stdio.h>
    #include "Assignment2.h"
#endif

int str_len(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count ++;
		str++;
	}
	return count;
}
