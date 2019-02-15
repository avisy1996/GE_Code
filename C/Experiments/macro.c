#include "stdio.h"
int main(void)
{
    #ifdef MAX
        printf ("MAX = %d\n", MAX);
    #else
        printf ("Macro not defined!\n");
    #endif

    #define MAX 10
    return 0;
}
