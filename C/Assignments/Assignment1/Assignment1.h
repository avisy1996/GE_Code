int bit_swap(unsigned int, int, int);
void bit_swap_two_nums(unsigned int, unsigned int, int, int);
int bit_copy(unsigned int, unsigned int, int, int, int);
int even_bit_toggle(unsigned int);
int odd_bit_toggle(unsigned int);
int left_rotate_bits(unsigned);
int right_rotate_bits(unsigned);
int left_rotate_n_bits(unsigned, int);
int right_rotate_n_bits(unsigned, int);
int count_bit_set(unsigned);
int count_bet_clear(unsigned);
int cnt_leading_set_bits(unsigned);
int cnt_leading_cleared_bits(unsigned);
int cnt_trailing_set_bits(unsigned);
int cnt_trailing_cleared_bits(unsigned);
int setbits(unsigned, int, int, unsigned);
int invert(unsigned, int, int);
int count_bit_clear(unsigned);
#define bit_ts(num, pos) (num & (1 << (pos - 1))) ? num : (num | (1 << (pos-1)))
#define getbits(x, p, n) ((x >> p) & (~ (~0 << n)))
#define clear_rightmost_set_bit(num) (num & (num - 1))
#define set_rightmost_cleared_bit(num) (num | (num + 1))
#define setbits_stod(num, s, d) (~ (~ 0 << (d - s + 1))) << s
#define clearbits_stod(num, s, d) ~((~ (~ 0 << (d - s + 1))) << s)
#define togglebits_stod(num, s, d) num ^ ((~ (~ 0 << (d - s + 1))) << s)
#define maximum(x, y) x ^ ((x ^ y) & - (x < y))
#define minimum(x, y) y ^ ((x ^ y) & - (x < y))

#define set_leftmost_cleared_bit(num) {\
    unsigned int mask = 1 << (sizeof(int) * 8 - 1);\
    while(num & mask)\
        mask >>= 1;\
    num = num | mask;\
}
#define clear_leftmost_set_bit(num) {\
    unsigned int mask = 1 << (sizeof(int) * 8 - 1);\
    while((num & mask) == 0)\
        mask >>= 1;\
    num = num ^ mask;\
}


