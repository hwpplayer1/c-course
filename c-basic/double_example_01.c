#include <stdio.h>

int main()
{
  double a,b,c;
  printf("enter double number a:\n");
  scanf("%lf", &a);
  printf("enter double number b:\n");
  scanf("%lf", &b);

  c = a + b;

  printf("%f", c);

  return 0;
}
