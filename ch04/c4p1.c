/* c4p1.c

   Ray Santos
   August 25, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 4, Programming Project 1

   Write a program that asks the user to enter a two-digit number,
   then prints the number with its digits reversed. A session with
   the program should have the following appearance:

       Enter a two-digit number: 28
       The reversal is: 82

   Read the number using %d, then break it into two digits. 
   Hint: If n is an integer, then n % 10 is the last digit in n
   and n / 10 is n with the last digit removed.

*/

#include <stdio.h>

int main(void)
{
    int input, d1, d2;

    printf("\nEnter a two-digit number: ");
    scanf("%d", &input);

    d1 = input % 10;   /* Gets first digit of reversed number */
    d2 = input / 10;   /* Gets second digit of reversed number */

    printf("The reversal is %d%d\n\n", d1, d2);

    return 0;
}
