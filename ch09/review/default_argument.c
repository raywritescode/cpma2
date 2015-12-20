/* default_argument.c
 
   Book example showing why relying on the default
   argument promotions is dangerous.
 
   C Programming: A Modern Approach, Second Edition
   Chapter 9, Page 195

   Ray Santos
   December 19, 2015

*/

#include <stdio.h>

int main(void)
{
   double x = 3.0;

   printf("Square: %d\n", square(x));  // compiler doesn't know square
                                       // expects an int. Defaults to double.
   return 0;
}

int square(int n)
{
   return n * n;
}

/* Example of the compiler warnings displayed and a test run. Note the answer of 1 is wrong.

$ gcc -Wall default_argument.c 
default_argument.c: In function ‘main’:
default_argument.c:20:4: warning: implicit declaration of function ‘square’ [-Wimplicit-function-declaration]
$ ./a.out
Square: 1

*/
