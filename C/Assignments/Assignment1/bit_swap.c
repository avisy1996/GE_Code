/*	Name: bit_swap
	Author: Avinash Shivaji Yadav
	Date of Creation: 21/08/2018
 */

#include <stdio.h>
#include "Assignment1.h"

int bit_swap(unsigned int n, int s, int d)
{
    unsigned int x, bit1, bit2, res;

    bit1 = (n >> s) & 1;
    bit2 = (n >> d) & 1;
    x = bit1 ^ bit2;
    res= n ^ (x << s | x << d);

    return res;
}


