/* infinite.c

   This explores what a C program will do if an
   array subscript goes out of bounds.

   I expect to see the program run in a continuous loop.
   
   Actual result: The program loops 20 times and displays
   a Segmentation Fault message.

   C Programming: A Modern Approach, Second Edition
   Chapter 8, Page 163, top half of the page.

   Ray Santos
   December 7, 2015

*/

#include <stdio.h>

int main(void)
{
   int a[10], i;

   for (i = 1; i <= 20; i++) {
      a[i] = i;
      printf("%d\n", a[i]);
   } 

   return 0;
}

/* Example run

$ gcc -Wall infinite.c 
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
11
12
13
14
15
16
17
18
19
20
Segmentation fault
$ 

*/
