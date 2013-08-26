/* c4p3.c

   Ray Santos
   August 25, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 4, Programming Project 3

   Rewrite the program in Programming Project 2 so that it
   prints the reversal of a three-digit number without using
   arithmetic to split the number into digits. Hint: See the
   upc.c program of Section 4.1

*/

#include <stdio.h>

int main(void)
{
    int d1, d2, d3;

    printf("\nEnter a three-digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    printf("The reversal is %d%d%d\n\n", d3, d2, d1);

    return 0;
}
