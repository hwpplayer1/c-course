/**
 * @file scanf-hex.c
 * @author Mert Gör (mertgor@masscollabs.xyz)
 * @brief Scanf accepts the int variable as hex if we pass %x 
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
    printf("enter a number : ");
    scanf("%x", &a);
    printf("a = %d\n", a);

    return 0;
}