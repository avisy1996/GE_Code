#include <stdio.h>
#include "calc.h"

int main (void)
{
    int (*func_ptr)(int, int);

    func_ptr = add;
    printf("Addition = %d\n", (*func_ptr)(10, 20));

    func_ptr = sub;
    printf("Subtraction = %d\n", (*func_ptr)(30, 20));

    func_ptr = mul;
    printf("Multiplication = %d\n",(*func_ptr)(10, 20));

    func_ptr = division;
    printf("Division = %d\n", (*func_ptr)(100, 20));

    return 0;
}
