/* c7p12_v2.c

   Ray Santos
   September 15, 2013
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 12 (version 2)

   Write a program that evaluates an expression:

       Enter an expression: 1+2.5*3
       Value of expression: 10.5

   The operands in the expression are floating-point numbers;
   the operators are +, -, *, and /. The expression is evaluated
   from left to right (no operator takes precedence over any
   other operator).

*/

#include <stdio.h>

int main(void)
{
    char input;
    float value;

    printf("\nEnter an expression (example: 1+2.5*3): ");

    while ((input = getchar()) != '\n') {
        switch (input) {
            case '+':
                value += (float) input;
                break;
            case '-':
                value -= (float) input;
                break;
            case '*':
                value *= (float) input;
                break;
            case '/':
                value /= (float) input;
                break;
            default:
                value = (float) input;
                break;
        }
    }

    printf("Value of expression: %.1f\n\n", value);

    return 0;
} 
