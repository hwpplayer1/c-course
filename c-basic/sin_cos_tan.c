#include <stdio.h>
#include <math.h>

int main()
{
  double result;
  
  result = sin(3.141592653589793238462643 / 6);
  printf("%f\n", result);

  result = cos(3.141592653589793238462643 / 3);
  printf("%f\n", result);

  result = sin(3.141592653589793238462643 / 4) / cos(3.141592653589793238462643 / 4);
  printf("%f\n", result);

  result = tan(3.141592653589793238462643 / 2);
  printf("%f\n", result);

  result = tan(3.141592653589793238462643 / 4);
  printf("%f\n", result);

  return 0;
}
