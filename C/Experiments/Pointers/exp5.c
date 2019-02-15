#include <stdio.h>

int a[2][3] = {{1, 2}, {3, 4}};

int main(void)
{
    printf("Addresses of\n");
    printf("&a      = 0x%08x\n", (unsigned int)&(a));    
    printf("a       = 0x%08x\n", (unsigned int)&a);    
    printf("&(*a)   = 0x%08x\n", (unsigned int)&(*a));    
    printf("&a + 1  = 0x%08x\n", (unsigned int)&a+1);    
    printf("a + 1   = 0x%08x\n", (unsigned int)(a+1));    
    printf("*a + 1  = 0x%08x\n", (unsigned int)(*a+1));    

    printf("Values of\n");
    printf("a[0][1] = %d\n", **a);
    printf("a[1][1] = %d\n", *(*(a+1)+1));
    printf("a[1][2] = %d\n", *(*(a+1)+2));
    return 0;
}
    
