/**

foo.c - foo example
   
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

int foo()
{
  printf("I am foo\n");
}

int main()
{
  foo();
}

/**
   In the written book it is foo() and main() and it returns this warning
   ~/Projects/hwpplayer1/c-course/c-basic $ gcc foo.c 
foo.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | foo()
      | ^~~
foo.c:8:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    8 | main()
      | ^~~~
 **/
