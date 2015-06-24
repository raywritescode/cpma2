/* ch02pr03.c

   C programming: A Modern Approach, Second Edition
   Chapter 2. Page 34. Programming Project 03

   Modify the program of Programming Project 2 (given below) so that it
   prompts the user to enter the radius of the sphere.

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
  float r, v;

  printf("Enter the radius of a sphere (meters): ");
  scanf("%f", &r);

  v = 4.0f / 3.0f * PI * (r * r * r);

  printf("The volume of a sphere with a %.2f-meter radius is %.2f\n", r, v);

  return 0;
}

/* Program Execution

$ gcc -Wall ch02pr03.c
$ ./a.out
Enter the radius of a sphere (meters): 10
The volume of a sphere with a 10.00-meter radius is 4188.79
$ ./a.out
Enter the radius of a sphere (meters): 1
The volume of a sphere with a 1.00-meter radius is 4.19
$ ./a.out
Enter the radius of a sphere (meters): 100
The volume of a sphere with a 100.00-meter radius is 4188790.25
$ ./a.out
Enter the radius of a sphere (meters): 123.45
The volume of a sphere with a 123.45-meter radius is 7880647.00

*/
