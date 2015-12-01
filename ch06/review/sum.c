/* sum.c

   Book example: Sums a series of numbers.

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Page 103

   Ray Santos
   November 30, 2015

*/

#include <stdio.h>

int main(void)
{
   int n, sum = 0;

   printf("This program sums a series of integers.\n");
   printf("Enter integers (0 to terminate): ");
   scanf("%d", &n);

   while (n != 0) {
      sum += n;
      scanf("%d", &n);
   }

   printf("The sum is: %d\n", sum);

   return 0;
}

/* Example run

$ gcc -Wall sum.c 
$ ./a.out
This program sums a series of integers.
Enter integers (0 to terminate): 8 23 71 5 0
The sum is: 107

*/
