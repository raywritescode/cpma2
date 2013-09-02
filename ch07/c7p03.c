/* c7p03.c

   Ray Santos
   September 2, 2013
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 3

   Modify the sum2.c program of Section 7.1 to
   sum a series of double values.

*/

#include <stdio.h>

int main(void)
{
    double n, sum = 0;

    printf("\nThis program sums a series of double-precision floating-point numbers.\n");
    printf("Enter double-precision floating-point numbers (0 to terminate): ");

    scanf("%lf", &n);

    while (n != 0) {
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %f\n\n", sum);

    return 0;
}
