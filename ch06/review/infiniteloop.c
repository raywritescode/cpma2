/* infiniteloop.c

   This code intentionally places a semicolon after
   the parentheses in a while statement.

   I want to observe what the compiled code does.

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Page 117, bottom half of page.

   Ray Santos
   December 3, 2015

*/

#include <stdio.h>

int main(void)
{
   int i = 10;

   while (i > 0);  // incorrectly placed semicolon. Infinite loop starts here.
   {
      printf("T minus %d and counting\n", i);
      --i;
   } 
   return 0;
}

/* Example run

$ gcc -Wall infiniteloop.c 
$ ./a.out

  Observations:
     - No command prompt displayed. Program looked like nothing was happening.
     - System Resources monitor showed the CPU usage for my machine's 2nd CPU activity at 100%
     - CTRL-C to terminate the program returned the 2nd CPU activity to its average 3.5%

*/
