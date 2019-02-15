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
    no1 = atoi(argv[1]);
    ch = *(argv[2]);
    printf("%c",ch);
    no2 = atoi(argv[3]);
    switch (ch) {
    case '+':
        printf("Addition = %d\n", add (no1, no2));                    
        break;
    case '-':
        printf("Subtraction = %d\n", sub (no1, no2));                    
        break;
    case '*':
        printf("Multiplication = %d\n", mul (no1, no2));                    
        break;
    case '/':
        printf("Division = %d\n", division (no1, no2));                    
        break;
    default:
            printf("Wrong choice!\n");
    }
    return 0;
}
