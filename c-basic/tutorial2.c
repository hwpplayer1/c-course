/**
   
# License

Kaan Aslan'ın notundan faydalanılmıştır.

Other contributions are licensed under the terms of GPLv3+ License like written below

C, Systems Programming and UNIX/Linux course 

Copyright (C) 2023 Mert Gör and contributors

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
**/


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
