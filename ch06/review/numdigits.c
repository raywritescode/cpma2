/* numdigits.c

   Book example of the do statment.

   Calculates the number of digits in an integer.

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Page 105

   Ray Santos
   December 2, 2015

*/

#include <stdio.h>

int main(void)
{
   int digits = 0, n;

   printf("Enter a non-negative integer: ");
   scanf("%d", &n);

   do {
      n /= 10;
      digits++;
   } while (n > 0);

   printf("The number has %d digit(s).\n", digits);

   return 0;
}

/* Example runs

$ gcc -Wall numdigits.c 
$ ./a.out
Enter a non-negative integer: 12345
The number has 5 digit(s).
$ ./a.out
Enter a non-negative integer: 1234
The number has 4 digit(s).
$ ./a.out
Enter a non-negative integer: 1
The number has 1 digit(s).
$ ./a.out
Enter a non-negative integer: 0
The number has 1 digit(s).

*/
