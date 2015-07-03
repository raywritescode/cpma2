/* ch03ex01.c

  C programming: A Modern Approach, Second Edition
  Chapter 3. Page 49. Exercise 1

  Ray Santos
  July, 2, 2015

  Q: What output do the folowing calls of printf produce?

*/

#include <stdio.h>

int main(void)
{
  printf("%6d, %4d\n", 86, 1040);
  // My answer: ****861040   where * is one space.
  // Actual answer: ****86, 1040    Note: I forgot about handling the comma in the format string.

  printf("%12.5e\n", 30.253);
  // My answer: **3.02530e+1               
  // Actual answer: *3.02530e+01    Note: I need to review exponential forms

  printf("%.4f\n", 83.162);
  // My answer: 83.1620
  // Actual answer: 83.1620         Note: Correctly answered

  printf("%-6.2g\n", .0000009979);
  // My answer: .00***
  // Actual answer: 1e-06           Note: I need to review exponential forms

  return 0;
}

/* Program Execution

$ gcc -Wall ch03ex01.c 
$ ./a.out
    86, 1040
 3.02530e+01
83.1620
1e-06 

*/
