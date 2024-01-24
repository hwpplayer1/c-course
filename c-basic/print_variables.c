/**
 * @file print_variables.c
 * @author  Mert Gör (mertgor@masscollabs.xyz)
 * @brief print variables with different ways
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

    // int a = 10, b = 20; is another option

    printf("a = %d, b = %d\n", a, b);
    printf("a = %d, b = %d\n", b, a);
    printf("a and b printed together = %d%d\n", a, b);

    return 0;
}