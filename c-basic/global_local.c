#include <stdio.h>

int a;

void foo()
{
  int a;

  a = 10; 
}

int main()
{
  a = 20; 

  printf("%d\n", a); 
  foo();
  printf("%d\n", a);

  return 0;
}
