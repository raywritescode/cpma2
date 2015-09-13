/* ch04pp02.c

  C programming: A Modern Approach, Second Edition
  Chapter 4. Page 71. Programming Project 02

  Ray Santos
  September 13, 2015

  Extend the program in Programming Project 1 to 
  handle three-digit numbers.

    Write a program that asks the user to enter a three-digit number,
    then prints the number with its digits reversed. A session should
    have the following appearance:

      Enter a three-digit number: 123 
      The reversal is: 321 

    Read the number using %d, then break it into three digits. Hint: If n is
    an integer, then n / 100 is the first digit in n,((n % 100) / 10) is the
    second digit in n, and ((n % 100) % 10) is the last digit in n. 

*/

#include <stdio.h>

int main(void)
{
  int number;

  printf("Enter a three-digit number: ");
  scanf("%d", &number);

  printf("The reversal is: %d%d%d\n", ((number % 100) % 10),
                                      ((number % 100) / 10),
                                      number / 100); 

  return 0;
}

/* Program execution

$ gcc -Wall ch04pp02.c 
$ ./a.out
Enter a three-digit number: 321
The reversal is: 123

*/
