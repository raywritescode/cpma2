/* c6p12.c

   Ray Santos
   September 1, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 12

   Modify Programming Project 11 so that the program
   continues adding terms until the current term becomes
   less than E where E is a small (floating-point) number
   entered by the user.

   [rsantos] For example, if the user enters 7 as the
   value for n and 0.0015 as the value for E, then the
   program will not add the values for 1/6! (0.0014) and
   1/7! (0.0002) to the final value of constant e because 
   1/6! (0.0014) < 0.0015.

*/

#include <stdio.h>

int main(void)
{
    int number, index_outer, index_inner, factorial;
    float e, current_term, E;
    
    factorial = 1;
    current_term = 1.0f;
    e = 1.0f; 

    printf("\nThis program approximates the constant e\n");
    printf("by adding the terms of\n\n");
    printf("1 + 1/1! + 1/2! + 1/3! + ... + 1/n!\n\n");
    printf("where n is an integer entered by the user.\n");
    printf("If the user-entered value for E is smaller than\n");
    printf("the current term being processed, processing will\n");
    printf("stop without adding the current term to e and the\n");
    printf("final value for e will be displayed.\n\n");

    printf("Enter an integer from 0 to 7 for n: ");
    scanf("%d", &number);

    printf("Enter a small floating-point number for E: ");
    scanf("%f", &E);

    printf("\n1");

    for (index_outer = 1; index_outer <= number; index_outer++) {
        for (index_inner = 1; index_inner <= index_outer; index_inner++) {
            factorial *= index_inner;
        }

        current_term = 1.0f/factorial;

        if (current_term < E) 
            break;
        else {
            e += current_term;
            printf(" + %.4f (1/%d)", current_term, factorial);  
            factorial = 1;
        }  
    } 

    printf(" is %.4f\n\n", e);

    return 0;
}
