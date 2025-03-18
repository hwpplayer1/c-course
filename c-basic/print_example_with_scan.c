#include <stdio.h>

int main()
{
  int a , b ;

  printf("enter a number\n");
  scanf("%d", &a);

  printf("enter b number\n");
  scanf("%d", &b);

  printf("a is %d\n", a);
  printf("b is %d\n", b);

  printf("a is %d b is %d\n", a, b);
  printf("b is %d a is %d\n", b, a);
  
  return 0;
}
