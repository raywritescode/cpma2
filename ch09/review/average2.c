/* average2.c

   Book example of how programmer-defined functions 
   placed *after* the main() function creates an 
   implicit declaration of the programmer-defined
   function, which causes the C compiler to generate
   an error message at compile time.

   C Programming: A Modern Approach, Second Edition
   Chapter 9, Page 191

   Ray Santos
   December 18, 2015

*/

#include <stdio.h>

int main(void)
{
   double x, y, z;

   printf("Enter three numbers: ");
   scanf("%lf%lf%lf", &x, &y, &z);
   
   printf("Average of %g and %g: %g\n", x, y, average(x, y));
   printf("Average of %g and %g: %g\n", y, z, average(y, z));
   printf("Average of %g and %g: %g\n", x, z, average(x, z));

   return 0;
}

double average(double a, double b)
{
   return (a + b) / 2;
}

/* Example of the C compiler error

$ gcc -Wall average2.c 
average2.c: In function ‘main’:
average2.c:26:4: warning: implicit declaration of function ‘average’ [-Wimplicit-function-declaration]
average2.c:26:4: warning: format ‘%g’ expects argument of type ‘double’, but argument 4 has type ‘int’ [-Wformat]
average2.c:27:4: warning: format ‘%g’ expects argument of type ‘double’, but argument 4 has type ‘int’ [-Wformat]
average2.c:28:4: warning: format ‘%g’ expects argument of type ‘double’, but argument 4 has type ‘int’ [-Wformat]
average2.c: At top level:
average2.c:33:8: error: conflicting types for ‘average’
average2.c:26:47: note: previous implicit declaration of ‘average’ was here
$ 

*/
