#include <stdio.h>

int main()
{
    int a = 100;

    printf("a = %d\n", a); 

    {
        int b;

        b = 20;
        a = 10;

        printf("a = %d, b = %d\n", a, b); // geçerli
    }

    printf("a = %d\n", a); 

    return 0;
}