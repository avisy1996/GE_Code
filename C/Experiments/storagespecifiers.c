#include<stdio.h>

//auto int file_auto_ivar=10;
register int file_reg_ivar=20;
static int file_static_ivar=30;
extern int file_extern_ivar;

int main(void)
{

    auto int func_auto_ivar=10;
    register int func_reg_ivar=20;
    static int func_static_ivar=30;
   //extern int func_extern_ivar=40;
   
    printf("\n***In the main before Block***");
    printf("\nfile_extern_ivar=%d",file_extern_ivar);
    printf("\nfile_static_ivar=%d",file_static_ivar);

    printf("\nfunc_auto_ivar=%d",func_auto_ivar);
    printf("\nfunc_reg_ivar=%d",func_reg_ivar);
    printf("\nfunc_static_ivar=%d",func_static_ivar);
    
    {
        auto int block_auto_ivar=10;
        register int block_reg_ivar=20;
        static int block_static_ivar=30;
       // extern int block_extern_ivar=40;

        printf("\n***In the Block***");
        printf("\nfile_extern_ivar=%d",file_extern_ivar);
        printf("\nfile_static_ivar=%d",file_static_ivar);

        printf("\nfunc_auto_ivar=%d",func_auto_ivar);
        printf("\nfunc_reg_ivar=%d",func_reg_ivar);
        printf("\nfunc_static_ivar=%d",func_static_ivar);
 
        printf("\nblock_auto_ivar=%d",block_auto_ivar);
        printf("\nblock_reg_ivar=%d",block_reg_ivar);
        printf("\nblock_static_ivar=%d",block_static_ivar); 
    }

    printf("\n***In the main after Block***");
    printf("\nfile_extern_ivar=%d",file_extern_ivar);
    printf("\nfile_static_ivar=%d",file_static_ivar);

    printf("\nfunc_auto_ivar=%d",func_auto_ivar);
    printf("\nfunc_reg_ivar=%d",func_reg_ivar);
    printf("\nfunc_static_ivar=%d",func_static_ivar);
 
    return 0;
}
