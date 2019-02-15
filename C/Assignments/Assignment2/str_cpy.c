#ifdef _STDIO_H
    #include <stdio.h>
    #include "Assignment2.h"
#endif

void str_cpy (char *dbuf, char *sbuf)
{
    while  ((*dbuf++ = *sbuf++) != '\0')
        ;
}
