/**
 * @file scanf-example-two-variables.c
 * @author Mert Gör (mertgor@masscollabs.xyz)
 * @brief scanf example with two variables
 * @version 0.1
 * @date 2024-01-24
 * 
 * @copyright Copyright (c) 2024 Mert Gör and contributors - GPLv3 or any later
 * 
 */

#include <stdio.h>

int main(){
    int a;
    int b;

    printf("enter two variables/numbers: ");
    scanf("%d%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}