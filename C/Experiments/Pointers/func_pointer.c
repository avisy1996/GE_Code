#include <stdio.h>

int display(int a, char ch)
{
    printf("a = %d\nCh = %c\n", a, ch);
    return 0;
}

int main(void)
{
    typedef int func_t(int, char);
    func_t *fp;
    fp = display;

    fp(10, 'A');
    printf("Sizeof(display) = %d\n", sizeof(display));
    printf("Sizeof(fp) = %d\n", sizeof(fp));
    printf("Sizeof(*fp) = %d\n", sizeof(*fp));

    return 0;
}
