/* c7p11.c

   Ray Santos
   September 14, 2013
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 11

   Write a program that takes a first name and last name
   entered by the user and displays the last name, a comma, 
   and the first initial, followed by a period:

       Enter a first and last name: Ray Santos
       Santos, R.

   The user's input may contain extra spaces before the
   first name, between the first and last names, and
   after the last name.

*/

#include <stdio.h>

int main(void)
{
    char first_initial, last_name;
   
    printf("\nEnter a first and last name: ");
    scanf(" %c", &first_initial);    /* gets first letter of first name */

    while (getchar() != ' ') {
        /* ignore remaining first name characters until a blank space is reached */ ;
    }

    while ((last_name = getchar()) != '\n') {
        if (last_name == ' ')
            /* ignore blank spaces before and after last name */;
        else
            printf("%c", last_name);
    }       

    printf(", %c.\n\n", first_initial); 

    return 0;
} 
