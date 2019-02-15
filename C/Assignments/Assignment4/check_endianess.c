#ifndef _STDIO_H
    #include <stdio.h>
    #include "Assignment4.h"
#endif

int check_endianess ()
{
    unsigned int mask = 0x76543210;

    char *ch_mask = (char*) & mask;
    if (*ch_mask == 0x10) {
        return 1;
    }
    else {
        return 0;
    }
}
