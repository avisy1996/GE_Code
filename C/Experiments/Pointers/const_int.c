#include <stdio.h>

int main (void)
{
    int a = 10;
    int const * const p = &a;
    //p = &a;
    //*p = 20;
    printf("%d\t%d\n", a, *p);
}
