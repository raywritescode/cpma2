/* reverse2.c

   Book example of a variable-length array.

   Reverses a series of numbers using a variable-length array - C99 only.

   C Programming: A Modern Approach, Second Edition
   Chapter 8, Page 174

   Ray Santos
   December 8, 2015

*/

#include <stdio.h>

int main(void)
{
   int i, n;

   printf("How many numbers do you want to reverse? ");
   scanf("%d", &n);

   int a[n];  /* C99 only - length or array depends on n */

   printf("Enter %d numbers: ", n);
   for (i = 0; i < n; i++)
      scanf("%d", &a[i]);

   printf("In reverse order:");
   for (i = n - 1; i >= 0; i--)
      printf(" %d", a[i]);
   printf("\n");

   return 0;
}

/* Example runs

$ gcc -Wall reverse2.c 
$ ./a.out
How many numbers do you want to reverse? 10
Enter 10 numbers: 0 1 2 3 4 5 6 7 8 9 
In reverse order: 9 8 7 6 5 4 3 2 1 0
$ ./a.out
How many numbers do you want to reverse? 5
Enter 5 numbers: 1 2 3 4 5 6 7 8 9
In reverse order: 5 4 3 2 1
$ 

*/
