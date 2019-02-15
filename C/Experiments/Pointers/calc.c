#include <stdio.h>

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

int div (int no1, int no2)
{
    return no1 / no2;
}

int main (void)
{
    int no1, no2;
    int ch;
    printf ("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf ("Enter your choice : ");
    scanf ("%d", &ch);
    printf("Enter No1 : ");
    scanf("%d",&no1);
    printf("Enter No2 : ");
    scanf("%d", &no2);

    switch (ch) {
    case 1:
        printf("Addition = %d\n", add (no1, no2));                    
        break;
    case 2:
        printf("Subtraction = %d\n", sub (no1, no2));                    
        break;
    case 3:
        printf("Multiplication = %d\n", mul (no1, no2));                    
        break;
    case 4:
        printf("Division = %d\n", div (no1, no2));                    
        break;
    default:
            printf("Wrong choice!");
    }
    return 0;
}
