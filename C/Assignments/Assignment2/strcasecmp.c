#ifndef _STDIO_H
    #include <stdio.h>
    #include "Assignment2.h"
#endif

int str_case_cmp (char *str1, char *str2)
{
    to_lower (str1);
    to_lower (str2);
    while (*str1 ++ == *str2 ++) 
    {
        if ((*str1 == '\0') && (*str2 == '\0')) {
            return 0;    
        }
    }
    if ((*str1 - *str2) < 0) {
        return 1;
    }
    return -1;
}
