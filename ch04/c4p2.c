/* c4p2.c

   Ray Santos
   August 25, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 4, Programming Project 2

   Extend the program in Programming Project 1 
   to handle three-digit numbers.

*/

#include <stdio.h>

int main(void)
{
    int input, d1, d2, d3;

    printf("\nEnter a three-digit number: ");
    scanf("%d", &input);

    d3 = input / 100;  /* gets third digit of reversed original number */
    input %= 100;      /* gets the two-digit number to work with */
    d2 = input / 10;   /* gets second digit of reversed original number */
    d1 = input % 10;   /* gets first digit of reversed original number */

    printf("The reversal is %d%d%d\n\n", d1, d2, d3);

    return 0;
}
