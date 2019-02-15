#include <stdio.h>
#define MAX 10
int fact (int n)
{
	if (0 == n) {
		return 1;
	}
	else {
		return (n*fact(n - 1));
	}
}

int main(void)
{
	int stack[MAX];
	printf("= %d", sizeof(stack));
	return 0;
}
