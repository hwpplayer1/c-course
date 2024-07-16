#include <stdio.h>

int main(){
    int a;

    a = 100;

    {
        int a;

        a = 10;
        printf("%d\n", a); // 10
    }

    printf("%d\n", a); // 100

    return 0;
}