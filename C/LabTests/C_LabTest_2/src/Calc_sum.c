#include <stdio.h>
#include <stdlib.h>
#include "Calc_sum.h"

int main (void)
{
	char *str_num;
	int sum, flag;

	flag = 0;

	str_num = (char *) malloc (sizeof(char) * MAX);

	printf("Enter the String Number : ");
	
	if(fgets (str_num, MAX, stdin) != NULL) {
		sum = get_sum (str_num, &flag);
		if(flag == 0) 
			printf("No number found\n");
		else
			printf("Sum = %d\n", sum);
	}
	else {
		printf ("Number not entered\n");
	}
	return 0;
}
