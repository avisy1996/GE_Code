#include <stdio.h>

int main(void)
{
    int *p;
    if(p==5)
        printf("p==5");
    if(p==0)
        printf("p==0");
    *p=10;

    free(p);
    return 0;
}
