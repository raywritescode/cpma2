/* square2.c

   Book example of the for statement in action.

   Prints a table of squares.

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Page 110

   Ray Santos
   December 2, 2015

*/

#include <stdio.h>

int main(void)
{
   int i, n;
 
   printf("This program prints a table of squares.\n");
   printf("Enter number of entries in table: ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++)
      printf("%10d%10d\n", i, i * i);

   return 0;
}

/* Example run

$ gcc -Wall square2.c
$ ./a.out
This program prints a table of squares.
Enter number of entries in table: 10
         1         1
         2         4
         3         9
         4        16
         5        25
         6        36
         7        49
         8        64
         9        81
        10       100

*/
