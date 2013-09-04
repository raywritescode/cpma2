/* c7p01_long.c

   Ray Santos
   September 4, 2013
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 1 (long version)

   The square2.c program of Section 6.2 will fail (usually by
   printing strange answers) if i * i exceeds the maximum int
   value. Run the program and determine the smallest value of 
   n that causes failure. Try changing the type of i to short
   and running the program again. (Don't forget to update the
   conversion specifications in the call to printf!) Then try
   long. From these experiments, what can you conclude about
   the number of bits used to store integer types on your
   machine?

   [rsantos] On my 64-bit machine the smallest long value 
   of n that causes overflow failure is 3037000500.

*/

#include <stdio.h>

int main(void)
{
    long i, n;

    printf("\nRange of short on:\n");
    printf("16-bit machine = -2,147,483,648 to 2,147,483,647\n");
    printf("32-bit machine = -2,147,483,648 to 2,147,483,648\n");
    printf("64-bit machine = -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807\n\n");

    printf("This (long) program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%ld", &n);

    for (i = 1; i <=n; i++)
        printf("%10ld\t%20ld\n", i, i * i);

    printf("\n\n");

    return 0;
}
