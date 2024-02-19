#include <stdio.h>

int main(){
    int a;

    a = 10;

    {
        int a;

        a = 20;
        printf("%d\n", a);
    }
    
    printf("%d\n", a);

    return 0;

}