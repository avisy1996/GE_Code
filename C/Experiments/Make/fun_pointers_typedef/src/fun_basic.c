/** Program to illustrate the basic usage of function pointers */

#include <stdio.h>
#include "fun_basic.h"

int sum (int a, int b)
{
	return (a + b);
}

/**
  * @fun : sum_example_1
  * @brief : This function illustrates usage of function pointers; 
  *		and function pointer is used and called similar to a normal
  *		function all;
  */

void sum_example_1 (int a, int b)
{
	int (*sum_fun_ptr) (int, int);
	sum_fun_ptr = sum;
	printf ("Sum (%d, %d) = %d\n", a, b, sum_fun_ptr(a, b));
}

/**
  * @fun : sum_example_2
  * @brief : This function illustrates usage of function function pointers; 
  *		and function pointer is used and called (*fun)() notation.
  *	
  */

void sum_example_2 (int a, int b)
{
	int (*sum_fun_ptr) (int, int);
	sum_fun_ptr = sum;
	printf ("Sum (%d, %d) = %d\n", a, b, (*sum_fun_ptr)(a, b));
}

int main (void)
{
	int x = 5, y = 10;

	/*Function call directly*/
	printf ("Sum (%d, %d) = %d\n", x, y, sum(x, y));

	/*Type 1: Illustrate function pointers */
	sum_example_1 (x, y);

	/*Type 2: Illustrate function pointers */
	sum_example_2 (x, y);

	return 0;
}
 
	
