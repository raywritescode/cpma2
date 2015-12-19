/* average3.c

   Book example of how function prototypes solve the problem
   of the C compiler generating error messages at compile time
   when programmer-defined functions are placed *after* the 
   main() function, which creates an implicit declaration of 
   the programmer-defined function resulting in the error.

   C Programming: A Modern Approach, Second Edition
   Chapter 9, Page 192

   Ray Santos
   December 18, 2015

*/

#include <stdio.h>

double average(double a, double b);    /* Function prototype */

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

double average(double a, double b)     /* Function definition */
{
   return (a + b) / 2;
}

/* Example run

$ gcc -Wall average3.c 
$ ./a.out
Enter three numbers: 1.2 34.5 678.9
Average of 1.2 and 34.5: 17.85
Average of 34.5 and 678.9: 356.7
Average of 1.2 and 678.9: 340.05
$ 

*/
