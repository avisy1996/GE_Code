#include <stdio.h>
#include <stdlib.h>

int main()
{
  int j, *buf;

  for (j = 0; j < 10; j++) {
    buf = (int *) malloc(12);
    printf("malloc(4) returned 0x%x\n", (unsigned int) buf);
  }
  return 0;
}

