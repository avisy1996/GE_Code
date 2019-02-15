#ifndef _STDIO_H
    #include <stdio.h>
    #include "Assignment2.h"
#endif
#define TOLC 32
void to_lower (char *str)
{
    while(*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + TOLC;
        }
        str ++;
    }
}
