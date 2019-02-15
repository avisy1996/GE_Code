#ifndef _STDIO_H
    #include <stdio.h>
    #include "Assignment2.h"
#endif

int str_spn (const char *str1, const char *str2)
{
    int count = 0, i;
    while (*str1 != '\0')
    {
        i = find(str2, *str1);
        if (i) {
            count ++;    
        }
        str1 ++;
    }
    return count;
}
