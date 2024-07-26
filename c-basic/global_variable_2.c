#include <stdio.h>

int a;

void foo()
{
  int a;

  a = 10; // yerel a
  printf("%d\n", a);
}

int main()
{
  a = 20;                     // global a
  printf("%d\n", a);          // 20
  foo();                      // 10
  printf("%d\n", a);          // 20

  return 0;
}
