#include "header.h"

void getoffset(FILE *fp)
{
	int i;
	int pos = 0;
	FILE *fn = fopen ("index.txt", "w");
	struct student st;
	
	st.name = (char *) malloc (sizeof(char) * SIZE);
	st.date = (char *) malloc (sizeof(char) * SIZE);
	while (!feof(fp))
	{
		fgetpos (fp, &pos);
		fscanf(fp, "%d %s %s %d%d%d%d%d", &st.stud_id, st.name, st.date,
				&st.sub[0], &st.sub[1], &st.sub[2], &st.sub[3], &st.sub[4]);
		if (pos != 0)
			pos = pos + 1;
		fprintf(fn, "%d\t%d\n", st.stud_id, pos);
	}
}
