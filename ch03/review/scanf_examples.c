/* scanf_examples.c

   scanf function examples.

   C Programming: A Modern Approach, Second Edition
   Chapter 3, Page 42  

   Ray Santos
   June 29, 2015

*/

#include <stdio.h>

int main(void)
{
  int i, j;
  float x, y;

  printf("Enter the following numbers on one line as shown: 1 -20 .3 -4.0e3\n");

  scanf("%d%d%f%f", &i, &j, &x, &y);

  printf("%d, %d, %f, %f\n", i, j, x, y);

  return 0;
}

/* Program Execution

$ gcc -Wall scanf_examples.c 
$ ./a.out
Enter the following numbers on one line as shown: 1 -20 .3 -4.0e3
1 -20 .3 -4.0e3
1, -20, 0.300000, -4000.000000

*/
