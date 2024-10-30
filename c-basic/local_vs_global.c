#include <stdio.h>

int main()
{
  int a;

  {
    int b;

    b = 20;
    a = 10;

    printf("a = %d, b = %d\n", a, b);
    
  }

  printf("a = %d\n", a); // correct
  //  printf("b = %d\n", b); // incorrect/error
}
