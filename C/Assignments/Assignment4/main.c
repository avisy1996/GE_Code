/* Assignment 4
   choose one of the follwing option while compiling the program.
   eg. gcc -D CH=1 main.c
   1. ATM Header format
   2. TCP Header format
   3. IP Header format
   4. Initialize last element of union
   5. Find Endianess of a machine
   */

#ifndef _STDIO_H
    #include <stdio.h>
    #include "Assignment4.h"
#endif
#pragma pack(1)


struct ATM {
    int gfc:4;
    int vpi:8;
    int vci:16;
    int clp:1;
    int pti:3;
    int hec:8;
};
struct TCP {
    int sp : 16;
    int ds : 16;
    int sn;
    int an;
    int hl : 4;
    int reserved : 6;
    int cb : 6;
    int window : 16;
    int chesksum :16;
    int urgent : 16;
};
struct IP {
    int ver : 4;
    int headlen : 4;
    int st : 8;
    int totallen : 16;
    int id : 16;
    int flags : 3;
    int fo : 13;
    int sip;
    int dip;
};

union sample {
    int a : 5;
    int b : 10;
    int c : 5;
    int d : 21;
    int e;
};
int main(void)
{

    #if CH == 1
        struct ATM a;
        a.vpi = 0xBB;
        a.vci = 0xaaaa;
        a.clp = 1;
        a.gfc = 0xE;
        a.pti = 6;
        a.hec = 0xAA;
        printf("Sizeof(ATM) = %d\n", sizeof(a));  
        //printf("htons = 0x%08x\n", htonl(0xfffffbbe));
        //printf("htons = 0x%08x\n", htonl(0x000000aa));
    #endif
    #if CH == 2
        struct TCP t;
        printf("Sizeof(TCP) = %d\n", sizeof(t));
    #endif
    #if CH == 3
        struct IP i;  
        printf("Sizeof(IP) = %d\n", sizeof(i));
    #endif
    #if CH == 4
        union sample s;
        printf("Enter the value of E = ");
        scanf("%d", &s.e);
        printf("A = %d\n",s.a);
        printf("B = %d\n",s.b);
        printf("C = %d\n",s.c);
        printf("D = %d\n",s.d);
        printf("E = %d\n",s.e);
    #endif
    #if CH == 5
        if(check_endianess()) {
            printf ("This machine is Little Endian.\n");
        }
        else {
            printf ("This machine is Big Endian.\n");
        }
    #endif

    return 0;
}
