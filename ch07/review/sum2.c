/* sum2.c

   Book example using long variables.

   Sums a series of numbers (using long variables).

   C Programming: A Modern Approach, Second Edition
   Chapter 7, Page 131

   Ray Santos
   December 3, 2015

*/

#include <stdio.h>

int main(void)
{
   long n, sum = 0;

   printf("This program sums a series of integers.\n");
   printf("Enter integers (0 to terminate): ");

   scanf("%ld", &n);
   
   while (n != 0) {
      sum += n;
      scanf("%ld", &n);
   }

   printf("The sum is: %ld\n", sum);

   return 0;
}

/* Example run

$ gcc -Wall sum2.c 
$ ./a.out
This program sums a series of integers.
Enter integers (0 to terminate): 8 23 71 5 0
The sum is: 107
$ ./a.out
This program sums a series of integers.
Enter integers (0 to terminate): 80000000 230000000 710000000 50000000 0
The sum is: 1070000000
$

*/
