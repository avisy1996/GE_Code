#ifndef _STDIO_H
    #include <stdio.h>
    #include <string.h>
    #include "Assignment2.h"
#endif
int palindrome(char *str)
{
    int i, len, flag = 1;
    
    len = str_len (str); 
	for(i = 0; i < len; i++) {
		if(str[i] != str[len - i - 1]) {
			flag = 0;
			break;	
		} 
	}
	return flag;
}
