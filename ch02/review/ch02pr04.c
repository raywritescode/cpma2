/* ch02pr04.c

   Write a program that asks the user to enter a dollars-and-cents
   amount, then displays the amount with 5% tax added:

      Enter an amount: 100.00
      With tax added: $105.00

   C programming: A Modern Approach, Second Edition
   Chapter 2. Page 34. Programming Project 04

   Ray Santos
   June 23, 2015

*/

#include <stdio.h>

#define TAX 0.05f

int main(void)
{
  float amount;

  printf("Enter an amount: ");
  scanf("%f", &amount);

  printf("With tax added: $%.2f\n", amount + amount * TAX);

  return 0;
}

/* Program Execution

$ gcc -Wall ch02pr04.c
$ ./a.out
Enter an amount: 100.00
With tax added: $105.00
$ ./a.out
Enter an amount: 234.53
With tax added: $246.26
$ ./a.out
Enter an amount: 1
With tax added: $1.05

*/
