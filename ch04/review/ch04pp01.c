/* ch04pp01.c

  C programming: A Modern Approach, Second Edition
  Chapter 4. Page 71. Programming Project 01

  Ray Santos
  September 13, 2015

  Write a program that asks the user to enter a two-digit number,
  then prints the number with its digits reversed. A session should
  have the following appearance:

    Enter a two-digit number: 28
    The reversal is: 82

  Read the number using %d, then break it into two digits. Hint: If n is
  an integer, then n % 10 is the last digit in n and n / 10 is n with the
  last digit removed.

*/

#include <stdio.h>

int main(void)
{

  int number;

  printf("Enter a two-digit number: ");
  scanf("%d", &number);

  printf("The reversal is: %d%d\n", number % 10, number / 10);

  return 0;
}

/* Program execution

$ gcc -Wall ch04pp01.c 
$ ./a.out
Enter a two-digit number: 28
The reversal is: 82

*/
