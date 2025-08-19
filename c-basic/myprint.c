#include <stdio.h>
#include "myprint.h"

int myprint() {
 
  int a = 10, b = 20;

  printf("a = %d, b = %d\n", a, b);
  printf("a = %d, b = %d\n", b, a);
  printf("%d%d\n", a, b);

  return 0;
}
