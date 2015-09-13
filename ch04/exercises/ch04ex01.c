/* ch04ex01.c

  C programming: A Modern Approach, Second Edition

  Chapter 4. Page 68. Exercise 1

  Ray Santos
  September 12, 2015

  Show the output produced by each of the following program fragments.
  Assume that i, j, and k are int variables.

*/

#include <stdio.h>

int main(void)
{
  int i, j, k;

  i = 5;
  j = 3;
  printf("(a) %d %d\n", i / j, i % j);
  //       my answer: 1 2
  // computed answer: 1 2

  i = 2;
  j = 3;
  printf("(b) %d\n", (i + 10) % j);
  //       my answer: 0
  // computed answer: 0

  i = 7;
  j = 8;
  k = 9;
  printf("(c) %d\n", (i + 10) % k / j);
  //       my answer: 1
  // computer answer: 1

  i = 1;
  j = 2;
  k = 3;
  printf("(d) %d\n", (i + 5) % (j + 2) / k);
  //       my answer: 0
  // computer answer: 0
 
  return 0;
}

/* Program execution

$ gcc -Wall ch04ex01.c 
$ ./a.out
(a) 1 2
(b) 0
(c) 1
(d) 0

*/
