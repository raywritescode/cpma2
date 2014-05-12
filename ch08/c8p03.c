/* c8p03.c
 *
 * C Programming: A Modern Approach, Second Edition
 * Chapter 8, Programming Project 3
 *
 * Modify the repdigit.c program of Section 8.1 so that
 * the user can enter more than one number to be tested
 * for repeated digits. The program should terminate when       
 * the user enters a number that's less than or equal to 0.
 *
 * Ray Santos
 * May 11, 2014
 *
 */

#include <stdio.h>

#define DIGITS 10

int main(void)
{
   int digit_count[DIGITS] = {0};
   int digit, i;
   long n;

   printf("\nEnter a number (or <= 0 to exit): ");
   scanf("%ld", &n);

   while (n > 0) {

      /* Count number of times each digit seen */
      while (n > 0) {
         digit = n % 10;                  
         digit_count[digit]++;            
         n /= 10;                         
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

      
      /* Clear the digit_counts array */
      for (i = 0; i < DIGITS; i++)
         digit_count[i] = 0;

      printf("\nEnter a number (-1 to exit): ");
      scanf("%ld", &n);
   }

   return 0;
}
