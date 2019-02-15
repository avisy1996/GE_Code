#ifndef _STDIO_H
    #include <stdio.h>
	#include <string.h>
#endif

static int my_atoi(/*@out@*/char *str)
{
    int i=0,res = 0, sign = 1;
    while (*str != '\0')
    {
        if(*str == '-' && i == 0) {
            sign = -1;
        }
        else if(*str >= '0' && *str <= '9') {
            res = res * 10 + (int)(*str - '0');
        }
        i ++;
        *str ++;
    }
    return res*sign;
}

int main (void)
{
    char str[50];
    printf("Number :");
	//my_atoi(str);
    if(fgets(str, 50, stdin) != NULL)
    {
        printf("my_atoi = %d\n", my_atoi(str));
		printf("atoi = %d\n", atoi(str));
	//	printf("strtol = %d\n", strtol(str));
    }
    return 0;
}
