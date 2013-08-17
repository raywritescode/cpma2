/* c2p3.c

   Ray Santos
   August 16, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 2. Programming Project 3

   Modify the program of Programming Project 2 so that it 
   prompts the user to enter the radius of the sphere.

*/

#include <stdio.h>

#define PI 3.14159f

int main(void)
{
    float volume, sphere, radius;

    printf("Enter a radius value: ");
    scanf("%f", &radius);

    volume = (4.0f/3.0f) * PI * (radius * radius * radius);

    printf("The volume of a sphere with a %.2f-meter radius is %.2f\n", radius, volume);    

    return 0;
}
