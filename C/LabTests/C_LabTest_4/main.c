#include "bitwise.h"

int main()
{
    int snum, dnum, res;
    int spos, dpos, num;
    int ch;         //choice for switch case.
	char *str;
    
    printf("1. Bit Copy.\n2. Set Bits.\n3. Invert bit.\n4. Get Bits.\n"); 

	str = (char *)malloc(sizeof(char) * MAX);	
	printf ("Enter your choice : ");
    
    if (fgets (str, MAX, stdin) == NULL) {
		printf ("Enter choice as integer!\n");
		exit (0);
	}	
	
	ch = my_atoi(str);
	if (ch == -1) {
		printf ("Number is not valid integer!\n");
		exit (0);
	}

    switch (ch) {
	case 1:		/*****	bitcopy()	*****/
        printf("Enter the 1st positive number = ");
		if (fgets (str, MAX, stdin) == NULL) {
			printf ("Enter choice as integer!\n");
			exit (0);
		}	
		snum = my_atoi(str);
		if (snum == -1) {
			printf ("Number is not valid integer!\n");
			exit (0);
		}

        printf("Enter the 2nd positive number = ");
        if (fgets (str, MAX, stdin) == NULL) {
			printf ("Enter choice as integer!\n");
			exit (0);
		}	
		dnum = my_atoi(str);
		if (dnum == -1) {
			printf ("Number is not valid integer!\n");
			exit (0);
		}

		printf("Enter spos = ");
        if (fgets (str, MAX, stdin) == NULL) {
			printf ("Enter choice as integer!\n");
			exit (0);
		}	
		spos = my_atoi(str);
		if (spos == -1) {
			printf ("Number is not valid integer!\n");
			exit (0);
		}
        printf("Enter dpos = ");
		if (fgets (str, MAX, stdin) == NULL) {
			printf ("Enter choice as integer!\n");
			exit (0);
		}
		dpos = my_atoi(str);
		if (dpos == -1) {
			printf ("Number is not valid integer!\n");
			exit (0);
		}
        printf("Enter number of bits to copy = ");
		if (fgets (str, MAX, stdin) == NULL) {
			printf ("Enter choice as integer!\n");
			exit (0);
		}
		num = my_atoi(str);
		if (num == -1) {
			printf ("Number is not valid integer!\n");
			exit (0);
		}
        res = bitcopy(&snum, &dnum, num, spos, dpos);

		if (res == SUCCESS) {
			display_binary_num (snum);
			display_binary_num (dnum);
		}
		else {
			printf ("Integer or position validation failed!\n");
		}

		break; 

	case 2:		/*****	setbits()	*****/
        printf("Enter the 1st positive number = ");
		if (fgets (str, MAX, stdin) == NULL) {
			printf ("Enter choice as integer!\n");
			exit (0);
		}	
		snum = my_atoi(str);
		if (snum == -1) {
			printf ("Number is not valid integer!\n");
			exit (0);
		}

        printf("Enter the 2nd positive number = ");
        if (fgets (str, MAX, stdin) == NULL) {
			printf ("Enter choice as integer!\n");
			exit (0);
		}	
		dnum = my_atoi(str);
		if (dnum == -1) {
			printf ("Number is not valid integer!\n");
			exit (0);
		}

		printf("Enter spos = ");
        if (fgets (str, MAX, stdin) == NULL) {
			printf ("Enter choice as integer!\n");
			exit (0);
		}	
		spos = my_atoi(str);
		if (spos == -1) {
			printf ("Number is not valid integer!\n");
			exit (0);
		}
        printf("Enter number of bits = ");
		if (fgets (str, MAX, stdin) == NULL) {
			printf ("Enter choice as integer!\n");
			exit (0);
		}
		num = my_atoi(str);
		if (num == -1) {
			printf ("Number is not valid integer!\n");
			exit (0);
		}
        res = setbits(&snum, &dnum, spos, num);

		if (res == SUCCESS) {
			display_binary_num (snum);
			display_binary_num (dnum);
		}
		else {
			printf ("Integer or position validation failed!\n");
		}

		break;

	case 3:		/*****	invert()	*****/
        printf("Enter the 1st positive number = ");
		if (fgets (str, MAX, stdin) == NULL) {
			printf ("Enter choice as integer!\n");
			exit (0);
		}	
		snum = my_atoi(str);
		if (snum == -1) {
			printf ("Number is not valid integer!\n");
			exit (0);
		}

		printf("Enter spos = ");
        if (fgets (str, MAX, stdin) == NULL) {
			printf ("Enter choice as integer!\n");
			exit (0);
		}	
		spos = my_atoi(str);
		if (spos == -1) {
			printf ("Number is not valid integer!\n");
			exit (0);
		}

        printf("Enter number of bits = ");
		if (fgets (str, MAX, stdin) == NULL) {
			printf ("Enter choice as integer!\n");
			exit (0);
		}
		num = my_atoi(str);
		if (num == -1) {
			printf ("Number is not valid integer!\n");
			exit (0);
		}

        res = invert (&snum, spos, num);

		if (res == SUCCESS) {
			display_binary_num (snum);
		}
		else {
			printf ("Integer or position validation failed!\n");
		}

		break;

	case 4:		/*****	getbits()	*****/
        printf("Enter the 1st positive number = ");
		if (fgets (str, MAX, stdin) == NULL) {
			printf ("Enter choice as integer!\n");
			exit (0);
		}	
		snum = my_atoi(str);
		if (snum == -1) {
			printf ("Number is not valid integer!\n");
			exit (0);
		}

		printf("Enter spos = ");
        if (fgets (str, MAX, stdin) == NULL) {
			printf ("Enter choice as integer!\n");
			exit (0);
		}	
		spos = my_atoi(str);
		if (spos == -1) {
			printf ("Number is not valid integer!\n");
			exit (0);
		}

        printf("Enter number of bits = ");
		if (fgets (str, MAX, stdin) == NULL) {
			printf ("Enter choice as integer!\n");
			exit (0);
		}
		num = my_atoi(str);
		if (num == -1) {
			printf ("Number is not valid integer!\n");
			exit (0);
		}

        res = getbits (&snum, spos, num);

		if (res == SUCCESS) {
			display_binary_num (snum);
		}
		else {
			printf ("Integer or position validation failed!\n");
		}

		break;

	default:
		printf ("Wrong choice!\n");
		break;
	}

    return 0;
}
       
     
