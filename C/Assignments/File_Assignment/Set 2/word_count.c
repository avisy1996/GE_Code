#include "word_count.h"

int word_count(FILE *fp)
{
    char *str, *token;
    str = (char *) malloc (sizeof(char) * MAX);
    token = (char *) malloc (sizeof(char) * MAX);

    int count = 0;
    if (fp == NULL) 
        return -1;
    while (fgets(str, MAX, fp) != NULL) {
        while (*str != '\0')
        {
            token = str_tok(str, " \n");
            if (*token != '\0')
                count ++;                                        
            str = str + str_len(token) + 1;
        }
    }
    return count;
}
