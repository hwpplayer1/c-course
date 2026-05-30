#include <stdio.h>
#include <ncurses.h>

int main(void) {
  printf("Press any key to continue...\n");
  getch();
  printf("ok\n");

  return 0;
}
