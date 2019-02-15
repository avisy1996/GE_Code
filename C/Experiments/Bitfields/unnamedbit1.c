#include <stdio.h>

struct charpad {
    char s:8;
    int :0;
    short i:9;
    int :0; 
}cp;

int main(void)
{
   cp.s = 0xFF;
   cp.i = 0x1FF;

   printf("SO = %d", sizeof(cp));
   return 0;
}

