#include "word_count.h"
#include <ctype.h>
int punct_count(FILE *fp)
{
    char ch;
    int count = 0;
    if (fp == NULL) 
        return -1;
    while ((ch = fgetc(fp)) != EOF) {
        if (my_ispunct(ch))
            count ++;
    }
    return count - 1;
}
