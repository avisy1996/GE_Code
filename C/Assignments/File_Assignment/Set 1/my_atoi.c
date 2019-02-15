#ifndef _STDIO_H
    #include <stdio.h>
#endif

int my_atoi(char *str)
{
    int i=0,res = 0, sign = 1;
    while (*str)
    {
        if(*str == '-' && i == 0) {
            sign = -1;
        }
        else if(*str >= '0' && *str <= '9') {
            res = res * 10 + (*str - '0');
        }
        i ++;
        str ++;
    }
    return res*sign;
}

