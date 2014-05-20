/* c8p07.c
 *
 * C Programming: A Modern Approach, Second Edition
 * Chapter 8, Programming Project 7
 *
 * Write a program that reads a 5 x 5 array of integers
 * and then prints the row sums and the column sums:
 *
 *   Enter row 1: 8 3 9 0 10
 *   Enter row 2: 3 5 17 1 1
 *   Enter row 3: 2 8 6 23 1
 *   Enter row 4: 15 7 3 2 9
 *   Enter row 5: 6 14 2 6 0
 *
 *   Row totals: 30 27 40 36 28
 *   Column totals: 34 37 37 32 21
 *
 * Ray Santos
 * May 20, 2014
 *
 */

#include <stdio.h>

#define ROWS 5
#define COLUMNS 5

int main(void) {

   int matrix[ROWS][COLUMNS];
   int i;
   int j;
   int row_total = 0;
   int column_total = 0;

   /* Get user's input */
   printf("Enter integers for a %d x %d matrix.\n\n", ROWS, COLUMNS);
   for (i = 0; i < ROWS; i++) {
      printf("Enter row %d: ", i + 1);
      for (j = 0; j < COLUMNS; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }

   /* Print the calculated row totals */
   printf("\nRow totals: ");
   for (i = 0; i < ROWS; i++) {
      for (j = 0; j < COLUMNS; j++) {
         row_total += matrix[i][j];
      }
      printf("%d ", row_total);
      row_total = 0;
   }


   /* Print the calculated column totals */
   printf("\nColumn totals: ");
   for (j = 0; j < COLUMNS; j++) {
      for (i = 0; i < ROWS; i++) {
         column_total += matrix[i][j];
      }
      printf("%d ", column_total);
      column_total = 0;
   }

   return 0;
}
