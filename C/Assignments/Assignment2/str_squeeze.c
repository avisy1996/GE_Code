#ifndef _STDIO_H
    #include <stdio.h>
    #include <string.h>
    #include "Assignment2.h"
#endif

char *str_squeeze(char *str)
{
	int i,j,len,len1;
	len = str_len(str);
	len1 = 0;
	for(i = 0; i < (len - len1);)
	{
        if(str[i] == str[i+1])
        {
            for(j = i;j < (len-len1);j ++)
            {
                str[j] = str[j+1];
            }
            len1 ++;
        }
        else
        {
            i ++;
        }
    }    
    return str;
}
