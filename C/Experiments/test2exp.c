#include <stdio.h>
#define SQUARE(x) x * x
int main(void)
{
	char ch = 127;
	for (int i = 0; i < ch; ch ++)
		printf ("ch = %d\n", ch);
	return 0;
#if 0
	int a=10, b=8;
	float result = a/b;
//	result = SQUARE (2 + 3);
	printf("%f\n", result);
#endif
#if 0
	int x = 1;
	int y = 0;
	int z = 2;
	y++ && x++ || z++;
	printf("%d %d %d\n", x, y, z);
	return 0;
#endif

}
