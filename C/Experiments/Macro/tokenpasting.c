#include <stdio.h>
#define DISP(FN, LN) FN ## LN
#define MAX 15
int main(void)
{
    char fn[]="Avi";
    char ln[]="Yadav";
    char fnln1[MAX] = "Avinash Yadav\n";
    printf ("%s", DISP(fn, ln));
    return 0;
}
