#include <stdio.h>

int foo()
{
  printf("I am foo\n");
  return 100;
  printf("I am test\n"); // unreachable code
}

int main()
{
  int result;

  result = foo() * 2;
  printf("result = %d\n", result);
}
