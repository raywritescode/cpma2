/* ch03ex02.c

  C programming: A Modern Approach, Second Edition
  Chapter 3. Page 49. Exercise 2

  Ray Santos
  July 3, 2015

  Write calls of printf that display a float variable x
  in the following formats:

*/

#include <stdio.h>

int main(void)
{
  float x = 83.162;

  // a) Exponential notation; left-justified in a field of size 8;
  //    one digit after the decimal point.
  printf("%-8.1e", x);
  printf("\n");

  // b) Exponential notation; right-justified in a field of size 10;
  //    six digits after the decimal point.
  printf("%10.6e", x);
  printf("\n");

  // c) Fixed decimal notation; leftjustified in a field of size 8;
  //    three digits after the decimal point.
  printf("%-8.3f", x);
  printf("\n");

  // d) Fixed decimal notation; right-justified in a field of size 6;
  //    no digits after the decimal point.
  printf("%6.0f", x);
  printf("\n");

  return 0;
}

/* Program Execution

$ gcc -Wall ch03ex02.c 
$ ./a.out
8.3e+01 
8.316200e+01
83.162  
    83

*/
