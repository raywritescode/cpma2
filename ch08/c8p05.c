/* c8p05.c
 *
 * C Programming: A Modern Approach, Second Edition
 * Chapter 8, Programming Project 5
 *
 * Modify the interest.c program of Section 8.1 so that it compounds
 * interest monthly instead of annually. The form of the output shouldn't
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
#define NUM_VALUES 5 

int main(void)
{
   int i, j, low_rate, num_years, year;
   double value[NUM_VALUES];

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
         }
         printf("%7.2f", value[i]);
      }
      printf("\n");    
   }

   return 0;
}

/* Example run

$ gcc -Wall c8p05.c 
$ ./a.out

Enter interest rate: 6
Enter number of years: 20

Years     6%     7%     8%     9%    10%
  1     106.17 107.23 108.30 109.38 110.47
  2     112.72 114.98 117.29 119.64 122.04
  3     119.67 123.29 127.02 130.86 134.82
  4     127.05 132.21 137.57 143.14 148.94
  5     134.89 141.76 148.98 156.57 164.53
  6     143.20 152.01 161.35 171.26 181.76
  7     152.04 163.00 174.74 187.32 200.79
  8     161.41 174.78 189.25 204.89 221.82
  9     171.37 187.42 204.95 224.11 245.04
 10     181.94 200.97 221.96 245.14 270.70
 11     193.16 215.49 240.39 268.13 299.05
 12     205.08 231.07 260.34 293.28 330.36
 13     217.72 247.78 281.95 320.80 364.96
 14     231.15 265.69 305.35 350.89 403.17
 15     245.41 284.89 330.69 383.80 445.39
 16     260.55 305.49 358.14 419.81 492.03
 17     276.62 327.57 387.86 459.19 543.55
 18     293.68 351.25 420.06 502.26 600.47
 19     311.79 376.65 454.92 549.38 663.35
 20     331.02 403.87 492.68 600.92 732.81

*/
