#include <stdio.h>

#define MAX 10

int main()
{
#if 0
	int i = 10;
#endif
#if 1
	int i = 6;
#endif
	/*if i < MAX*/
	if (i < MAX) {
		printf ("%d\n",\
				i);			
	} //end if
	return 0;
}
