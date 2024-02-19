#include <stdio.h> 
 
void foo() 
{ 
//   a = 10;   /* geçersiz! */ 
} 
 
int a; 
 
int main() 
{ 
  a = 10;     /* geçerli */ 
  printf("%d\n", a);   /* geçerli */ 
 
  return 0; 
} 