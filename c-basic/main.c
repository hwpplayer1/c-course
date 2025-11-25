#include <stdio.h>

int add(int a , int b) {
  return a + b;
}

int mul(int a , int b) {
  return a * b;
}

int main() {
  int result;

  result = add(10,20);
  printf("%d\n", result);

  result = mul(10, 20);
  printf("%d\n", result);

  return 0;
}

// page 29
