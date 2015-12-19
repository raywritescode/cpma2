/* countdown.c

   Book example of using a function that doesn't return a value.

   Prints a countdown.

   C Programming: A Modern Approach, Second Edition
   Chapter 9, Page 186

   Ray Santos
   December 18, 2015

*/

#include <stdio.h>

#define NUMBER 10

void print_count(int n)
{
   printf("T minus %d and counting\n", n);
}

int main(void)
{
   int i;

   for (i = NUMBER; i > 0; --i)
      print_count(i);

   return 0;
}

/* Example run

$ gcc -Wall countdown.c 
$ ./a.out
T minus 10 and counting
T minus 9 and counting
T minus 8 and counting
T minus 7 and counting
T minus 6 and counting
T minus 5 and counting
T minus 4 and counting
T minus 3 and counting
T minus 2 and counting
T minus 1 and counting
$ 

*/
