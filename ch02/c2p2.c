/* c2p2.c

   Ray Santos
   August 16, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 2. Programming Project 2

   Write a program that computes the volume of a sphere with a 10-meter
   radius, using the formula v = 4/3(pi)r^3. Write the fraction 4/3 
   as 4.0f/3.0f.  Hint: C doesn't have an exponentation operator, so 
   you'll need to multiply r by itself twice to compute r^3.

*/

#include <stdio.h>

#define PI 3.14159f

int main(void)
{
    float volume, radius = 10.0f;

    volume = (4.0f/3.0f) * PI * (radius * radius * radius);

    printf("The volume of a sphere with a 10-meter radius is %.2f\n", volume);    

    return 0;
}
