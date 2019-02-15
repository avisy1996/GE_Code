#ifndef _STDIO_H
    #include <stdio.h>
#endif

void str_cpy (char *, char *);
void str_n_cpy (char *, char *, int n);
char *chr_add_instr (char *, char);
char *sappend (char *, char *);
char *snappend (char *, char *, int n);
char str_cmp (char *, char *);
int str_case_cmp (char *, char*);
void to_lower (char *);
int str_spn (const char*, const char*);
int find (const char *, char);
char *str_tok (char *, char *);
int strrot (char*, char*);
char *sub_str (char*, char*);
char *str_squeeze (char*);
int str_len (char*);
int palindrome (char*);
char *str_rev(char*);
char *rem_sstr(char*, char*);
char *insert_char(char *, char, int);
