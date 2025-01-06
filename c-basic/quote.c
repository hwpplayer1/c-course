/**
   Tek tırnak karakterinin karakter sabiti ''' biçiminde yazılamaz. '\'' biçiminde belirtilir. Fakat çift tırnak içerisinde tek
tırnak soruna yol açmaz. Örneğin:
 **/

#include <stdio.h>

int main()
{

  char ch = '\'';
  printf("%c\n", ch);
  printf("Turkiye'nin baskenti Ankara'dir\n");/* geçerli */
  printf("Turkiye\'nin baskenti Ankara\'dir\n"); /* geçerli */
  
  return 0;
}
