#include "word_count.h"

int byte_count_sys (int fp) 
{
    char ch;
    int count = 0, flag = 1;
    if (fp == -1)
        return -1;
    while (flag != 0) {
        flag = read (fp, &ch, 1);
        count ++;
    }

    return count - 1;
} 
