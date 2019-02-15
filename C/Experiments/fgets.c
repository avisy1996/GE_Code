#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char *str;
    str = malloc(100);
    fgets(str, 15, stdin);
    fputs(str, stdout);
    return 0;
}
