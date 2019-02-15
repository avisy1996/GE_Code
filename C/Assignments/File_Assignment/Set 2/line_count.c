#include "word_count.h"

int line_count(FILE *fp)
{
    char ch[MAX];
    int count = 0;
    if (fp == NULL) 
        return -1;
    while (fgets(ch, MAX, fp) != NULL) {
        count ++; 
    }
    return count;
}
