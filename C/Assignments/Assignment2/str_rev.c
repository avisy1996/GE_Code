#ifndef _STDIO_H
    #include <stdio.h>
    #include "Assignment2.h"
#endif 
char *str_rev(char *str)
 {
 	int i = 0, j = 0, temp;
	
    j = str_len(str) - 1;
 
    while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i ++;
      j --;
   }
 
   return str; 
 }
