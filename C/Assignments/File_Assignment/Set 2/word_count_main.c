#include "word_count.h"

int main(int argc, char **argv)
{
    int count = 0;
    double buff_time, sys_time;
    clock_t tsys, tbuff;
    if (argc < 4) {
        printf ("Pass option and file name as cmd args\n");
        return 0;
    }
    if (str_cmp (argv[1], "-DSYS-CALL") == 0 ||
            str_cmp (argv[2], "-DSYS-CALL") == 0 || 
            str_cmp (argv[1], "-time") == 0 ||
			str_cmp (argv[2], "-time") == 0) {
		int fp;
		tsys = clock();
		fp = open (argv[3], O_RDONLY);
		if (fp == -1) {
			printf ("Cannot open file %s\n", argv[3]);
			return -1;
		}

		if (str_cmp (argv[1], "-c") == 0 || str_cmp (argv[2], "-c") == 0) {
			count = byte_count_sys (fp);
			if (count == -1) {
				printf("cannot open file %s\n", argv[3]);
				return 0;
			}
			else {
				printf ("Byte Count = %d\n", count);
			} 
		}

		if (str_cmp (argv[1], "-m") == 0 || str_cmp (argv[2], "-m") == 0) {
			count = char_count_sys (fp);
			if (count == -1) {
				printf("cannot open file %s\n", argv[3]);
				return 0;
			}
			else {
				printf ("Char Count = %d\n", count);
			} 
		}
		if (str_cmp (argv[1], "-l") == 0 || str_cmp (argv[2], "-l") == 0) {
			count = line_count_sys (fp);
			if (count == -1) {
				printf("cannot open file %s\n", argv[3]);
				return 0;
			}
			else {
				printf ("Line Count = %d\n", count);
			} 
		}
		if (str_cmp (argv[1], "-L") == 0 || str_cmp (argv[2], "-L") == 0) {
			count = max_line_length_sys (fp);
			if (count == -1) {
				printf("cannot open file %s\n", argv[3]);
				return 0;
			}
			else {
				printf ("Max line Count = %d\n", count);
			}
		}
		if (str_cmp (argv[1], "-w") == 0 || str_cmp (argv[2], "-w") == 0) {
			count = word_count_sys (fp);
			if (count == -1) {
				printf("cannot open file %s\n", argv[3]);
				return 0;
			}
			else {
				printf ("Word Count = %d\n", count);
			} 
		}
		if (str_cmp (argv[1], "-p") == 0 || str_cmp (argv[2], "-p") == 0) {
			count = punct_count_sys (fp);
			if (count == -1) {
				printf("cannot open file %s\n", argv[3]);
				return 0;
			}
			else {
				printf ("Punctuation Count = %d\n", count);
			} 
		} 
		tsys = clock() - tsys;
		close(fp);
		sys_time = ((double)tsys)/CLOCKS_PER_SEC;
		printf ("System Call time : %lf\n", sys_time);
    }
    if (str_cmp (argv[1], "-DBUFF-CALL") == 0 ||
                str_cmp (argv[2], "-DBUFF-CALL") == 0 || 
                str_cmp (argv[1], "-time") == 0 ||
                str_cmp (argv[2], "-time") == 0) {
        FILE *fp;
        tbuff = clock();
        fp = fopen (argv[3], "r+");
        
        if (fp == NULL){
            printf("cannot open file %s\n", argv[3]);
            return -1;
        }

        if (str_cmp (argv[1], "-c") == 0 || str_cmp (argv[2], "-c") == 0) {
            count = char_count (fp);
            if (count == -1) {
                printf("cannot open file %s\n", argv[3]);
                return 0;
            }
            else {
                printf ("Byte Count = %d\n", count);
            } 
        }
        if (str_cmp (argv[1], "-m") == 0 || str_cmp (argv[2], "-m") == 0) {
            count = char_count (fp);
            if (count == -1) {
                printf("cannot open file %s\n", argv[3]);
                return 0;
            }
            else {
                printf ("Character Count = %d\n", count);
            } 
        }
        if (str_cmp (argv[1], "-l") == 0 || str_cmp (argv[2], "-l") == 0) {
            count = line_count (fp);
            if (count == -1) {
                printf("cannot open file %s\n", argv[3]);
                return 0;
            }
            else {
                printf ("Line Count = %d\n", count);
            }
        }
        if (str_cmp (argv[1], "-L") == 0 || str_cmp (argv[2], "-L") == 0) {
            count = max_line_length (fp);
            if (count == -1) {
                printf("cannot open file %s\n", argv[3]);
                return 0;
            }
            else {
                printf ("Max Line Length = %d\n", count);
            }
        }
        if (str_cmp (argv[1], "-w") == 0 || str_cmp (argv[2], "-w") == 0) {
            count = word_count (fp);
            if (count == -1) {
                printf("cannot open file %s\n", argv[3]);
                return 0;
            }
            else {
                printf ("Word Count = %d\n", count);
            }
        }
        if (str_cmp (argv[1], "-p") == 0 || str_cmp (argv[2], "-p") == 0) {
            count = word_count (fp);
            if (count == -1) {
                printf("cannot open file %s\n", argv[3]);
                return 0;
            }
            else {
                printf ("Punctuation Count = %d\n", count);
            }
        }
        fclose (fp);
        tbuff = clock() - tbuff;
        buff_time = ((double)tbuff)/CLOCKS_PER_SEC;
		printf ("Buffered IO time : %lf\n", buff_time);
    }
    return 0;
}
