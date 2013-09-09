/* c7p06.c

   Ray Santos
   September 8, 2013
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 6

   Write a program that prints the values of sizeof(int),
   sizeof(short), sizeof(long), sizeof(float), sizeof(double)
   and sizeof(long double).

*/

#include <stdio.h>

int main(void)
{
    printf("\nDisplays how much memory is required on this\n");
    printf("computer to store values of a particular type.\n\n");

    printf("Size of int: %d bytes\n", (int) sizeof(int));
    printf("Size of short: %d bytes\n", (int )sizeof(short)); 
    printf("Size of long: %d bytes\n", (int) sizeof(long));
    printf("Size of float: %d bytes\n", (int ) sizeof(float));
    printf("Size of double: %d bytes\n", (int )sizeof(double));
    printf("Size of long double: %d bytes\n\n", (int) sizeof(long double));

    return 0;
}
