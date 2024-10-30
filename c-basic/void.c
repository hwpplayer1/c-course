#include <stdio.h>

void foo()
{
  printf("I'm foo\n");
}

int main()
{
  printf("I'm main\n");

  foo();

  return 0;
}
