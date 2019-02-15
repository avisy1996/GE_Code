#include <stdio.h>
int a = 10;
int b = 20;
int sum;

int add(int no1, int no2) {
    return no1 + no2;
}


int main(void)
{
    sum = add(a, b);
    printf("Sum = %d", sum);
    return 0;
}
