#include <stdio.h>

int a;

void foo()
{
    int a;

    a = 10; /* yerel olan a */
}

int main()
{
    a = 20;            /* global olan a */
    printf("%d\n", a); /* 20 */
    foo();
    printf("%d\n", a); /* 20 */

    return 0;
}