#include <stdio.h>

int a;

void foo(){
    a = 10;
}

int main(){
    a = 20;
    printf("%d\n", a); // 20
    foo();
    printf("%d\n", a); // 10

    return 0;
}