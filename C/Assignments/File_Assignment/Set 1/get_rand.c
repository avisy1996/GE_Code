#include "header.h"

int get_rand (int min,const int max)
{
    static int arr[20000];
    static int i;
    int j;
    arr[i] = rand() % max + min;
    j = 0;
    while(j < i)
    {
        if(arr[i] == arr[j]) {
            arr[i] = rand() % max + min;
            j = 0;
            continue;
        }
        j++;
    }
    i ++;
    return arr[i-1]; 
}
