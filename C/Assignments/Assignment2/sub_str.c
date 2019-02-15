#ifdef _STDIO_H
    #include <stdio.h>
    #include "Assignment2.h"
#endif

char *sub_str(char *str, char *substr)
{
	char *temp;
	while (*str != '\0')
	{
		temp = str;
		while(*str == *substr)
		{
			str ++;
			substr ++;
		}
		if(*substr == '\0') {
			return temp;
		}
		else {
			str = temp;
		}
		str ++;
	}
	return 0;
}
