/* c8p02.c
 *
 * C Programming: A Modern Approach, Second Edition
 * Chapter 8, Programming Project 2
 *
 * Modify the repdigit.c program of Section 8.1 so that
 * it prints a table showing how many times each digit
 * appears in the number:
 *
 *    Enter a number: 41271092
 *    Digit:        0  1  2  3  4  5  6  7  8  9
 *    Occurrences:  1  2  2  0  0  1  0  1  0  1
 *
 * Ray Santos
 * May 9, 2014
 *
 */

#include <stdbool.h>  /* C99 only */
#include <stdio.h>

int main(void)
{
   bool digit_seen[10] = {false};
   int to_print[10] = {0};
   int digit, isEmpty, i;
   long n;

   printf("\nEnter a number: ");
   scanf("%ld", &n);

   / * In progress */ 
 
   return 0;
}
