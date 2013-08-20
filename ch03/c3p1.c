/* c3p1.c

   Ray Santos
   August 20, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 3, Programming Project 1

   Write a program that accepts a date from the user in the form
   mm/dd/yyyy and then displays it in the form yyyymmdd:

   Enter a date (mm/dd/yyyy): 2/17/2011
   You entered the date 20110217

*/

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("\nEnter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d%.2d%.2d\n\n", year, month, day);
 
    return 0;
}
