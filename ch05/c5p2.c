/* c5p2.c

   Ray Santos
   August 27, 2013
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 2

   Write a program that asks the user for a 24-hour time,
   then displays the time in 12-hour form:

       Enter a 24-hour time: 21:11
       Equivalent 12-hour time: 9:11 PM

   Be careful not to display 12:00 as 0:00.

*/

#include <stdio.h>

int main(void)
{
    int hour, minute; 

    printf("\nEnter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour < 0 || hour >= 24)
       printf("Invalid 24-hour time\n\n");
    else if (hour == 0)
       printf("Equivalent 12-hour time: 12:%.2d AM\n\n", minute);
    else if (hour < 12)
       printf("Equivalent 12-hour time: %d:%.2d AM\n\n", hour, minute);
    else if (hour == 12)
        printf("Equivalent 12-hour time: %d:%.2d PM\n\n", hour, minute);
    else 
        printf("Equivalent 12-hour time: %d:%.2d PM\n\n", hour - 12, minute);

    return 0;
}
