# include <stdio.h>

int count_bit_set(unsigned int num)
{
    int count=0;
    while (num)
    {
        num = num & (num - 1);
        count ++;
    }
    return count;
}

int count_bit_clear(unsigned int num)
{
    int count, i;
    count = 0;
    i = 0;

    while (num)
    {
        if((num & 1) == 0) 
            count ++;
        i ++;
        num = num >> 1;
    }
    count = (sizeof(int) * 8) - i + count;

    return count;
}
