#include <stdio.h>

int foo()
{
  printf("I am foo\n");
}

int main()
{
  foo();
}

/**
   In the written book it is foo() and main() and it returns this warning
   ~/Projects/hwpplayer1/c-course/c-basic $ gcc foo.c 
foo.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | foo()
      | ^~~
foo.c:8:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    8 | main()
      | ^~~~
 **/
