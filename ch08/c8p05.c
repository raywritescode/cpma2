/* c8p05.c
 *
 * C Programming: A Modern Approach, Second Edition
 * Chapter 8, Programming Project 5
 *
 * Modify the interest.c program of Section 8.1 so that it compounds
 * interest monthly instead of annualy. The form of the output shouldn't
 * change; the balance should still be shown at annual intervals.
 *
 * Ray Santos
 * May 14, 2014
 *
 */

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00
#define TO_PERCENT 100.0
#define COMPOUND_MONTHLY 12.0 

int main(void)
{
   int i, j, low_rate, num_years, year;
   double value[5];

   printf("\nEnter interest rate: ");
   scanf("%d", &low_rate);

   printf("Enter number of years: ");
   scanf("%d", &num_years);

   printf("\nYears");
   for (i = 0; i < NUM_RATES; i++) {
      printf("%6d%%", low_rate + i);
      value[i] = INITIAL_BALANCE;
   }
   printf("\n");

   for (year = 1; year <= num_years; year++) {
      printf("%3d    ", year);
      for (i = 0; i < NUM_RATES; i++) {
         for (j = 0; j < 12; j++) {
            value[i] += (low_rate + i) / TO_PERCENT / COMPOUND_MONTHLY * value[i];
            // printf("%7.2f", value[i]);
         }
         printf("%7.2f", value[i]);
      }
      printf("\n");    
   }

   return 0;
}
