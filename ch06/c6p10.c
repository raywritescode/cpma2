/* c6p10.c

   Ray Santos
   August 31, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 10

   Programming Project 9 in Chapter 5 asked you to write a 
   program that determines which of two dates come earlier
   on the calendar. Generalize the program so that the user
   may enter any number of dates. The user will enter 0/0/0
   to indicate that no more dates will be entered.

       Enter a date (mm/dd/yy): 3/6/08
       Enter a date (mm/dd/yy): 5/17/07
       Enter a date (mm/dd/yy): 6/3/07
       Enter a date (mm/dd/yy): 0/0/0
       5/17/07 is the earliest date

*/

#include <stdio.h>

int main(void)
{
    int month1, day1, year1, month2, day2, year2, earliest, latest;

    printf("\nThis program displays the earliest date entered.\n");
    printf("Enter a date no earlier than year 2000. To indicate\n");
    printf("that no more dates will be entered, enter 0/0/0.\n\n");

    month1 = 0;
    day1 = 0;
    year1 = 0;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);
    
    latest = (month2 * 30) + day2 + (year2 * 365);

    if (latest == 0) {
        printf("\n");
        return 0;
    }
        
    earliest = latest;

    while (latest != 0) {
        if (latest <= earliest) {
            month1 = month2;
            day1 = day2;
            year1 = year2;
            earliest = latest;
        }
        
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month2, &day2, &year2);
        latest = (month2 * 30) + day2 + (year2 * 365);    
    }

    printf("\n%d/%d/%.2d is the earliest date.\n\n", month1, day1, year1);

    return 0;
}
