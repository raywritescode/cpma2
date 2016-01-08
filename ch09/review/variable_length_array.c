/* variable_length_array.c
 
   My expanded version of the book's example illustrating 
   using a variable-length array .
 
   C Programming: A Modern Approach, Second Edition
   Chapter 9, Page 198

   Ray Santos
   January 7, 2016

*/

#include <stdio.h>

int sum_array(int n, int a[n]);      // variable-length array function prototype

int main(void)
{
   int i, number, total;

   printf("Add numbers from 0 to what integer? ");
   scanf("%d", &number);

   int b[number];

   for (i = 0; i < number; i++)
      b[i] = i + 1;  

   total = sum_array(number, b);

   printf("The sum of numbers 1 through %d is: %d\n", number, total);    

   return 0;
}

int sum_array(int n, int a[n])       // variable-length array function definition
{
   int i, sum = 0;

   for (i = 0; i < n; i++) {
      printf("%d\n", a[i]);
      sum += a[i];
   }

   return sum;
}

/* Example run

$ gcc -Wall variable_length_array.c 
$ ./a.out
Add numbers from 0 to what integer? 5
1
2
3
4
5
The sum of numbers 1 through 5 is: 15
$ 

*/
