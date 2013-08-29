/* c5p8.c

   Ray Santos
   August 28, 2013
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 8

   The following table shows the daily flights from 
   one city to another:

   Departure time   Arrival time
   -----------------------------
    8:00 am         10:15 am
    9:43 am         11:52 am
   11:19 am          1:31 pm
   12:47 pm          3:00 pm
    2:00 pm          4:08 pm
    3:45 pm          5:55 pm
    7:00 pm          9:20 pm
    9:45 pm         11:58 pm

   Write a program that asks user to enter a time
   (expressed in hours and minutes, using the 24-hour
   clock). The program then displays the departure and
   arrival times for the flight whose departure time is
   closest to that entered by the user:

       Enter a 24-hour time: 13:15
       Closest departure time is 12:47 pm, arriving at 3:00 pm

   Hint: Convert the input into a time expressed in minutes
   since midnight, and compare it to the departure times, also
   expressed in minutes since midnight. For example, 13:15 is
   13 x 60 + 15 = 795 minutes since midnight, which is closer to
   12:47 pm (767 minutes since midnight) than to any of the
   other departure times.

*/

#include <stdio.h>

int main(void)
{
    int hour, minutes, to_minutes, eight_am, nine_43_am,
        eleven_19_am, twelve_47_pm, two_pm, three_45_pm,
        seven_pm, nine_45_pm, midnight;
  
    printf("\nDeparture   Arrival\n");
    printf("--------------------\n");
    printf(" 8:00 am    10:15 am\n");
    printf(" 9:43 am    11:52 am\n");
    printf("11:19 am     1:31 pm\n");
    printf("12:47 pm     3:00 pm\n");
    printf(" 2:00 pm     4:08 pm\n");
    printf(" 3:45 pm     5:55 pm\n");
    printf(" 7:00 pm     9:20 pm\n");
    printf(" 9:45 pm    11:58 pm\n\n");
   
    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hour, &minutes);

    to_minutes = hour * 60 + minutes;
    eight_am = 8 * 60;
    nine_43_am = 9 * 60 + 43;
    eleven_19_am = 11 * 60 + 19;
    twelve_47_pm = 12 * 60 + 47;
    two_pm = 14 * 60;
    three_45_pm = 15 * 60 + 45;
    seven_pm = 19 * 60;
    nine_45_pm = 21 * 60 + 45;
    midnight = 23 * 60 + 59;

    if (to_minutes >= 24 * 60 || to_minutes <= 0)
        printf("Invalid hh:mm entry");
    else {
        printf("Closest departure time is: ");

        if (to_minutes >= 1 && to_minutes < eight_am)
            printf("8:00 am, arriving at 10:15 am");

        if (to_minutes >= eight_am && to_minutes < nine_43_am) {
            if (nine_43_am - to_minutes < to_minutes - eight_am)
                printf("9:43 am, arriving at 11:52 am");
            else
                printf("8:00 am, arriving at 10:15 am");
        }

        if (to_minutes >= nine_43_am && to_minutes < eleven_19_am) {
            if (eleven_19_am - to_minutes < to_minutes - nine_43_am)
                printf("11:19 am, arriving at 1:30 pm");
            else
                printf("9:43 am, arriving at 11:52 am");
        }

        if (to_minutes >= eleven_19_am && to_minutes < twelve_47_pm) {
            if (twelve_47_pm - to_minutes < to_minutes - eleven_19_am)
                printf("12:47 pm, arriving at 3:00 pm");
            else
                printf("11:19 am, arriving at 1:30 pm");
        }

        if (to_minutes >= twelve_47_pm && to_minutes < two_pm) {
            if (two_pm - to_minutes < to_minutes - twelve_47_pm)
                printf("2:00 pm, arriving at 4:08 pm");
            else
                printf("12:47 pm, arriving at 3:00 pm");
        }

        if (to_minutes >= two_pm && to_minutes < three_45_pm) {
            if (three_45_pm - to_minutes < to_minutes - two_pm)
                printf("3:45 pm, arriving at 5:55 pm");
            else
                printf("2:00 pm, arriving at 4:08 pm");
        }

        if (to_minutes >= three_45_pm && to_minutes < seven_pm) {
            if (seven_pm - to_minutes < to_minutes - three_45_pm)
                printf("7:00 pm, arriving at 9:20 pm");
            else
                printf("3:45 pm, arriving at 5:55 pm");
        }

        if (to_minutes >= seven_pm && to_minutes < nine_45_pm) {
            if (nine_45_pm - to_minutes < to_minutes - seven_pm)
                printf("9:45 pm, arriving at 11:58 pm");
            else
                printf("7:00 pm, arriving at 9:20 pm");
        }

        if (to_minutes >= nine_45_pm && to_minutes <= midnight)
            printf("9:45 pm, arriving 11:58 pm");
    }

    printf("\n\n");

    return 0;
}
