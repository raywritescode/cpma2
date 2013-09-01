/* c6p11.c

   Ray Santos
   August 31, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 11

   The value of the mathematical constant e can be 
   expressed as an infinite series:

   e = 1 + 1/1! + 1/2! + 1/3! + ...

   Write a program that approximates e by computing
   the value of

   1 + 1/1! + 1/2! + 1/3! + ... + 1/n!

   where n is an integer entered by the user.

*/

#include <stdio.h>

int main(void)
{
    int number, index_outer, index_inner, factorial;
    float e, series;
    
    factorial = 1;
    series = 1.0f;
    e = 1.0f; 

    printf("\nThis program approximates the constant e\n");
    printf("by computing the value of\n\n");
    printf("1 + 1/1! + 1/2! + 1/3! + ... + 1/n!\n\n");
    printf("where n is an integer entered by the user.\n\n");
    printf("Enter an integer from 0 to 7 for n: ");
    scanf("%d", &number);

    printf("\n1");

    for (index_outer = 1; index_outer <= number; index_outer++) {
        for (index_inner = 1; index_inner <= index_outer; index_inner++) {
            factorial *= index_inner;
        }

        series = 1.0f/factorial;
        e += series;
        printf(" + %.4f (1/%d)", series, factorial);  
        factorial = 1;  
    } 

    printf(" is %.4f\n\n", e);

    return 0;
}
