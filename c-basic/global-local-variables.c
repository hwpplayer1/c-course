#include <stdio.h>

int main(){
    int a;

    {
        int b;

        b = 20;
        a = 10;

        printf("a = %d, b = %d\n", a, b); // correct
    }

    printf("a = %d\n", a); // correct 
    // printf("b = %d\n", b); // error
    /**
     * hwpplayer1@hwpplayer1-Aspire-A315-24P:~/Projects/hwpplayer1/c-course/c-basic$ gcc global-local-variables.c 
global-local-variables.c: In function ‘main’:
global-local-variables.c:16:24: error: ‘b’ undeclared (first use in this function)
   16 |     printf("b = %d\n", b); // error
      |                        ^
global-local-variables.c:16:24: note: each undeclared identifier is reported only once for each function it appears in
     * 
     */
}
