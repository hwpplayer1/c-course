#include <stdio.h>
#include <math.h>

int main()
{
  double val;
  double result;

  printf("Enter a number");
  scanf("%lf", &val);

  result = sqrt(val);
  printf("%f\n", result);

  return 0;
}
