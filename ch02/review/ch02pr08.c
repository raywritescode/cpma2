/* ch02pr08.c

   Write a program that calculates the remaining balance on a loan after
   the first, second, and third monthly payments:

     Enter amount of loan: 20000.00
     Enter interest rate: 6.0
     Enter monthly payment: 386.66

     Balance remaining after first payment: $19713.34
     Balance remaining after second payment: $19425.25
     Balance remaining after third payment: $19135.71

   Display each balance with two digits after the decimal point.
   Hint: Each month, the balance is decreased by the amount of the payment,
   but increased by the balance times the monthly interest rate. To find
   the monthly interest rate, convert the interest rate entered by the
   user to a percentage and divide it by 12.

   C programming: A Modern Approach, Second Edition
   Chapter 2. Page 35. Programming Project 08

   Ray Santos
   June 26, 2015

*/

#include <stdio.h>

int main(void)
{
  float balance, interest, payment, monthly_rate;

  printf("Enter amount of loan: ");
  scanf("%f", &balance);

  printf("Enter interest rate: ");
  scanf("%f", &interest);

  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  monthly_rate = (interest / 100.00) / 12;

  balance = (balance - payment) + (balance * monthly_rate);
  printf("\nBalance remaining after first payment: $%.2f", balance);

  balance = (balance - payment) + (balance * monthly_rate);
  printf("\nBalance remaining after second payment: $%.2f", balance);

  balance = (balance - payment) + (balance * monthly_rate);
  printf("\nBalance remaining after third payment: $%.2f\n", balance);

  return 0;
}

/* Program Execution

$ gcc -Wall ch02pr08.c
$ ./a.out
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71

*/
