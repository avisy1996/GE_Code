#ifndef _STDIO_H
    #include <stdio.h>
#include <stdlib.h>
#endif

double my_atof(char *str)
{
    int i=0, sign = 1, point = 0, cnt = 1;
    double res = 0, res1 = 0;
    while (*str)
    {

        if(*str == '-' && i == 0) {
            sign = -1;
            str ++;
        }
        else if(*str == '.') {
            point = 1;
            str ++;
        }

        if(*str >= '0' && *str <= '9') {
            if(point) {
                res1 = res1  + ((*str - '0')/(10* cnt++));
                printf("\n%lf %c", res1, *str);
            }
            else {
                res = res * 10 + (*str - '0');
            }
        }
        i ++;
        *str ++;
    }
    res += res1;
    return res * sign;
}

int main (void)
{
    char str[50];
    if(fgets(str, 50, stdin) != NULL)
    {
        printf("%lf\n", my_atof(str));
    }
    return 0;
}
