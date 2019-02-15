#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define SIZE 100
#define MAX_RECORD 20000

struct dob {                                                             
    int day;  
    int month;                                                    
    int year;                                            
};
struct student {
    int stud_id;                                                    
    char *name;   
    char *date;                                                  
    int sub[5];                                   
};

int my_atoi (char *);
int get_rand(int,const int);
void getoffset (FILE *);
struct student getNextRecord(int);
void ReadNextRecord(char *);








