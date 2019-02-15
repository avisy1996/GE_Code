#include <stdio.h>

int main (void) 
{
	int a = 10;
	int b;
	a = a++;
	b = a++;
	printf ("%d %d\n", a, b);
	return 0;
}
