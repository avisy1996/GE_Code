/* 1. __LINE__
   2. __TIME__
   3. __DATE__
   4. __FILE__
   5. __STDC__
*/

#ifndef _STDIO_H
    #include <stdio.h>
#endif

int main (void) 
{
    #if CH  == l
        printf ("LINE = %d\n", __LINE__);
    #elif CH == t
        printf ("TIME = %s\n", __TIME__);
    #elif CH == 3
        printf ("DATE = %s\n",__DATE__);
    #elif CH == 4
        printf ("FILE = %s\n", __FILE__);
    #elif CH == 5
        printf ("STDC = %d\n", __STDC__);
    #else
        printf ("Wrong CHoice!\n");
    #endif

    return 0;
}
