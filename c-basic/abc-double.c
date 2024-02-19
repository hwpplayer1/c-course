#include <stdio.h>

int main()
{
    double a, b, c;

    printf("a degerini giriniz :");
    scanf("%lf", &a);

    printf("b degerini giriniz :");
    scanf("%lf", &b);

    c = a + b;

    printf("c = %f\n", c);

    return 0;
}