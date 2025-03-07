#include <stdio.h>
#include <ncurses.h>

int main(void)
{

  char ch;

  do
{

  printf("(e)vet/(h)ayir?");

  ch = getch();
  printf("%c\n", ch);
} while (ch != 'e' && ch != 'h');

  if (ch == 'e')

    printf("evet secildi\n");

  else

    printf("hayir secildi\n");

  return 0;
}
