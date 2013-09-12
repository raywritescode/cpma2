/* c7p09.c

   Ray Santos
   September 11, 2013
   
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 9

   Write a program that asks the user for a 12-hour time,
   then displays the time in 24-hour form:

       Enter a 12-hour time: 9:11 PM
       Equivalient 24-hour time: 21:11

   See Programming Project 8 for a description of the
   input format.

   [rsantos] The input format is below.

   The input will have the form hours:minutes followed by either 
   A, P, AM or PM (either lower-case or upper-case). White space 
   is allowed (but not required) between the numerical time and 
   the AM/PM indicator. Examples of valid input:

   1:15P
   1:15PM
   1:15p
   1:15pm
   1:15 P
   1:15 PM
   1:15 p
   1:15 pm

   You may assume that the input has one of these forms; there
   is no need to test for errors.

*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, minutes;
    char period;
  
    printf("Enter a 12-hour clock time (hours:minutes AM/PM): ");
    scanf("%d:%d %c", &hour, &minutes, &period);  /* the space before %c is important */

    if (hour < 1 || hour > 12) {
        printf("Hours entry out of range. Please run program again.\n\n");
        return 0;
    } else if (minutes < 0 || minutes > 59) {
        printf("Minutes entry out of range. Please run program again.\n\n");
        return 0;
    } else if ((period = toupper(period)) == 'A' && hour == 12)
        hour = 0;
    else if ((period = toupper(period)) == 'P' && hour == 12)
        hour = 0;

    switch (period = toupper(period)) {
        case 'P':
            hour += 12;
            break;
        case 'A':
            break;
        default:
            printf("Invalid AM/PM entry. Please run program again.\n\n");
            return 0;
    }
    
    printf("Equivalent 24-hour time: %.2d:%.2d\n\n", hour, minutes);

    return 0;
}
