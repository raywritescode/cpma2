/* ch02ex04.c

  C programming: A Modern Approach, Second Edition
  Chapter 2. Page 33. Exercise 4

  Write a program that declares serveral int and float variables--without
  initializing them--and then prints their values. Is there any pattern
  to the values? (Usually there isn't.)

  Ray Santos
  June 21, 2015

*/

#include <stdio.h>

int main(void)
{
  int i_one;
  int i_two;
  int i_three;
  float f_one;
  float f_two;
  float f_three;

  printf("i_one = %d\n", i_one);
  printf("i_two = %d\n", i_two);
  printf("i_three = %d\n", i_three);
  printf("f_one = %f\n", f_one);
  printf("f_two = %f\n", f_two);
  printf("f_three = %f\n", f_three);
}

/* Program execution

$ ./a.out
i_one = -1216995340
i_two = 134513851
i_three = -1216830064
f_one = -0.000014
f_two = -1.501445
f_three = -1.501466

-----

Notes:

1) I don't notice any patterns to the values printed.

2) $ gcc ch02ex04.c
    - compiles without displaying warnings.

3) $ gcc -Wall ch02ex04.c
    - compiles and displays the following warnings:

ch02ex04.c: In function ‘main’:
ch02ex04.c:32:1: warning: control reaches end of non-void function [-Wreturn-type]
ch02ex04.c:26:9: warning: ‘i_one’ is used uninitialized in this function [-Wuninitialized]
ch02ex04.c:27:9: warning: ‘i_two’ is used uninitialized in this function [-Wuninitialized]
ch02ex04.c:28:9: warning: ‘i_three’ is used uninitialized in this function [-Wuninitialized]
ch02ex04.c:29:9: warning: ‘f_one’ is used uninitialized in this function [-Wuninitialized]
ch02ex04.c:30:9: warning: ‘f_two’ is used uninitialized in this function [-Wuninitialized]
ch02ex04.c:31:9: warning: ‘f_three’ is used uninitialized in this function [-Wuninitialized]

*/
