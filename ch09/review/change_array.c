/* change_array.c
 
   My expanded version of the book's code snippet example
   showing that a function is allowed to change the elements
   of an array parameter. 
 
   C Programming: A Modern Approach, Second Edition
   Chapter 9, Page 197

   Ray Santos
   December 23, 2015

*/

#include <stdio.h>

#define LENGTH 10

void store_zeros(int b[], int n);      // function prototype

int main(void)
{
   int a[LENGTH];
   int i;

   printf("Array contents before store_zeros function call:\n");

   for (i = 0; i < LENGTH; i++) 
      printf("a[%d] = %d\n", i, a[i] = i + 1);  

   store_zeros(a, LENGTH);

   printf("\nArray contents after store_zeros function call:\n");

   for (i = 0; i < LENGTH; i++) 
      printf("a[%d] = %d\n", i, a[i]);  

   return 0;
}

void store_zeros(int b[], int n)       // function definition
{
   int i;

   for (i = 0; i < n; i++)
      b[i] = 0; 
}

/* Example run

$ gcc -Wall change_array.c 
$ ./a.out
Array contents before store_zeros function call:
a[0] = 1
a[1] = 2
a[2] = 3
a[3] = 4
a[4] = 5
a[5] = 6
a[6] = 7
a[7] = 8
a[8] = 9
a[9] = 10

Array contents after store_zeros function call:
a[0] = 0
a[1] = 0
a[2] = 0
a[3] = 0
a[4] = 0
a[5] = 0
a[6] = 0
a[7] = 0
a[8] = 0
a[9] = 0
$ 

*/
