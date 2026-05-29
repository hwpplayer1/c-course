#include <stdio.h>

int main() {

  int a = 0;
  int i;

  for (i = 0; i < 10; ++i) {

    a += 1;
    if (a == 9)
    break;
  }

  printf("a is %d\n", a);
  
  return 0;
  
}
