#include "word_count.h"

int byte_count(FILE *fp)
{
    char ch;
    int count = 0;
    if (fp == NULL) 
        return -1;
    while ((ch = fgetc(fp)) != EOF) {
        count ++;
    }
    return count;
}
