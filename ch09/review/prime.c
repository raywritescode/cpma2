/* prime.c

   Book example of how functions make
   a program easier to understand.

   Tests whether a number is prime.

   C Programming: A Modern Approach, Second Edition
   Chapter 9, Page 190

   Ray Santos
   December 18, 2015

*/

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

bool is_prime(int n)
{
   int divisor;

   if (n <= 1)
      return false;

   for (divisor = 2; divisor * divisor <= n; divisor++)
      if (n % divisor == 0)
         return false;

   return true;
}

int main(void)
{
   int n;

   printf("Enter a number: ");
   scanf("%d", & n);

   if (is_prime(n))
      printf("%d is prime\n", n);
   else
      printf("%d is not prime\n", n);

   return 0;
}

/* Example run

$ gcc -Wall prime.c 
$ ./a.out
Enter a number: 34
34 is not prime
$ ./a.out
Enter a number: 7
7 is prime
$ 

*/
