/* c7p01_int.c

   Ray Santos
   September 3, 2013
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 1 (int version)

   The square2.c program of Section 6.2 will fail (usually by
   printing strange answers) if i * i exceeds the maximum int
   value. Run the program and determine the smallest value of 
   n that causes failure. Try changing the type of i to short
   and running the program again. (Don't forget to update the
   conversion specifications in the call to printf!) Then try
   long. From these experiments, what can you conclude about
   the number of bits used to store integer types on your
   machine?

   [rsantos] On my 64-bit machine the smallest value of n
   that causes overflow failure is 46341.

*/

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("\nRange of int on:\n");
    printf("16-bit machine = -32,768 to 32,767\n");
    printf("32-bit machine = -2,147,483,648 to 2,147,483,647\n");
    printf("64-bit machine = -2,147,483,648 to 2,147,483,647\n\n");

    printf("This (int) program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <=n; i++)
        printf("%10d\t%10d\n", i, i * i);

    printf("\n\n");

    return 0;
}
