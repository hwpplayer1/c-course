#include <stdio.h>

int main(){
    int a;
    
    a = 10;

    printf("%d\n", a); 

    {
        int b;

        b = 30;

        a = 20;
        printf("a = %d , b = %d\n", a, b); 
    }

    printf("%d\n", a); 

    return 0;
}

