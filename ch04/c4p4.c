/* c4p4.c

   Ray Santos
   August 25, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 4, Programming Project 4

   Write a program tha reads an integer entered by the user and
   displays it in octal (base 8):

       Enter a number between 0 and 32767: 1953
       In octal, your number is: 03641

   The output should be displayed using five digits, even if fewer
   digits are sufficient. Hint: To convert the number to octal, first
   divide it by 8; the remainder is the last digit of the octal number
   (1, in this case). Then divide the original number by 8 and repeat
   the process to arrive at the next-to-last digit. (printf is capable
   of displaying numbers in base 8, as we'll see in Chapter 7, so there's
   actually an easier way to write this program.)

*/

#include <stdio.h>

int main(void)
{
    int input, d1, d2, d3, d4, d5;

    printf("\nEnter a number between 0 and 32767: ");
    scanf("%d", &input);

    d5 = input % 8;
    input /= 8;

    d4 = input % 8;
    input /= 8;

    d3 = input % 8;
    input /= 8;

    d2 = input % 8;
    input /= 8;

    d1 = input % 8;
    
    printf("In octal, your number is: %1d%1d%1d%1d%1d\n\n", d1, d2, d3, d4, d5);   

    return 0;
}
