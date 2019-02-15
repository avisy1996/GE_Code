#include <stdio.h>
#define max 1000
#define abc 100
/*int fun(int ivar1, int ivar2)
{
/*	if (ivar2==0)
		return 0;
	if(ivar2==1)
		return ivar1;

	return ivar1 + fun(ivar1, ivar2-1);
}*/
void fun(void);
int main(void)
{
#if 0
	int ivar = 112;
	char cvar = 'c';
	printf("%c\n%d\n", ivar,cvar);
	int ivar1 = 1;
	int ivar2 = 2;
	int ivar3 = 3;
	if (ivar3>ivar2>ivar1)
			printf ("ivar1");
	else
			printf("ivar2");
#endif
#if 0
	printf ("%d", fun(3,8));
	printf ("%d", fun(3,0));
	printf ("%d", fun(0,3));
#endif
	
	fun();
	fun();
	return 0;
}
void fun(void) {
	int ivar1 = 1;
	static int ivar2 = 2;
	printf("%d %d\n", ivar1, ivar2);
	ivar1++;
	ivar2++;
}
