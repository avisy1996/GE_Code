#include <stdio.h>
#include <stdlib.h>

char *n; 
char *str1="GLOBAL";
char *str2;
char *str3;
int a[2][3] = {{1, 2}, {3, 4}};

int main(void)
{
    #if CH == 1
	    int *p;
	    p=0;
	    *p=NULL;
	   // printf("%d\n",p);
	   // printf("%d\n",p);
    #endif

    #if CH == 2
		char str[10] = "xyz";
	  //char *ch = 'a';
	    char *name = "abc";
	    printf("Len str = %d", strlen(str));
	  //printf("Len ch = %d", strlen(ch));
	    printf("Len name = %d", strlen(name));

    #endif

    #if CH == 3
		int *p;
		if(p==5)
		    printf("p==5");
		if(p==0)
		    printf("p==0");
		*p=10;

		free(p);
    #endif

    #if CH == 4
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
    #endif

    #if CH == 4
		char *p = "Dubious";
		char s[8] = "Subtle";

		printf("*p = %s\n", p);
		printf("s = %s\n", s);
		p = &s[0];
		*p = 'p';

		printf("*p = %s\n", p);
		printf("s = %s\n", s);

		p = p + 4;
		*p = 0;

		printf("*p = %s\n", p);
		printf("s = %s\n", s);

		p = n;
	   // *p = n;
    #endif


    return 0;
}
