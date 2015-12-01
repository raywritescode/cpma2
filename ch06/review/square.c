/* square.c

   Book example: Prints a table of squares using a while statement.

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Page 102

   Ray Santos
   November 30, 2015

*/

#include <stdio.h>

int main(void)
{
   int i, n;

   printf("This program prints a table of squares.\n");
   printf("Enter number of entries in table: ");
   scanf("%d", &n);

   i = 1;

   while (i <= n) {
      printf("%10d%10d\n", i, i * i);
      i++;
   }

   return 0;
}

/* Example run

$ gcc -Wall square.c
$ ./a.out
This program prints a table of squares.
Enter number of entries in table: 5
         1         1
         2         4
         3         9
         4        16
         5        25

*/
