#include "header.h"

void ReadNextRecord(char *filename)
{
    struct student s;
    FILE *fp, *fw;
	int num_rec = 0, i, j;
	int fail, absent, sum;
	int cnt_bavg, cnt_avg, cnt_excel, cnt_except, cnt_fail, cnt_absent;
	cnt_bavg = cnt_avg = cnt_excel = 0;
	cnt_except = cnt_fail = cnt_absent = 0;
	char ch[1000];

	float perc = 0.0;
    fp = fopen (filename, "r");
    fw = fopen ("dbanalysis.txt", "w");

    if((fp == NULL) && (fw == NULL)){
        printf("Cannot open file!");
        exit (0);
    }

	s.name = (char *)malloc(sizeof(char)*SIZE);
	s.date = (char *)malloc(sizeof(char)*SIZE);

	while(fgets(ch, sizeof(ch), fp))
		num_rec ++;
	
	j = num_rec;
	fseek(fp, 0, SEEK_SET);
	while (j > 0) {
		fail = absent = sum = 0;
		
		fscanf(fp, "%d", &s.stud_id);
		fprintf(fw, "%d\t", s.stud_id);
		fscanf(fp, "%s", s.name);
		fprintf(fw, "%s\t", s.name);
		fscanf(fp, "%s", s.date);
		fprintf(fw, "%s\t", s.date);

		for(i = 0; i < 5; i ++) {
			if(fscanf(fp, "%d", &s.sub[i]) != EOF) {
				fprintf(fw, "%d\t", s.sub[i]);
		
				sum +=s.sub[i];
				if(s.sub[i] == 0) {
					absent = 1;
				}
				else if (s.sub[i] < 50) {
					fail = 1;
				}
			}
			else {
				break;
			}
		}

		perc = ((float)sum * 100) / 500;
		fprintf(fw, "%f\t", perc);

		if(fail == 1) {
			fprintf(fw, "%s\n", "FAIL");
			cnt_fail ++;
		}
		else if(absent == 1) {
			fprintf(fw, "%s\n", "ABSENT");
			cnt_absent ++;
		}
		else if(perc >= 50 && perc < 65) {
			fprintf(fw, "%s\n", "PASS - Below Average");
			cnt_bavg ++;
		}
		else if(perc >= 65 && perc < 70) {
			fprintf(fw, "%s\n", "PASS - Average");
			cnt_avg ++;
		}
		else if(perc >= 70 && perc < 80) {
			fprintf(fw, "%s\n", "PASS - Excellent");
			cnt_excel ++;
		}
		else if(perc >= 80 && perc < 100) {
			fprintf(fw, "%s\n", "PASS - Exceptional");
			cnt_except ++;
		}
	
		j --;
	}
	printf("----------------------------------------------------------\
			\nParticulars\t\t|Count\t|\tPercentage\
			\n----------------------------------------------------------");
	printf("\nFAIL\t\t\t|%d\t|\t%f\n\
			\nABSENT\t\t\t|%d\t|\t%f\n\
			\nPASS - Below Average\t|%d\t|\t%f\n\
			\nPASS - Average\t\t|%d\t|\t%f\n\
			\nPASS - Excellent\t|%d\t|\t%f\n\
			\nPASS - Exceptional\t|%d\t|\t%f\n",
			cnt_fail, (float)(cnt_fail * 100)/num_rec,
			cnt_absent, (float)(cnt_absent * 100)/num_rec,
			cnt_bavg, (float)(cnt_bavg * 100)/num_rec,
			cnt_avg, (float)(cnt_avg * 100)/num_rec,
			cnt_excel, (float)(cnt_excel * 100)/num_rec,
			cnt_except, (float)(cnt_except * 100)/num_rec);
	fclose(fp);
	fclose(fw);
    return;
}
