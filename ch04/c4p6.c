/* c4p6.c

   Ray Santos
   August 26, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 4, Programming Project 6

   European countries use a 13-digit code, known as the European
   Article Number (EAN) instead of the 12-digit Universal Product
   Code (UPC) found in North America. Each EAN ends with a check
   digit, just as a UPC does. The technique for calculating the check
   digit is also similar:

       Add the second, fourth, sixth, eighth, tenth, and twelfth digits.
       Add the first, third, fifth, seventh, ninth, and eleventh digits.
       Multiply the first sum by 3 and add it to the second sum.
       Subtract 1 from the total.
       Compute the remainder when the adjusted total is divided by 10.
       Subtract the remainder from 9.

   For example, consider Gulluoglu Turkish Delight Pistachio & Coconut,
   which has an EAN of 8691484260008. The first sum is 6 + 1 + 8 + 2 + 0
   + 0 = 17, and the second sum is 8 + 9 + 4 + 4 + 6 + 0 = 31. Multiplying
   the first sum by 3 and adding the second yields 82. Subtracting 1 gives 81.
   The remainder upon dividing by 10 is 1. When the remainder is subtracted 
   from 9, the result is 8, which matches the last digit of the original code.
   Your job is to modify the upc.c program of Section 4.1 so that it calculates
   the check digit for an EAN. The user will enter the first 12 digits of the
   EAN as a single number:

       Enter the first 12 digits of an EAN: 869148426000
       Check digit: 8

*/

#include <stdio.h>

int main(void)
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12,
        first_sum, second_sum, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    first_sum = d2 + d4 + d6 + d8 + d10 + d12;
    second_sum = d1 + d3 + d5 + d7 + d9 + d11;
    total = first_sum * 3 + second_sum;

    printf("Check digit: %d\n\n", 9 - ((total - 1) % 10));

    return 0;
}
