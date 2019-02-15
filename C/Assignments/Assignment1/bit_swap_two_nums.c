/*	Name: bit_swap_two_nums.c
	Author: Avinash Shivaji Yadav
	Date of Creation: 22/08/2018
*/
#include<stdio.h>
#include "Assignment1.h"

void bit_swap_two_nums(unsigned int snum, unsigned int dnum, int s, int d)
{
    unsigned int x, dbit, sbit, sres, dres;

    sbit = (snum >> s) & 1;
    dbit = (dnum >> d) & 1;
    x = sbit ^ dbit;
    sres = snum ^ (x << s);
    dres = dnum ^ (x << d);

    printf("Number %x after swapping = %x\n", snum, sres);
    printf("Number %x after swapping = %x\n", dnum, dres);
}

