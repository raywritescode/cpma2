/* ch02ex03.c

  C programming: A Modern Approach, Second Edition
  Chapter 2. Page 33. Exercise 3

  Condense the dweight.c program by (1) replacing the assignment to height,
  length, and width with initializers and (2) removing the weight variable,
  instead calculating (volume + 165) / 166 within the last printf.
  
  Ray Santos
  June 21, 2015

*/

#include <stdio.h>

int main(void)
{
  int height = 8;
  int length = 12;
  int width = 10;
  int volume = height * length * width;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

  return 0;
}

/* Program execution

$ gcc -Wall ch02ex03.c
$ ./a.out
Dimensions: 12x10x8
Volume (cubic inches): 960
Dimensional weight (pounds): 6

*/
