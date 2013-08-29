/* c5p9.c

   Ray Santos
   August 28, 2013
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 9

   Write a program that prompts the user to enter two
   dates and the indicates which date comes earlier
   on the calendar:

       Enter first date (mm/dd/yy): 3/6/08
       Enter second date (mm/dd/yy): 5/17/07
       5/17/07 is earlier than 3/6/08

   [rsantos] Though not mentioned in the problem statement,
   I coded the program to assume that the earliest year 
   is 2000.

*/

#include <stdio.h>

int main(void)
{
    int month1, day1, year1, month2, day2, year2, first, second;

    printf("\nEnter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    first = (month1 * 30) + day1 + (year1 * 365);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);
    second = (month2 * 30) + day2 + (year2 * 365);

    if (first == second)
        printf("\nBoth dates are the same.");
    else if (first < second)
        printf("\n%d/%d/%.2d is earlier than %d/%d/%.2d", 
            month1, day1, year1, month2, day2, year2);
    else
        printf("\n%d/%d/%.2d is earlier than %d/%d/%.2d",
            month2, day2, year2, month1, day1, year1);

    printf("  (Assumes earliest year is 2000)\n\n");

    return 0;
}
