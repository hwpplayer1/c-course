#include <stdio.h>

int scan_two_numbers()
{
  int a, b;

  printf("enter two numbers:");
  scanf("%d%d", &a, &b);

  printf("a = %d, b = %d\n", a, b);

  return 0;
}
