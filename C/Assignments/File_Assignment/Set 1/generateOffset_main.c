#include "header.h"

int main (int argc, char* argv[]) 
{
	FILE *fp;
	char *filename;

	if (argc < 2) {
		printf ("Pass the input file as commandline argument\n");
		return 0;
	}
	else {
		filename = argv[1];
		fp = fopen (filename, "r");
		if (fp == NULL) {
			printf ("Error in opening file\n");
			return 0;
		}
		getoffset(fp);
	}
}
