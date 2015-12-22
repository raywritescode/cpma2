/* one_dim_array_arg.c
 
   My expanded version of the book's example illustrating 
   the use of one-dimensional array arguments.
 
   C Programming: A Modern Approach, Second Edition
   Chapter 9, Page 196

   Ray Santos
   December 21, 2015

*/

#include <stdio.h>

#define LENGTH 10

int sum_array(int a[], int n);      // function prototype

int main(void)
{
   int b[LENGTH], total;
   int i;

   for (i = 0; i < LENGTH; i++)
      b[i] = i + 1;  

   total = sum_array(b, LENGTH);

   printf("The sum of numbers 1 through %d is: %d\n", LENGTH, total);    

   return 0;
}

int sum_array(int a[], int n)       // function definition
{
   int i, sum = 0;

   for (i = 0; i < n; i++) {
      printf("%d\n", a[i]);
      sum += a[i];
   }

   return sum;
}

/* Example run

$ gcc -Wall one_dim_array_arg.c 
$ ./a.out
1
2
3
4
5
6
7
8
9
10
The sum of numbers 1 through 10 is: 55

*/
