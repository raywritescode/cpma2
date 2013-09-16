/* c7p12.c

   Ray Santos
   September 15, 2013
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 12

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
    char operator1, operator2;

    float operand1, operand2, operand3, value; 
   
    printf("\nEnter an expression (example: 1+2.5*3): ");
    scanf("%f%c%f%c%f", &operand1, &operator1, &operand2, &operator2, &operand3);

    value = operand1;

    switch (operator1) {
        case '+':
            value += operand2;
            break;
        case '-':
            value -= operand2;
            break;
        case '*':
            value *= operand2;
            break;
        case '/':
            value /= operand2;
            break;
    }

    switch (operator2) {
        case '+':
            value += operand3;
            break;
        case '-':
            value -= operand3;
            break;
        case '*':
            value *= operand3;
            break;
        case '/':
            value /= operand3;
            break;
    }

    printf("Value of expression: %.1f\n\n", value);

    return 0;
} 
