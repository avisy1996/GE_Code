#include "word_count.h"

int max_line_length_sys(int fp)
{
    char *str, *token;
    str = (char*) malloc (sizeof(char) * MAX);
    token = (char*) malloc (sizeof(char) * MAX);

    int len = 0, max = 0;
    if (fp == -1) 
        return -1;

    if(read (fp, str, MAX)) {
        while (*str != '\0') {
            token = str_tok(str, "\n");
            if (max < (len = str_len (token)))
                    max = len;
            str = str + str_len(token) + 1;
        }
    }
    return max;
}
