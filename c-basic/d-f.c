#include <stdio.h>

int main()
{
  float f;
  double d;

  printf("enter a float number: \n");
  scanf("%f", &f);

  printf("enter a double number: \n");
  scanf("%lf", &d);

  printf("f = %f, d = %f \n", f , d);

  return 0;

}
