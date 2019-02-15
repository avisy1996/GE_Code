#include <stdio.h>
#define MAX 100
int check_str(char *str, char *sstr)
{
	int i, j, k;
	i = j = k = 0;
	while (str[i] != '\0') {
		k = i;
		if (str [i] == sstr [j]) {
			while ((sstr[j] == str [i]) && (sstr[j] !='\0')) {
				i++;
				j++;
			}
			if (sstr == '\0' && str[i] =='\0') 
				return 1;
			else {
				i = k + 1;
				j = 0;
			}
		}
		i ++;
	}
	return 0;
}
int main (void)
{
	char *str = "abcdavi";
	char *sstr = "avi";

	printf ("%d\n", check_str(str, sstr));
	return 0;
}

