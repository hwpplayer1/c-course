#include <stdio.h>

int main()
{
  double a,b,c;

  printf("enter a number \n");
  scanf("%lf", &a);

  printf("enter b number \n");
  scanf("%lf", &b);

  c = a + b;
  
  printf("your result and also c number is : %f\n", c);

  return 0;
}

