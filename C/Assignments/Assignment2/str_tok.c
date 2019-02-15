#ifndef _STDIO_H
    #include <stdio.h>
    #include "Assignment2.h"
#endif

char *str_tok (char *str, char *delim)
{
    char *temp, *td;
    temp = str;
    td = delim;

    while (*str != '\0')
    {        
        while((*delim != *str) && (*delim != '\0'))
        {
            delim ++;
        }
        if(*str == *delim) {
            *str = '\0';
            break;
        }
        else {
            str++;
            delim = td;
        }
    }
    return temp;
}
