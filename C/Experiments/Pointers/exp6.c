#include <stdio.h>

char *n;

int main(void)
{
    char *p = "Dubious";
    char s[8] = "Subtle";

    printf("*p = %s\n", p);
    printf("s = %s\n", s);
    p = &s[0];
    *p = 'p';

    printf("*p = %s\n", p);
    printf("s = %s\n", s);

    p = p + 4;
    *p = 0;

    printf("*p = %s\n", p);
    printf("s = %s\n", s);

    p = n;
   // *p = n;

    return 0;
}
