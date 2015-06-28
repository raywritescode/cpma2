/* six_escapes.c

   The printf format string contains six escape sequences.

   C Programming: A Modern Approach, Second Edition
   Chapter 3, Page 41  

   Ray Santos
   June 28, 2015

*/

#include <stdio.h>

int main(void)
{
  printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");

  return 0;
}

/* Program Execution

$ gcc -Wall six_escapes.c 
$ ./a.out
Item	Unit	Purchase
	Price	Date

*/
