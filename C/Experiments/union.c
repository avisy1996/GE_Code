#include <stdio.h>
 union {
     int a;
     short int b;
     char c;
 }val = {5};

int main()
{
    val.c = 10;
    printf("a = %d\n", val.a);
    printf("b = %d\n", val.b);
    printf("c = %d\n", val.c);
    return 0;
}
