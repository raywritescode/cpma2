/* conversion.c

   Example of C conversion specifications.

   C Programming: A Modern Approach, Second Edition
   Chapter 3, Page 38

   Ray Santos
   June 27, 2015

*/

#include <stdio.h>

int main(void)
{
  int i, j;
  float x, y;

  i = 10;
  j = 20;
  x = 43.2892f;
  y = 5527.0f;

  printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

  return 0;
}

/* Program Execution

$ gcc -Wall conversion.c 
$ ./a.out
i = 10, j = 20, x = 43.289200, y = 5527.000000

*/
