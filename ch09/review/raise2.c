/* raise2.c

   Raises a number x to a power of n.

   My expanded version of the book's code snippet example showing
   how function arguments are passed by value.

   C Programming: A Modern Approach, Second Edition
   Chapter 9, Page 194

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
   int result = 1;

   while (n-- > 0)
      result = result * x;

   return result;
}

/* Example run

$ gcc -Wall raise2.c 
$ ./a.out
Raises a number x to a power of n.
Enter an integer for x: 3
Enter an integer for n: 3
3 raised to the power of 3 is 27

*/
