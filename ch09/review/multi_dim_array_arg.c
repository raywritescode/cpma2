/* multi_dim_array_arg.c
 
   My expanded version of the book's example illustrating 
   the use of multi-dimensional array arguments.
 
   C Programming: A Modern Approach, Second Edition
   Chapter 9, Page 197

   Ray Santos
   December 24, 2015

*/

#include <stdio.h>

#define LENGTH 10
#define WIDTH 10

int sum_two_dimensional_array(int a[][WIDTH], int n);      // function prototype

int main(void)
{
   int b[LENGTH][WIDTH], total;
   int i, j;

   for (i = 0; i < LENGTH; i++) {
      for (j = 0; j < WIDTH; j++) { 
         b[i][j] = 0;
         printf("%3d ", b[i][j]);
      }
      printf("\n"); 
   } 

   printf("\n");
   total = sum_two_dimensional_array(b, LENGTH);

   printf("\nThe sum of 1 in a %dx%d matrix is: %d\n", LENGTH, WIDTH, total);    

   return 0;
}

int sum_two_dimensional_array(int a[][WIDTH], int n)       // function definition
{
   int i,j, sum = 0;

   for (i = 0; i < n; i++) {
      for (j = 0; j < WIDTH; j++) {
         a[i][j] += 1;
         sum += a[i][j];
         printf("%3d ", a[i][j]);
      }
      printf("\n");
   }

   return sum;
}

/* Example run

$ gcc -Wall multi_dim_array_arg.c 
$ ./a.out
  0   0   0   0   0   0   0   0   0   0 
  0   0   0   0   0   0   0   0   0   0 
  0   0   0   0   0   0   0   0   0   0 
  0   0   0   0   0   0   0   0   0   0 
  0   0   0   0   0   0   0   0   0   0 
  0   0   0   0   0   0   0   0   0   0 
  0   0   0   0   0   0   0   0   0   0 
  0   0   0   0   0   0   0   0   0   0 
  0   0   0   0   0   0   0   0   0   0 
  0   0   0   0   0   0   0   0   0   0 

  1   1   1   1   1   1   1   1   1   1 
  1   1   1   1   1   1   1   1   1   1 
  1   1   1   1   1   1   1   1   1   1 
  1   1   1   1   1   1   1   1   1   1 
  1   1   1   1   1   1   1   1   1   1 
  1   1   1   1   1   1   1   1   1   1 
  1   1   1   1   1   1   1   1   1   1 
  1   1   1   1   1   1   1   1   1   1 
  1   1   1   1   1   1   1   1   1   1 
  1   1   1   1   1   1   1   1   1   1 

The sum of 1 in a 10x10 matrix is: 100
$ 

*/
