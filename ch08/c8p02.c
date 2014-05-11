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
 * May 10, 2014
 *
 */

#include <stdio.h>

#define DIGITS 10

int main(void)
{
   int digit_count[DIGITS] = {0};
   int digit, i;
   long n;

   printf("\nEnter a number: ");
   scanf("%ld", &n);

   /* Count number of times each digit seen */
   while (n > 0) {
      digit = n % 10;                  // gets the right-most digit.
      digit_count[digit]++;            // add 1 to index matching the right-most digit.
      n /= 10;                         // remove the right-most digit from the number.
   } 

   /* Print the Digit header */
   printf("Digit:      ");
   for (i = 0; i < DIGITS; i++)
      printf("%3d", i);

   /* Print Occurrences */
   printf("\nOccurrences:");
   for (i = 0; i < DIGITS; i++)
      printf("%3d", digit_count[i]);
   printf("\n");

   return 0;
}
