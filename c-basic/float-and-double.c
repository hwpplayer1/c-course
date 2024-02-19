#include <stdio.h>

int main(){
    float f;
    double d;

    printf("float bir deger giriniz:");
    scanf("%f", &f);

    printf("double bir deger giriniz: ");
    scanf("%lf", &d);

    printf("f = %f, d = %f\n", f, d);

    return 0;
}