/* one_dim_array_arg_larger.c
 
   My expanded version of the book's example illustrating 
   the use of one-dimensional array arguments.

   In this example, the function is told that the array
   is larger than it really is. The printed line is expected
   to display a wrong total value. 
 
   C Programming: A Modern Approach, Second Edition
   Chapter 9, Page 197

   Ray Santos
   December 22, 2015

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

   total = sum_array(b, 50);        // the function is told that the array is 50 elements

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

$ gcc -Wall one_dim_array_arg_larger.c 
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
0
10
0
1994920596
1996103680
2125158036
1
66508
1996370712
1996369920
0
0
66336
0
0
0
1996386304
0
819742195
949945059
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
0
1996389136
The sum of numbers 1 through 10 is: -1308350636
$ 

*/
