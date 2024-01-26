/**

on-return.void.c - if we pass void then it means function has no return value, and those functions are void functions
   
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

void foo() {
  printf("foo\n");
}

int main() {
  printf("I am main\n");

  foo();

  return 0;
}



