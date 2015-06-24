/* ch02pr02a.c

   C programming: A Modern Approach, Second Edition
   Chapter 2. Page 34. Programming Project 02 (float version)

   Write a program that computes the volume of a sphere with a 10-meter
   radius, using the formula v = 4/3(pi)r^3. Write the fraction 4/3 as
   4.0f / 3.0f. Hint: C doesn't have an exponentiation operator, so you'll
   need to multiply r by itself twice to compute r^3.

   Ray Santos
   June 23, 2015

*/

#include <stdio.h>

#define PI 3.14159265359f

int main(void)
{
  float r = 10.0f;
  float v = 4.0f / 3.0f * PI * (r * r * r);

  printf("The volume of a sphere with a 10-meter radius is: %.2f\n", v); 

  return 0;
}

/* Program Execution

$ gcc -Wall ch02pr02a.c
$ ./a.out
The volume of a sphere with a 10-meter radius is: 4188.79

*/
