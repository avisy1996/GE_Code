#include "header.h"

int seq_access (FILE *fdb, int stud_id)
{
	char str[SIZE];
	fseek (fdb, 0, SEEK_SET);
	while(!feof(fdb)) {
		if (fgets(str, SIZE, fdb)) {
			char *c_stud = strtok (str, "\t");
			int studid = my_atoi (c_stud);
			if (studid == stud_id) {
				return 1;
			}
		}
	}
	return 0;
}

int rand_access (FILE *fdb, FILE *foffset, int stud_id)
{
	char str[SIZE];
	int offset;
	fseek (foffset, 0, SEEK_SET);
	while(!feof(foffset)) {
		if (fgets(str, SIZE, foffset)) {
			char *c_stud = strtok (str, "\t");
			int studid = my_atoi (c_stud);
			if (studid == stud_id) {
				offset = my_atoi (strtok(NULL, "\n"));
				break;
			}
		}
	}
	fseek(fdb, offset, SEEK_SET);
	if (fgets (str, SIZE, fdb)) {
		char *c_stud = strtok (str, "\t");
		int studid = my_atoi (c_stud);
		if (studid == studid) {
			return 1;
		}
	}
	return 0;
}

int main (int argc, char* argv[]) 
{
	FILE *fdb;
	FILE *foffset;
	clock_t t;
	int i, stud_id, seq_res, rand_res;
	double seq_time, rand_time;
	if (argc < 3) {
		printf("Pass the two input files as cmmand line arguments\n");
		return 0;
	}
	else {
		fdb = fopen (argv[1], "r");
		foffset = fopen (argv[2], "r");
		printf ("-----------------------------------------------------\n\
Record Id\t|Seq. Access Time\t|Random Access Time\n\
----------------------------------------------------\n");
		for (i = 0; i < 10; i ++) {
			stud_id = get_rand (1, MAX_RECORD);
			t = clock();
			seq_res = seq_access (fdb, stud_id);
			t = clock() - t;
			seq_time = ((double)t)/CLOCKS_PER_SEC;
			t = clock();
			rand_res = rand_access (fdb, foffset, stud_id);
			t = clock() - t;
			rand_time = ((double)t)/CLOCKS_PER_SEC;
			printf("%d\t\t|%f\t\t|%f\n", stud_id, seq_time, rand_time);
		}
	}
}
