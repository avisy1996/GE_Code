#include <stdio.h>

struct unname {
    char c;
    int  :0;
    char d;
    short s:9;
    char e;
    char :0;
}un;

int main (void)
{
    un.c = 0xFF;
    un.d = 0xEE;
    un.s = 0x1FF;
    un.e = 0xDD;
    printf("Sizeof unname = %d\n%d\n", sizeof(un), un.s);
    return 0;
}
