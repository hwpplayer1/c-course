#include <stdio.h>

void foo(int a, int b)
{
  printf("a = %d, b = %d\n", a, b);
}

int main()
{
  int x = 10, y = 20;

  foo(x,y);
  foo(x + 10, y + 10);
  foo(100, 200);

  return 0;
}
