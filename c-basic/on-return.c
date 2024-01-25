/**

on-return.c - explaining return value
   
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

int foo() {
  printf("foo example\n");
  printf("we can access this code\n"); /*reachable code! */
  return 100;

  printf("unreachable code\n"); /*unreachable code! */
}

int main() {
  int result;

  result = foo() * 2;
  printf("%d\n", result);

  return 0;
}
