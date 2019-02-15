#include <stdio.h>
int sub(int);
int sum(int);
int main(void)
{
	int b = 10;
	//int sum(int);
	
	int sum (int a)
	{
		printf("Sum\n");
		return a + a;
	}
	
	printf ("%d \n", sub(b));
	return 0;
}
int sub(int a)
{
	return sum(a);
}
