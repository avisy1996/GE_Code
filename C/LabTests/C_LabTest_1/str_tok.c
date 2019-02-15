#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
char *str_tok(char*, char*);
int main (void)
{
    char *str, *delim, *token;

    str =(char*) malloc(sizeof(char) * MAX);
    delim = (char*) malloc(sizeof(char) * MAX);
   //token = (char*) malloc(sizeof(char) * MAX);
    printf("Enter the String : ");
    scanf("%s", str);
    printf("Enter the delim : ");
    scanf("%s", delim);

    while (*str != '\0')
    {
        token = str_tok(str, delim);
        if (*token != '\0')
            printf("--> %s\n", token);
        
        str = str + strlen(token) + 1;
    }
    return 0;
}

char *str_tok (char *str, char *delim)
{
    char *temp, *td;
    temp = str;
    td = delim;

    while (*str != '\0')
    {        
        while((*delim != *str) && (*delim != '\0'))
        {
            delim ++;
        }
        if(*str == *delim) {
            *str = '\0';
            break;
        }
        else {
            str++;
            delim = td;
        }
    }
    return temp;
}
