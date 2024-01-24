/**
 * @file initialization-variable.c
 * @author Mert Gör (mertgor@masscollabs.xyz)
 * @brief Swap Algorithm with initialized variables
 * @version 0.1
 * @date 2024-01-24
 * 
 * @copyright Copyright (c) 2024 Mert Gör and contributors - GPLv3 or any later
 * 
 */

#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("a value is: %d\n", a);
    printf("a value is: %d\n", b);
    
    return 0;
}

