/* c5p5.c

   Ray Santos
   August 27, 2013
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 5

   In one state, single residents are subject to the following 
   income tax:

   Income            Amount of tax
   -------------------------------
   Not over $750     1% of income
   $750 - $2,250     $7.50   plus 2% of amount over $750
   $2,250 - $3,750   $37.50  plus 3% of amount over $2,250
   $3,750 - $5,250   $82.50  plus 4% of amount over $3,750
   $5,250 - $7,000   $142.50 plus 5% of amount over $5,250
   Over $7,000       $230.00 plus 6% of amount over $7,000
   
   Write a program that asks the user to enter the amount of
   taxable income, then displays the tax due.

*/

#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("\nEnter amount of taxable income: ");
    scanf("%f", &income);

    printf("Tax due is: $");

    if (income < 750.00f)
        printf("%.2f", income * .01);
    else if (income < 2250.00f)
        printf("%.2f", 7.50f + ((income - 750.00f) * .02));
    else if (income < 3750.00f)
        printf("%.2f", 37.50f + ((income - 2250.00f) * .03));
    else if (income < 5250.00f)
        printf("%.2f", 82.50f + ((income - 3750.00f) * .04));
    else if (income < 7000.00f)
        printf("%.2f", 142.50f + ((income - 5250.00f) * .05));
    else
        printf("%.2f", 230.00f + ((income - 7000.00f) * .06));

    printf("\n\n");

    return 0;
}
