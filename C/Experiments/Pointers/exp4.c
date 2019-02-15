#include <stdio.h>
#include <stdlib.h>
 char *str1="GLOBAL";
 char *str2;
 char *str3;

 int main(void)
{
    str2=(char *) malloc(sizeof(char)*10);
    printf("0x%08x\n", (unsigned int)str2);
    printf("%s", str2);

    str2 = "EDGE";

    printf("0x%08x\n", (unsigned int)str2);
 // strcpy(str3, "Avinash");
    str3="Avinash";
    printf("0x%08x\n",(unsigned int)str3);
    printf("%s\n",str3); 
//  free(str2);
//  free(str3);
    return 0;
}
