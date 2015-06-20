/* celsius.c

   Converts a Fahrenheit temperature to Celsius

   C programming: A Modern Approach, Second Edition
   Chapter 2. Page 24
 
   Ray Santos
   June 19, 2015

*/

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
  {
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n", celsius);

    return 0;
}

/* Example run

Enter Fahrenheit temperature: 212
Celsius equivalent: 100.0

*/
