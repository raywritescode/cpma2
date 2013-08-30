/* c6p03.c

   Ray Santos
   August 29, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 3

   Write a program that asks the user to enter a fraction,
   then reduces the fraction to lowest terms:

       Enter a fraction: 6/12
       In lowest terms: 1/2

   Hint: To reduce a fraction to lowest terms, first compute
   the GCD of the numerator and denominator. Then divide both
   the numerator and denominator by the GCD.

   [rsantos] Modified the program to also display the GCD.

*/

#include <stdio.h>

int main(void)
{
    int numerator, denominator, x, y, remainder;

    printf("\nEnter a fraction (x/y): ");
    scanf("%d/%d", &numerator, &denominator);

    x = numerator;
    y = denominator;

    /* compute GCD */
    while (y != 0) {
        remainder = x % y;
        x = y;
        y = remainder;
    }

    printf("GCD = %d\n", x);

    /* reduce fraction to lowest terms */
    numerator /= x;
    denominator /= x;

    printf("In lowest terms: %d/%d\n\n", numerator, denominator);

    return 0;
}
