#include <stdio.h>

const volatile int g_var=5;

int main(void)
{
//    g_var=5;
    
    while(g_var==5)
    {
     ;
    }
}
