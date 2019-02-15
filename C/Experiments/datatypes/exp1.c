#include <stdio.h>

int main (void)
{
	char ch;
	int no = 0x12345678;

	ch = (char)no;

	printf ("%c %x\n", ch, no);

	return 0;
}
