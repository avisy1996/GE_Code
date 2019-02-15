#ifndef _STDIO_H
    #include <stdio.h>
    #include "Assignment2.h"
#endif

char *snappend (char *str1, char *str2, int n)
{
    int i = 0;
    while (*str1 != '\0') {
        str1++;
    }

    while ((*str2 != '\0') && (i++ < n)) {
        *str1 ++ = *str2 ++;
    }
    *str1 = '\0';
    return str1;
}
