/* interest.c

   Book example of using one-dimensional arrays with
   nested for loops.

   Prints a table of compound interest.

   C Programming: A Modern Approach, Second Edition
   Chapter 8, Page 169

   Ray Santos
   December 7, 2015

*/

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
   int i, low_rate, num_years, year;
   double value[5];

   printf("Enter interest rate: ");
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
         value[i] += (low_rate + i) / 100.0 * value[i];
         printf("%7.2f", value[i]);
      }
      printf("\n");
   }  

   return 0;
}

/* Example run

$ gcc -Wall interest.c 
$ ./a.out
Enter interest rate: 6
Enter number of years: 5

Years     6%     7%     8%     9%    10%
  1     106.00 107.00 108.00 109.00 110.00
  2     112.36 114.49 116.64 118.81 121.00
  3     119.10 122.50 125.97 129.50 133.10
  4     126.25 131.08 136.05 141.16 146.41
  5     133.82 140.26 146.93 153.86 161.05
$

*/
