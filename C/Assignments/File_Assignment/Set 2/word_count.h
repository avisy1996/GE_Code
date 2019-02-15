#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>
#define MAX 1000
char *str_tok (char *, char *);
int str_cmp (char *, char *);
int str_len (char *);
int my_ispunct(char);
int char_count(FILE *);
int byte_count(FILE *);
int word_count(FILE *);
int line_count(FILE *);
int punct_count(FILE *);

int max_line_length(FILE *);
int byte_count_sys(int);
int char_count_sys(int);
int word_count_sys(int);
int punct_count_sys(int);
int line_count_sys(int);
int max_line_length_sys(int);
