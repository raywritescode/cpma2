/* c8p01.c
 *
 * C Programming: A Modern Approach, Second Edition
 * Chapter 8, Programming Project 1
 *
 * Modify the repdigit.c program of Section 8.1 so that
 * it shows which digits (if any) were repeated:
 *
 *    Enter a number: 939577
 *    Repeated digit(s): 7 9
 *
 * Ray Santos
 * February 9, 2014
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

   while (n > 0) {
      digit = n % 10;
   if (digit_seen[digit]) 
      ++to_print[digit];
   digit_seen[digit] = true;
   n /= 10;
   }

   for (i = 0; i < 10; i++) {
      isEmpty += to_print[i];     
   }

   if (isEmpty == 0) {
      printf("No repeated digits\n");
      return 0;
   } else {
      printf("Repeated digits(s): ");
      for (i = 0; i < 10; i++) {
         if (to_print[i] > 0)
            printf("%d ", i);
      }
   }
   printf("\n");

   return 0;
}
