#include "header.h"
#define YEAR 1995
#define DAY 31
#define MONTH 12
struct student getNextRecord(int num_rec)
{
    struct student s;
	struct dob d;
    int i, j;
	
	s.name = (char*) malloc (sizeof(char) * SIZE);
    s.date = (char*) malloc (sizeof(char) * SIZE);
   
	s.stud_id = get_rand(1, num_rec);
	sprintf(s.name, "Name%05d", s.stud_id); 
    
	d.day = (rand() % DAY) + 1;
    d.month = (rand() % MONTH) + 1;
	d.year = (rand() % 2) + YEAR;
   

	sprintf(s.date, "%u/%u/%u", d.day, d.month, d.year);
	for(i = 0; i < 5; i++) {
        s.sub[i] = (rand() % 100) + 1;
    }
    return s;
}
