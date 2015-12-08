/* reverse.c

   Book example using a one-dimensional array.

   Reverses a series of numbers.

   C Programming: A Modern Approach, Second Edition
   Chapter 8, Page 164

   Ray Santos
   December 7, 2015

*/

#include <stdio.h>

#define N 10

int main(void)
{
   int a[N], i;

   printf("Enter %d numbers: ", N);
  
   for (i = 0; i < N; i++)
      scanf("%d", &a[i]);

   printf("In reverse order:");

   for (i = N - 1; i >= 0; i--)
      printf(" %d", a[i]);

   printf("\n");

   return 0;
}

/* Example runs

$ gcc -Wall reverse.c 
$ ./a.out
Enter 10 numbers: 1 2 3 4 5 6 7 8 9 10
In reverse order: 10 9 8 7 6 5 4 3 2 1
$ ./a.out
Enter 10 numbers: 0 2 4 6 8 10 12 14 16 18
In reverse order: 18 16 14 12 10 8 6 4 2 0
$ 

*/
