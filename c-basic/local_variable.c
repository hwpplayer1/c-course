#include <stdio.h>

int main()
{
    int a;

    {
        int b;

        b = 20;
        a = 10;

        printf("a = %d, b = %d\n", a, b); // geçerli
    }

    printf("a = %d\n", a); // geçerli
    // printf("b = %d\n", b); // geçersiz error !!

    return 0;
}