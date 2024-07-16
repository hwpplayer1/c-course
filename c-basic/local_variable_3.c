#include <stdio.h>

int main()
{
    int a;
    
    a = 100;

    {
        int b;

        b = 20;
        a = 10;

        printf("a = %d, b = %d\n", a, b); // geçerli
    }

    printf("a = %d\n", a); 

    return 0;
}