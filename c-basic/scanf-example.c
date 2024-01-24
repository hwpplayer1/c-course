/**
 * @file scanf-example.c
 * @author Mert Gör (mertgor@masscollabs.xyz)
 * @brief gettıng input source via scancf 
 * @version 0.1
 * @date 2024-01-24
 * 
 * @copyright Copyright (c) 2024 Mert Gör and cotributors - GPLv3 or any later
 * 
 */

#include <stdio.h>

int main(){
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The number you typed is : %d\n", a);

    return 0;
}
