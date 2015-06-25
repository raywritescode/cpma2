/* ch02pr06.c

   Modify the program of Programming Project 5 (ch02pr05.c) so that
   the polynomial is evaluated using the following formula:

   ((((3x + 2)x - 5)x - 1)x + 7)x - 6

   Note that the modified program performs fewer multiplications.
   This technique for evaluating polynomials is known as Horner's Rule.

   C programming: A Modern Approach, Second Edition
   Chapter 2. Page 34. Programming Project 06

   Ray Santos
   June 24, 2015

*/

#include <stdio.h>

int main(void)
{
  int x, value;

  printf("Enter an integer value for x: ");
  scanf("%d", &x);

  value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("The value of ((((3x +2)x - 5)x - 1)x + 7)x - 6 is: %d\n\n", value);

  return 0;
}

/* Program Execution

$ gcc -Wall ch02pr06.c
$ ./a.out
Enter an integer value for x: 1
The value of ((((3x +2)x - 5)x - 1)x + 7)x - 6 is: 0

$ ./a.out
Enter an integer value for x: 2
The value of ((((3x +2)x - 5)x - 1)x + 7)x - 6 is: 92

*/
