#include "word_count.h"

int my_ispunct(char ch) 
{
    if (ch != '\n' && ch != ' ' && !(ch >= 'a' && ch <= 'z') && !(ch >= 'A' && ch <= 'Z') && 
            !(ch >= '0' && ch <= '1')) 
    {
        return 1;
    }
    return 0;
}


