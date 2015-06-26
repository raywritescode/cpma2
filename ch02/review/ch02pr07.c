/* ch02pr07.c

   Write a program that asks the user to enter a U.S. dollar amount
   and then shows you the amount using the smallest number of
   $20, $10, $5, and $1 bills.

      Enter a dollar amount: 93

      $20 bills: 4
      $10 bills: 1
       $5 bills: 0
       $1 bills: 3

   Hint: Divide the amount by 20 to determine the number of $20
   bills needed, and then reduce the amount by the total value
   of the $20 bills. Repeat for the other bill sizes. Be sure to
   use integer values throughout, not floating-point.

   C programming: A Modern Approach, Second Edition
   Chapter 2. Page 34. Programming Project 07

   Ray Santos
   June 25, 2015

*/

#include <stdio.h>

int main(void)
{
  int amount, twenty, ten, five, one;

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  twenty = amount / 20;
  amount = amount - twenty * 20;

  ten = amount / 10;
  amount = amount - ten * 10; 

  five = amount / 5;
  amount = amount - five * 5;

  one = amount / 1;
  
  printf("\n$20 bills: %d\n", twenty);
  printf("$10 bills: %d\n", ten);
  printf(" $5 bills: %d\n", five);
  printf(" $1 bills: %d\n", one); 

  return 0;
} 

/* Program Execution

$ gcc -Wall ch02pr07.c
$ ./a.out
Enter a dollar amount: 93

$20 bills: 4
$10 bills: 1
 $5 bills: 0
 $1 bills: 3

$ ./a.out
Enter a dollar amount: 36

$20 bills: 1
$10 bills: 1
 $5 bills: 1
 $1 bills: 1

*/
