#include <stdio.h>

int main()
{
  int a;

  a = 10;

  {
    int a;

    a = 20;
    printf("%d\n", a); // 20
  }

  printf("%d\n", a); // 10

  return 0;
}
