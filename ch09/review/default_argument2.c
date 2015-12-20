/* default_argument2.c
 
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

   printf("Square: %d\n", square((int) x));  // compiler doesn't know square
                                             // expects an int. Defaults to double,
                                             // which causes an error during compile time.
                                             // Casting square's argument to an int 
                                             // fixes the problem.
   return 0;
}

int square(int n)
{
   return n * n;
}

/* Example of compiler warnings and a test run. Note that unlike
   default_argument.c, this version that casts the square method's
   x with an int result in the correct answer being returned. 

$ gcc -Wall default_argument2.c 
default_argument2.c: In function ‘main’:
default_argument2.c:20:4: warning: implicit declaration of function ‘square’ [-Wimplicit-function-declaration]
$ ./a.out
Square: 9
$ 

*/
