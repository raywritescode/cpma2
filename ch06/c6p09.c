/* c6p09.c

   Ray Santos
   August 30, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 9

   Programming Project 8 in Chapter 2 asked you to write a
   program that calculates the remaining balance on a loan
   after the first, second, and third monthly payments.
   Modify the program so that it also asks the user to enter
   the number of payments and then displays the balance
   remaining after each of these payments.

*/

#include <stdio.h>

int main(void)
{
    float loan, balance, interest_rate, monthly_rate, payment;
    int number_of_payments, i;

    printf("\nEnter amount of loan: ");
    scanf("%f", &loan);
    balance = loan;

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    monthly_rate = (interest_rate / 100.0f) / 12;

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    printf("Enter number of monthly payments: ");
    scanf("%d", &number_of_payments);

    printf("\n");

    for (i = 1; i <= number_of_payments; i++ ) {
        balance = (balance - payment) + (balance * monthly_rate);
        printf("Balance remaining after payment %d: $%.2f\n", i, balance);   
    }

    printf("\n");   

    return 0;
}
