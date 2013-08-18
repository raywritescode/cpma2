/* c2p5.c

   Ray Santos
   August 17, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 2. Programming Project 5

   Write a program that asks the user to enter a value for x
   and then displays the value for the following polynomial:

   3x^5 + 2x^4 - 5x^3 -x^2 + 7x - 6

   Hint: C doesn't have an exponentiation operator, so you'll
   need to multiply x by itself repeatedly in order to compute
   the powers of x. (For example, x * x * x is x cubed.)

   [rsantos] Sample polynomial values manually calculated by hand
     if x = -1 then value is -10
     if x = 0 then value is -6
     if x = 1 then value is 0
     if x = 2 then value is 92 

*/

#include <stdio.h>

int main(void)
{
    int x5, x4, x3, x2, x, value;

    printf("\nLet's display the value for polynomial\n");
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("based on your integer value for x\n\n");
    printf("Enter an integer number: ");
    scanf("%d", &x);

    x5 = x * x * x * x * x;
    x4 = x * x * x * x;
    x3 = x * x * x;
    x2 = x * x;

    value = (3 * x5) + (2 * x4) - (5 * x3) - x2 + (7 * x) - 6;

    printf("Polynomial value is %d\n\n", value);    

    return 0;
}
