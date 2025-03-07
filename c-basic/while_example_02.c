#include <stdio.h>

int main(void)
{
  int i = 10;

  while (i) {
    printf("%d\n", i);
    --i;
  }

  return 0;
}
