// tutorial 2 : vaiables
#include<stdio.h>
// you can create vaiables this way
// global variables can be accessed thourught the entire program
int i = 12;
float pi = 3.14;
char a = 'g';
//

int main(){
    /* local variables can be used only
        within the scope in which they are defined in
     */
    int local_variable = 34;
    char alphabet = 'g';

    printf("local vaiables : \n");
    printf("%d, %c",local_variable, alphabet); // you can print vaibles this way
    printf("global vaiables : \n");
    printf("%d, %f, %c",i, pi, a); // you can print vaibles this way

    /*
    %d is for integers
    %f is for float
    %d is for double
    %c is for char
    %s is for string
    */
   /*
    char takes one byte
    integers takes 4 bytes
    float takes up 4 bytes
   */
  return 0;
}

// HAPPY CODING !!!!