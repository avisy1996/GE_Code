#include <stdio.h>

#define MAX 10

typedef int i;

int main(void) 
{
	i a = 7;
	printf ("%d\t%d\n", MAX, sizeof(a));
}
