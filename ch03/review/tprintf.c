/* tprintf.c

   Illustrates the use of printf to print integers and
   floating-point numbers in various formats.

   C Programming: A Modern Approach, Second Edition
   Chapter 3, Page 40 

   Ray Santos
   June 28, 2015

*/

#include<stdio.h>

int main(void)
{
  int i;
  float x;

  i = 40;
  x = 839.21f;

  printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
  printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

  return 0;
}

/* Program Execution

$ gcc -Wall tprintf.c 
$ ./a.out
|40|   40|40   |  040|
|   839.210| 8.392e+02|839.21    |

*/
