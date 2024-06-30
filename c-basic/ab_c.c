#include <stdio.h>

int main()
{
    double a, b, c;
    printf("type your number a:");
    scanf("%lf", &a);
    printf("type your number b:");
    scanf("%lf", &b);
    c = a + b;
    printf("c is %f\n", c);

    return 0;
}