/* boolTest.c

   Wondering what is printed when a _Bool integer type is
   assigned a value other than 0 or 1.

   Book states that a _Bool integer will get value of 1 if
   any non-zero integer is assigned to it.

   This experiment came to mind after reading the section
   "Boolean Values in C99" on page 85 of "C Programming:
   A Modern Approach, Second Edition" by K.N. King.

   Ray Santos
   November 30, 2015

*/

#include <stdio.h>

int main(void)
{
   _Bool flag; // flag must be assigned a value or boolTest.c won't compile.

   flag = 0;
   printf("Value of _Bool flag after assigning 0 to it: %d\n", flag);

   flag = 48;
   printf("Value of _Bool flag after assigning 48 to it: %d\n", flag);

   flag = -48;
   printf("Value of _Bool flag after assigned -48 to it: %d\n", flag);

   return 0;
}

/* Example run

$ gcc -Wall boolTest.c 
$ ./a.out
Value of _Bool flag after assigning 0 to it: 0
Value of _Bool flag after assigning 48 to it: 1
Value of _Bool flag after assigned -48 to it: 1

*/
