#ifdef _STDIO_H
    #include <stdio.h>
    #include "Assignment2.h"
#endif

void str_n_cpy (char *dbuf, char *sbuf, int n)
{
    int i=0;
    while (((*dbuf++ = *sbuf++) != '\0') && (i++ < n-1))
        ;
    if (i == n) {
        *dbuf = '\0';
    }
}
