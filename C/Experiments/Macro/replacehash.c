#include <stdio.h>
#define hash(expr) '#'
#define hashhash(expr) "##"
#define hash1(expr) #expr
int main(void)
{
    printf ("hash = %c\n", hash(10));
    printf ("hash1 = %s\n", hash1(10));
    printf ("hash hash = %s\n", hashhash(10));
    return 0;
}
