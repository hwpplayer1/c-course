#include <stdio.h>

int main(){
    int a;
    
    a = 10;

    printf("%d\n", a); 

    {
        int a;
        int b;

        a = 40;
        b = 50;

        printf("a = %d , b = %d\n", a, b); 
    }

    printf("%d\n", a); 

    return 0;
}

