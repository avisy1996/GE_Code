#include "word_count.h"

int max_line_length(FILE *fp)
{
    char str[MAX];
    int max_length = 0;
    int len;
    if (fp == NULL) 
        return -1;
    while (fgets(str, MAX, fp) != NULL) {
        if(max_length < (len = str_len (str))) {
            //printf ("%d\n", len);
            max_length = len - 1;
        }
    }
    return max_length;
}
