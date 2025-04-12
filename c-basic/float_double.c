#include <stdio.h>

int my_float()
{
  float f;
  double d;

  printf("float :");
  scanf("%f", &f);

  printf("double :");
  scanf("%lf", &d);

  printf("f = %f, d = %f", f, d);

  return 0;
}
