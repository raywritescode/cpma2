/* c3p4.c

   Ray Santos
   August 20, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 3, Programming Project 4

   Write a program that prompts the user to enter a telephone
   number in the form (xxx) xxx-xxxx and then displays the
   number in the form xxx.xxx.xxxx:

       Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
       You entered 404.817.6900

*/

#include <stdio.h>

int main(void)
{
    int area_code, exchange, subscriber;

    printf("\nEnter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area_code, &exchange, &subscriber);

    printf("You entered %d.%d.%d\n\n", area_code, exchange, subscriber);

    return 0;
}
