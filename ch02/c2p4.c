/* c2p4.c

   Ray Santos
   August 17, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 2. Programming Project 4

   Write a program that asks the user to enter a dollars-and-cents
   amount, then displays the amount with a 5% tax added:

   Enter an amount: 100
   With tax added: $105.00

*/

#include <stdio.h>

#define TAX_PERCENTAGE .05f 

int main(void)
{
    float amount, total;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    total = amount + (amount * TAX_PERCENTAGE);

    printf("With tax added: $%.2f\n", total);    

    return 0;
}
