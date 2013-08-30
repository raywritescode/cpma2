/* c6p05.c

   Ray Santos
   August 29, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 5

   Programming Project 1 in Chapter 4 asked you to write a
   program that displays a two-digit number with its digits
   reversed. Generalize the program so that the number can
   have one, two, three, or more digits.

   Hint: Use a do loop that repeatedly divides the number by
   10, stopping when it reaches 0.

*/

#include <stdio.h>

int main(void)
{
    int input, remainder;

    printf("\nEnter a non-negative number: ");
    scanf("%d", &input);

    printf("The reversal is: ");
 
    do {
       remainder = input % 10;
       printf("%d", remainder);
       input /=10; 
    } while (input != 0);

    printf("\n\n");

    return 0;
}
