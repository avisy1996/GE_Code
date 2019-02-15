#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

#define SUCCESS 1
#define FAILURE 0
#define MAX 100
#define NO_OF_BITS 32
#define LSB_BIT 0
#define MSB_BIT 31

int bitcopy(int *snum, int *dnum, int n, int spos, int dpos);
int setbits(int *snum, int *dnum, int spos, int n);
int invert(int *snum, int pos, int n);
int getbits (int *snum, int pos, int n);

int pos_validation(int s_pos);
int integer_valid(int num);
int my_atoi (char *str);
void display_binary_num (int num);
