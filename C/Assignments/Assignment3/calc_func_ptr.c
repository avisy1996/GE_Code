/*
   Use command line argument 
   ./a.out choice no1 no2
    1. Addition
    2. Subtraction
    3. Multiplication
    4. Division*/

#include <stdio.h>
#include <stdlib.h>

int add (int no1, int no2)
{
    return no1 + no2;
}

int sub (int no1, int no2)
{
    return no1 - no2;
}

int mul (int no1, int no2)
{
    return no1 * no2;
}

int division (int no1, int no2)
{
    return no1 / no2;
}

int main (int argc, char *argv[])
{
    int no1, no2;
    char ch;
    if(argc < 4)
        return 0;
    ch = atoi(argv[1]);
    no1 = atoi(argv[2]);
    //printf("%c",argv[2]);
    no2 = atoi(argv[3]);
    typedef int(calc_t) (int, int);

    calc_t *fcalcptr[] = {add, sub, mul, division, NULL, };

    calc_t **calcptr;// = {add, sub, mul, division, NULL, };
    calcptr = fcalcptr;
    switch (ch) {
    case 1:
        printf("Addition = %d\n", (*(calcptr))(no1, no2));                    
        break;
    case 2:
        printf("Subtraction = %d\n", (*(calcptr+1))(no1, no2));                    
        break;
    case 3:
        printf("Multiplication = %d\n", (*(calcptr+2)) (no1, no2));                    
        break;
    case 4:
        printf("Division = %d\n", (*(calcptr+3)) (no1, no2));                    
        break;
    default:
            printf("Wrong choice!\n");
    }
    return 0;
}
