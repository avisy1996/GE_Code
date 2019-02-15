#ifndef _STDIO_H
    #include <stdio.h>
    #include "Assignment2.h"
#endif

char str_cmp (char *str1, char *str2)
{
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
