#ifndef _STDIO_H
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include "Assignment2.h"
#endif

int strrot(char *str, char *rstr)
{

 	int size1   = str_len(str);
	int size2   = str_len(rstr);
	char *temp;
 
    if (size1 != size2)
     	return 0;

 	temp   = (char *)malloc((size1 * 2) * sizeof(char));

    sappend(temp, str);
  	sappend(temp, str);
    
    if(sub_str(temp, rstr)) {
		return 1;
	}
	return 0;
}
