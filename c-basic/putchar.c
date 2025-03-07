#include <stdio.h>
#include <ncurses.h>

int main()
{
  char ch;

  while ((ch = getch()) != 'q')
    putchar(ch);

  return 0;
}
