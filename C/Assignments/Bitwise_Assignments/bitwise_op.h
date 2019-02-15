#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

#define SUCCESS 1
#define FAILURE 0
#define MAX 100
#define NO_OF_BITS 32
#define LSB_BIT 0

unsigned int bit_swap(unsigned int *s_num, int s_pos, int d_pos);
unsigned int bit_swap_num(unsigned int *d_num, unsigned int *s_num, int s_pos, int d_pos);
unsigned int bit_copy(unsigned  int  *s_num,  unsigned  int  *d_num, int  num,  int s_pos, int d_pos);
unsigned int even_bit_toggle(unsigned int *s_num);
unsigned int odd_bit_toggle(unsigned int *s_num);
unsigned int left_rotate_bits(unsigned int *s_num);
unsigned int left_rotate_n_bits(unsigned int *s_num, int n);
unsigned int right_rotate_bits(unsigned int *s_num);
unsigned int right_rotate_n_bits  (unsigned int *s_num, int n);
unsigned int count_set_bits(unsigned int *s_num, unsigned int *count);
unsigned int count_clear_bits(unsigned int *s_num, unsigned int *count);
unsigned int count_leading_set_bits(unsigned int *s_num, unsigned int *count);
unsigned int count_leading_clear_bits(unsigned int *s_num, unsigned int *count);
unsigned int count_trailing_set_bits(unsigned int *s_num, unsigned int *count);
unsigned int count_trailing_clear_bits(unsigned int *s_num, unsigned int *count);
unsigned int setbits(unsigned  int  *s_num,  int  s_pos,  int  num,  unsigned  int *d_num);
unsigned int invert(unsigned int * s_num, int s_pos, int num);

unsigned int pos_validation(unsigned int s_pos);
unsigned int integer_valid(unsigned int num);
unsigned int my_atoi (char *str);
int get_num (int *flag);
void display_binary_num (unsigned int num);
