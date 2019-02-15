#ifndef _STDIO_H
    #include <stdio.h>
    #include "Assignment2.h"
#endif

char *chr_add_instr (char *buf, char c)
{
    while (c != *buf) {
        buf++;
    }

    return buf;
}

