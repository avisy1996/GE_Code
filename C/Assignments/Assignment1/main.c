/*	Name: main.c
	Author: Avinash Shivaji Yadav
	Date of Creation: 22/08/2018
 */
#include <stdio.h>
#include "Assignment1.h"

int main(void)
{
    unsigned int snum, dnum, res;
    int s, d, n;
    int ch;         //choice for switch case.
    unsigned int ui_swappednum;
    
    printf("1. Bit swap withing the number.\n2. Bit swap between two numbers.\n3. Copy n bits starting from s in 1st number at d in 2nd number.\n4. Toggle even and odd bits of number.\n5. Test and set a bit.\n6. Left and Right Rotate the bit.\n 7. Left and Right Rotate the n bits.\n 8. Count set and Clear bits\n9. Count Leading and Trailing set and Clear bits\n 10. Set bits.\n 11. invert bits\n 12. macro get bits\n 13. Set and Clear Rightmost and leftmost cleared and set bits\n 14. Set, Clear and Toggle bits from s to d\n 15. Maximum and minimum of two numbers\n"); 

    printf("Enter your choice : ");
    scanf("%d", &ch);

    switch (ch) {
    case 1:
        printf("Enter the positive number = ");
        scanf("%d", &snum);
        printf("Enter source and destination index = ");
        scanf("%d%d", &s, &d);

        ui_swappednum=bit_swap(snum, s, d);

        printf("Number after swapping bit %d to %d = %d\n", s, d, ui_swappednum);
        break;
    case 2:
        printf("Enter the 1st positive number = ");
        scanf("%d", &snum);
        printf("Enter the 2nd positive number = ");
        scanf("%d", &dnum);
        printf("Enter source index of number 1 = ");
        scanf("%d", &s);  
        printf("Enter destination index of number 2 = ");
        scanf("%d", &d);

        bit_swap_two_nums(snum, dnum, s, d);
        break;
    case 3:
        printf("Enter the 1st positive number = ");
        scanf("%d", &snum);
        printf("Enter the 2nd positive number = ");
        scanf("%d", &dnum);
        printf("Enter source index of number 1 = ");
        scanf("%d", &s);  
        printf("Enter destination index of number 2 = ");
        scanf("%d", &d);
        printf("Enter number of bits to copy = ");
        scanf("%d", &n);
        
        if ((n <= s + 1) && (n <= d + 1)) {
            res = bit_copy(snum, dnum, n, s, d);
        } else {
            printf("number of bits should be less than or equal to source index and destination index");
        }

        printf("2nd Number after bit copy = %x\n", res);
        break;
    case 4:
        printf("Enter the positive number = ");
        scanf("%d", &snum);
        
        res = even_bit_toggle(snum);
        printf("%x after toggling even bits = %x\n", snum, res);

        res = odd_bit_toggle(snum);
        printf("%x after toggling odd bits = %x\n", snum, res);
        break;
    case 5:
        printf("Enter the positive number = ");
        scanf("%d", &snum);
        printf("Enger the position = ");
        scanf("%d", &s);
        res = bit_ts(snum, s);
        printf("Result of Test and Set bit = %x\n", res);
        break;
    case 6:
        printf("Enter the positive number = ");
        scanf("%d", &snum);

        res = left_rotate_bits(snum);
        printf("Result of Left Rotate = %x\n", res);

        res = right_rotate_bits(snum);
        printf("Result of Right Rotate = %x\n", res);
        break;
    case 7:
        printf("Enter the positive number = ");
        scanf("%d", &snum);
        printf("Enter the no of bits = ");
        scanf("%d", &s);

        res = left_rotate_n_bits(snum, s);
        printf("Result of Left Rotate = %x\n", res);

        res = right_rotate_n_bits(snum, s);
        printf("Result of Right Rotate = %x\n", res);
        break;
    case 8:
        printf("Enter the positive number = ");
        scanf("%d", &snum);
        
        res = count_bit_set(snum);
        printf("No of set bits = %d\n", res);

        res = count_bit_clear(snum);
        printf("No of Clear bits = %d\n", res);
        break;
    case 9:
        printf("Enter the positive number = ");
        scanf("%x", &snum);
        
        res = cnt_leading_set_bits(snum);
        printf("No of Leading set bits = %d\n", res);

        res = cnt_leading_cleared_bits(snum);
        printf("No of Leading Clear bits = %d\n", res);
        
        res = cnt_trailing_set_bits(snum);
        printf("No of Trailing set bits = %d\n", res);

        res = cnt_trailing_cleared_bits(snum);
        printf("No of Trailing Clear bits = %d\n", res);
        break;
    case 10:
        printf("Enter x = ");
        scanf("%d", &snum);
        printf("Enter y = ");
        scanf("%d", &dnum);
        printf("Enter p = ");
        scanf("%d", &s);  
        printf("Enter n = ");
        scanf("%d", &n);

        res = setbits(snum, s, n, dnum);
        printf("x after set bit = %x\n", res);
        break;
    case 11:
        printf("Enter x = ");
        scanf("%d", &snum);
        printf("Enter p = ");
        scanf("%d", &s);  
        printf("Enter n = ");
        scanf("%d", &n);

        res = invert(snum, s, n);
        printf("x after invertnig bits = %x\n", res);
        break;
    case 12:
        printf("Enter x = ");
        scanf("%d", &snum);
        printf("Enter p = ");
        scanf("%d", &s);  
        printf("Enter n = ");
        scanf("%d", &n);

        res = getbits(snum, s, n);
        printf("get bits = %x\n", res);
        break;
    case 13:
        printf("Enter x = ");
        scanf("%x", &snum);

        res = clear_rightmost_set_bit(snum);
        printf("Clear Rightmost Set bit = %x\n", res);

        res = set_rightmost_cleared_bit(snum);
        printf("Set Rightmost Cleared bit = %x\n", res);
        
        dnum = snum;
        clear_leftmost_set_bit(dnum);
        printf("Clear Leftmost Set bit = %x\n", dnum);

        dnum = snum;
        set_leftmost_cleared_bit(dnum);
        printf("Set Leftmost Cleared bit = %x\n", dnum);
        break;
    case 14:
        printf("Enter x = ");
        scanf("%d", &snum);
        printf("Enter s = ");
        scanf("%d", &s);  
        printf("Enter d = ");
        scanf("%d", &d);
        
        if (s < d) {
            printf("Set bit from %d to %d = %x\n", s, d, setbits_stod(snum, s, d));
            printf("Clear bit from %d to %d = %x\n", s, d, clearbits_stod(snum, s, d));
            printf("Toggle bit from %d to %d = %x\n", s, d, togglebits_stod(snum, s, d));
        } else {
            printf("S should be smaller than d");
        }
        break;
    case 15:
        printf("Enter num 1 = ");
        scanf("%d", &snum);
        printf("Enter num 2 = ");
        scanf("%d", &dnum);

        printf("Maximum = %d\n", maximum(snum, dnum));
        printf("Minimum = %d\n", minimum(snum, dnum));
        break;
    default:
        printf("Wrong choice!\n");
    }
   
    return 0;
}
       
     
