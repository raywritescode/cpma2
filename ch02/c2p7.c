/* c2p7.c

   Ray Santos
   August 18, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 2. Programming Project 7

   Write a program that asks the user to enter a U.S. dollar
   amount and then shows how to pay that amount using the
   smallest number of $20, $10, $5, and $1 bills:

   Enter a dollar amount: 93

   $20 bills: 4
   $10 bills: 1
    $5 bills: 0
    $1 bills: 3

   Hint: Divide the amount by 20 to determine the number of
   $20 bills needed, and then reduce the amount by the total
   value of the $20 bills. Repeat for the other bill sizes.
   Be sure to use integer values throughout, not floating-
   point numbers.

*/

#include <stdio.h>

int main(void)
{
    int amount, bills;

    printf("\nEnter a dollar amount: ");
    scanf("%d", &amount);

    bills = amount / 20;   /* Number of $20 bills needed */
    printf("\n$20 bills: %d\n", bills);

    amount = amount - (bills * 20);

    bills = amount / 10;   /* Number of $10 bills needed */
    printf("$10 bills: %d\n", bills);

    amount = amount - (bills * 10);

    bills = amount / 5;    /* Number of $5 bills needed */ 
    printf(" $5 bills: %d\n", bills);

    amount = amount - (bills * 5);

    bills = amount / 1;    /* Number of $1 bills needed */
    printf(" $1 bills: %d\n\n", bills);   

    return 0;
}
