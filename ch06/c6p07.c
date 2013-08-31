/* c6p07.c

   Ray Santos
   August 30, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 7

   Rearrange the square3.c program so that the for loop
   initializes i, tests i, and increments i. Don't rewrite
   the program; in particular, don't use any multiplications.

*/

#include <stdio.h>

int main(void)
{
    int i, n, odd, square;

    printf("\nThis program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
 
    // i = 1;    /* original line from square3.c */
    odd = 3;

    for (i = 1, square = 1; i <= n; odd += 2, ++i) {  /* added i = 1 and ++1 */
        printf("%10d%10d\n", i, square);
        // ++i;    /* original line from square3.c */
        square += odd;
    }

    return 0;
}
