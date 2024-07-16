#include <stdio.h>

int foo()
{
  printf("Foo\n");

  printf("test\n"); /* Reachable code */

  return 100;

}

int main()
{
  int result;

  result = foo() * 2;
  printf("%d\n", result);

  return 0;
}
