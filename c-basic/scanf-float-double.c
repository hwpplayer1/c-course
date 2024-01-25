/**

scanf-float.c - Scanf reads float as %f and double %lf
   
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

int main() {

  float f;
  double d;

  printf("enter your float variable: ");
  scanf("%f", &f);

  printf("enter your double variable: ");
  scanf("%lf", &d);

  printf("f = %f, d = %f\n", f, d);

  return 0;
}
