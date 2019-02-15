#include <stdio.h>
#define JOIN(str1, str2) str1 ## str2
#define DISCOUNT(item, percentage) DISCOUNT_ ##item=(100 * percentage)
int main (void)
{
    int item_laptop;
    printf("%d\n",JOIN(31,30));
    printf("%d %d\n", DISCOUNT(laptop, 50));
    return 0;
}
