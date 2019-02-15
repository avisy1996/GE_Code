//#include <stdio.h>

int main(void)
{
    static int auto_ivar = 255;
    register int reg_ivar;

    reg_ivar = auto_ivar;

    printf("auto_ivar = %d\n", auto_ivar);
    printf("reg_ivar = %d\n", reg_ivar);

    return 0;
}
