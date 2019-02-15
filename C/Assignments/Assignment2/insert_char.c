#ifndef _STDIO_H
    #include <stdio.h>
    #include "Assignment2.h"
#endif

char *insert_char (char *str, char ch, int pos)
{
    int len, count = 0;
    len = str_len(str);
    while (*str ++ != '\0')
        ;
    *str = '\0';

    str = str - (sizeof(char) * 2);
    count = len - (pos - 1);
    while (count) {
        *(str + 1) = *str;
        str --;
        count --;
    }
    *(++str) = ch;
    return str;
}
