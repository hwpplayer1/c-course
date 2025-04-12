#include <stdio.h>

int main()
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
