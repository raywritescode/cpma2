/* raise1.c

   Raises a number x to a power of n.

   My expanded version of the book's code snippet example showing
   how function arguments are passed by value.

   C Programming: A Modern Approach, Second Edition
   Chapter 9, Page 193

   Ray Santos
   January 6, 2016

*/

#include <stdio.h>

int power(int x, int n);

int main(void)
{
   int n;
   int x;

   printf("Raises a number x to a power of n.\n");
   printf("Enter an integer for x: ");
   scanf("%d", &x);
   printf("Enter an integer for n: ");
   scanf("%d", &n);

   printf("%d raised to the power of %d is %d\n", x, n, power(x, n)); return 0;
}

int power(int x, int n)
{
   int i, result = 1;

   for (i = 1; i <= n; i++)
      result = result * x;

   return result;
}

/* Example run

$ gcc -Wall raise1.c 
$ ./a.out
Raises a number x to a power of n.
Enter an integer for x: 2
Enter an integer for n: 9
2 raised to the power of 9 is 512

*/
