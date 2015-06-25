/* ch02pr05.c

   Write a program that asks the user to enter a value for x and
   then displays the value of the following polynomial:

   3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

   Hint: C doesn't have an exponentiation operator, so you'll need
   to multiply x by itself repeatedly in order to compute the
   powers of x.

   C programming: A Modern Approach, Second Edition
   Chapter 2. Page 34. Programming Project 05

   Ray Santos
   June 24, 2015

*/

#include <stdio.h>

int main(void)
{
  int x, a, b, c, d, e, value;

  printf("Enter an integer value for x: ");
  scanf("%d", &x);

  a = 3 * (x * x * x * x * x);
  b = 2 * (x * x * x * x);
  c = 5 * (x * x * x);
  d = x * x;
  e = 7 * x;
  value = a + b - c - d + e - 6;

  printf("The value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is: %d\n\n", value);

  return 0;
}

/* Program Execution

$ gcc -Wall ch02pr05.c
$ ./a.out
Enter an integer value for x: 1
The value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is: 0

$ ./a.out
Enter an integer value for x: 2
The value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is: 92

*/
