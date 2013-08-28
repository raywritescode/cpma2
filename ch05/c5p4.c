/* c5p4.c

   Ray Santos
   August 27, 2013
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 4

   Here's a simplified version of the Beaufort scale, which
   is used to estimate wind force:

   Speed (knots)     Description
   -----------------------------
   Less than 1       Calm
   1 - 3             Light air
   4 - 27            Breeze
   28 - 47           Gale
   48 - 63           Storm
   Above 63          Hurricane

   Write a program that asks the user to enter a wind
   speed (in knots), then displays the corresponding
   description.

*/

#include <stdio.h>

int main(void)
{
    int speed;

    printf("\nEnter wind speed (knots): ");
    scanf("%d", &speed);

    printf("Wind force at %d knots is ", speed);

    if (speed < 1)
        printf("Calm");
    else if (speed <= 3)
        printf("Light air");
    else if (speed <= 27)
        printf("Breeze");
    else if (speed <= 47)
        printf("Gale");
    else if (speed <= 63)
        printf("Storm");
    else 
        printf("Hurricane");

    printf("\n\n");

    return 0;
}
