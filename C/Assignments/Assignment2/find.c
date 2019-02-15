#ifndef _STDIO_H
    #include <stdio.h>
    #include "Assignment2.h"
#endif

int find (const char *str, char ch)
{
    while ((ch != *str) && (*str != '\0')) {
        str++;
    }
    
    if (*str == ch) {
        return 1;
    }
    return 0;
}
