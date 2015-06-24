/* ch02pr02b.c

   C programming: A Modern Approach, Second Edition
   Chapter 2. Page 34. Programming Project 02 (int version)

   Write a program that computes the volume of a sphere with a 10-meter
   radius, using the formula v = 4/3(pi)r^3. Write the fraction as 4/3.
   What happens? Hint: C doesn't have an exponentiation operator, so you'll
   need to multiply r by itself twice to compute r^3.

   Ray Santos
   June 23, 2015

*/

#include <stdio.h>

#define PI 3.14159265359f

int main(void)
{
  int r = 10;
  float v = 4 / 3 * PI * (r * r * r);

  printf("The volume of a sphere with a 10-meter radius is: %.2f\n", v); 

  printf("
  return 0;
}

/* Program Execution

$ gcc -Wall ch02pr02b.c
$ ./a.out
The volume of a sphere with a 10-meter radius is: 3141.59

NOTE: This int version produces the wrong answer because the 
      int value of 4/3 is 1 (instead of 1.333). The value of v is 
      then calculated as 1 * PI * (r * r * r), which equals 3141.59.

*/
