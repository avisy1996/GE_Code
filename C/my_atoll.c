#ifndef _STDIO_H
    #include <stdio.h>
#endif

long long my_atoll(char *str)
{
    int i=0, sign = 1;
    long long res = 0;
    while (*str)
    {
        if(*str == '-' && i == 0) {
            sign = -1;
        }
        else if(*str >= '0' && *str <= '9') {
            res = res * 10 + (*str - '0');
        }
        i ++;
        *str ++;
    }
    return res*sign;
}

int main (void)
{
    char str[50];
    if(fgets(str, 50, stdin) != NULL)
    {
        printf("%lld\n", my_atoll(str));
    }
    return 0;
}
