/* ifsemicolon.c

   This code intentionally places a semicolon after
   the parentheses in an if statement.

   I want to observe what the compiled code does.

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Page 117, bottom half of page.

   Ray Santos
   December 3, 2015

*/

#include <stdio.h>

int main(void)
{
   int d = 1;

   if (d == 0);   // incorrectly placed semicolon
      printf("The value of d is %d\n", d);
   
   return 0;
}

/* Example run

$ gcc -Wall ifsemicolon.c 
$ ./a.out
The value of d is 1

*/
