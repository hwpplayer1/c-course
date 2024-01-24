/**

print_variables.c - print variables with different ways
   
Copyright (C) 2023-2024 Mert Gör and contributors

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

Feel free to send an email to mertgor@masscollabs.xyz for your questions

 **/

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
