#include <stdio.h>

int foo(){
    printf("Foo\n");

    return 100;

    printf("test\n");   /* unreachable code! */ 
}

int main(){
    int result;

    result = foo() * 2;

    printf("%d\n", result);

    return 0;
}