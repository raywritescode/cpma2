/* ch02ex01.c

  C programming: A Modern Approach, Second Edition
  Chapter 2. Page 33. Exercise 1
  
  Ray Santos
  June 20, 2015

*/

#include <stdio.h>

int main(void)
{
  printf("hello, world\n");

  return 0;
}

/* Compiling this program without line 17 and without the -Wall option 
   does not return any compile errors. The compiled program runs without errors.

   Compiling this program without line 17 and with the -Wall option returns
   the following warnings and the compiled program runs without errors.

      $ gcc -Wall ch02ex01.c 
      ch02ex01.c: In function ‘main’:
      ch02ex01.c:16:1: warning: control reaches end of non-void function [-Wreturn-type]

  Compiling the program with line 17 and with the -Wall option compiles without errors.
  The compile program runs without errors.
 
*/
