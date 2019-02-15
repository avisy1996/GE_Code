#include <stdio.h>

int add (int no1, int no2)
{
    return no1 + no2;
}

int sub (int no1, int no2)
{
    return no1 - no2;
}

int main (void)
{
    int (*func_add)(int, int);      //func_add is pointer to function with 2 args
    typedef int(func_t)(int, int);  //Create an aliase func_t with same prototype as int add(int, int);

    //afaddptr is array of pointers which is of type func_t
    func_t *afaddptr[] = {
                            add,
                            sub,
                            NULL,
                        };
    //faddptr is pointer to pointer to func_t
    func_t **faddptr;

    for (faddptr = afaddptr; *faddptr; ++faddptr)
    {
        printf("%d\n", (*faddptr)(10, 20));
    }
                        
    func_t *(*faddp)[3];
    faddp = *afaddptr;
    
    func_add = &add;

    printf("Addition = %d\n", func_add(10, 20));
    return 0;
}
