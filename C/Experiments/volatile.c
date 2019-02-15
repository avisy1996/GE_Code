#include <stdio.h>
struct s{
	int i;
	const int ci;
};
int main()
{
	struct s ss;
	const struct s cs;
	volatile struct s vs;
	int a = 1;
//	vs.i = 10;
	//vs.ci = 20;
	while (a <10)
	{
	}
	#if 0
	volatile int a = 1;
	while(a < 10)
	{
	}
	#endif
	return 0;
}
