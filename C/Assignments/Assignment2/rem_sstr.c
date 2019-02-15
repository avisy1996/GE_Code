#ifndef _STDIO_H
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "Assignment2.h"
#endif

char *rem_sstr(char *str1, char *str2)
{
    int len;
    len = str_len(str2);

    str1 = sub_str(str1, str2);

    str_cpy(str1, str1 + len);
    return str1;
}
