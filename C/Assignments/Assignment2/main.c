/* Name : Assignment 2 main.c file
Author : Avinash Yadav
Date : 30/06/2018 */

/* Use command line argument to choose one of the following operation : 
    1. String Copy (strcpy())
    2. String Copy (strncpy())
    3. Address of first occureence of char (chr_add_instr())
	4. sappend()
	5. snappend()
	6. strcmp()
	7. strcasecmp()
	8. strspn()
	9. strtok()
	10. palindrome()
	11. strrev()
	12.	str_squeeze()
    13. strrot()
	14. remsstr()
	15. insertchar()
*/

#ifndef _STDIO_H
    #include <stdio.h>
    #include <stdlib.h>
    #include "Assignment2.h"
#endif

#define MAX 100

int main(void)
{
    char *sbuf, *dbuf;
    sbuf = (char*) malloc (sizeof(char) * MAX);
    dbuf = (char*) malloc (sizeof(char) * MAX);

    #if CH == 1
        printf ("Enter the word : ");
        scanf ("%s", sbuf);
        str_cpy (dbuf, sbuf);
        printf ("Destination String = %s\n", dbuf);
    #endif
    #if CH == 2
        int n;
        
        printf ("Enter the word : ");
        scanf ("%s", sbuf);
        printf ("Enter n : ");
        scanf ("%d", &n);
        str_n_cpy (dbuf, sbuf, n);
        printf ("Destination String = %s\n", dbuf);
    #endif
    #if CH == 3
        char ch;

        printf ("Enter the word : ");
        scanf ("%s", sbuf);
        printf ("Enter the char to search : ");
        scanf (" %c", &ch);
        printf ("Address of %c = %p\n", ch, chr_add_instr (sbuf, ch));
    #endif
    #if CH == 4
        printf ("Enter the 1st word : ");
        scanf ("%s", sbuf);
        printf ("Enter the 2nd word : ");
        scanf ("%s", dbuf);
        sappend (sbuf, dbuf);
        printf ("String = %s\n", sbuf); 
    #endif
    #if CH == 5
        int n;

        printf ("Enter the 1st word : ");
        scanf ("%s", sbuf);
        printf ("Enter the 2nd word : ");
        scanf ("%s", dbuf);
        printf ("Enter no of characters to append : ");
        scanf ("%d", &n);

        snappend (sbuf, dbuf, n);
        printf ("String = %s\n", sbuf); 
    #endif
    #if CH == 6 
        printf ("Enter the 1st word : ");
        scanf ("%s", sbuf);
        printf ("Enter the 2nd word : ");
        scanf ("%s", dbuf);
        printf ("String Compare = %d\n", (int) str_cmp (sbuf, dbuf)); 
    #endif
    #if CH == 7
        printf ("Enter the 1st word : ");
        scanf ("%s", sbuf);
        printf ("Enter the 2nd word : ");
        scanf ("%s", dbuf);
        printf ("String Compare = %d\n", str_case_cmp (sbuf, dbuf)); 
    #endif 
    #if CH == 8
        printf ("Enter the 1st word : ");
        scanf ("%s", sbuf);
        printf ("Enter the 2nd word : ");
        scanf ("%s", dbuf);
        printf ("Count = %d\n", str_spn (sbuf, dbuf)); 
    #endif
    #if CH == 9
        char *token;
	    printf("Enter the String : ");
    	scanf("%s", sbuf);
    	printf("Enter the delim : ");
    	scanf("%s", dbuf);

    	while (*sbuf != '\0') {
        	token = str_tok(sbuf, dbuf);
        	if (*token != '\0') {
            		printf("--> %s\n", token);
            }
        	sbuf = sbuf + str_len(token) + 1;
    	}
    #endif
    #if CH == 10
        printf ("Enter the word : ");
        scanf ("%s", sbuf);
        if(palindrome (sbuf)) {
            printf ("String %s is palindrome!\n", sbuf); 
        }
        else {           
            printf ("String %s is not palindrome!\n", sbuf); 
        }
    #endif
    #if CH == 11
        printf ("Enter the word : ");
        scanf ("%s", sbuf);
        str_rev (sbuf);
        printf ("String = %s\n", sbuf); 
    #endif
    #if CH == 12
        printf ("Enter the word : ");
        scanf ("%s", sbuf);
        str_squeeze (sbuf);
        printf ("String = %s\n", sbuf); 
    #endif
    #if CH == 13
        printf ("Enter the 1st word : ");
        scanf ("%s", sbuf);
        printf ("Enter the 2nd word : ");
        scanf ("%s", dbuf);
        if(strrot (sbuf, dbuf)) {
            printf("%s is rotated string of %s\n", dbuf, sbuf);
        }
        else {     
            printf("%s is not rotated string of %s\n", dbuf, sbuf);
        }
    #endif
    #if CH == 14
        printf ("Enter the 1st word : ");
        scanf ("%s", sbuf);
        printf ("Enter the 2nd word : ");
        scanf ("%s", dbuf);
        rem_sstr (sbuf, dbuf);
        printf ("String = %s\n", sbuf); 
    #endif
    #if CH == 15
        char c;
        int pos;
        printf ("Enter the 1st word : ");
        scanf ("%s", sbuf);
        printf ("Enter char to insert : ");
        scanf (" %c", &c);
        printf ("Enter position : ");
        scanf ("%d", &pos);
        insert_char (sbuf, c, pos);
        printf ("String = %s\n", sbuf); 
    #endif
    return 0;
}
 
