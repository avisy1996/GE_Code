#include "header.h"
int main (int argc, char* argv[])
{
    FILE *fp;
    char *n_rec;
    char *filename;
    int num_rec, i = 0, j;
    
    if(argc < 2) {
		printf ("Pass input file as command line argument\n");
        return 0;
    }
    else if (argc == 2) {
        num_rec = MAX_RECORD;
        filename = argv[1];
    }
    else {
        n_rec = argv[1];
        if((*n_rec == '/') && ((*(n_rec + 1)) == 'C')) {
            num_rec = my_atoi(n_rec + 2);
        }
        filename = argv[2];
    }
    
    fp = fopen (filename, "w");
    
    if(fp == NULL) {
        return 0;
    }
   	
	for( i = 0; i < num_rec; i++)
  	{
        struct student s;
        s = getNextRecord(num_rec);  

	    fprintf(fp, "%d\t%s\t%s\t", s.stud_id, s.name, s.date);
    	for(j = 0; j < 5; j++) {
			if(j == 4)
				fprintf(fp, "%d\n", s.sub[j]);
			else
				fprintf(fp, "%d\t", s.sub[j]);
    	}
	}
    fclose(fp);   
	
	ReadNextRecord(filename);
	
	return 0;      
}
