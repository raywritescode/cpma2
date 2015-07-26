/* ch03ex03.c

  C programming: A Modern Approach, Second Edition
  Chapter 3. Page 49. Exercise 3

  Ray Santos
  July 25, 2015

  For each of the following pairs of scanf format strings, indicate whether
  or not the two strings are equivalent. If they're not, show how they can
  be distinguished.
*/

#include <stdio.h>

int main(void)
{
  int x = 1;
  int y = 2;
  int z = 3;

  float a = 10.0;
  float b = 20.0;
  float c = 30.0;

  // (a) "%d" versus " %d"
  printf("(a) \"%%d\" versus \" %%d\"\tNot equivalent\n\n");
  printf("\t \"%%d\" = %d\n", x);
  printf("\t\" %%d\" =  %d\n\n", x); 

  // (b) "%d-%d-%d" versus "%d -%d -%d"
  printf("(b) \"%%d-%%-d-%%d\" versus \"%%d -%%d -%%d\"\tNot equivalent\n\n");
  printf("\t   \"%%d-%%d-%%d\" = %d-%d-%d\n", x, y, z);
  printf("\t\"%%d -%%d - %%d\" = %d -%d -%d\n\n", x, y, z);

  // (c) "%f" versus "%f "
  printf("(c) \"%%f\" versus \"%%f \"\tLooks equivalent to me\n\n");
  printf("\t \"%%f\" = %f\n", a);
  printf("\t\"%%f \" = %f \n\n", a);

  // (d) "%f,%f" versus "%f, %f"
  printf("(d) \"%%f,%%f\" versus \"%%f, %%f\"\tNot equivalent\n\n");
  printf("\t \"%%f,%%f\" = %f,%f\n", a, b);
  printf("\t\"%%f, %%f\" = %f, %f\n\n", a, b);

  return 0;
}

/* Program Execution

$ gcc ch03ex03.c 
$ ./a.out
(a) "%d" versus " %d"	Not equivalent

	 "%d" = 1
	" %d" =  1

(b) "%d-%-d-%d" versus "%d -%d -%d"	Not equivalent

	   "%d-%d-%d" = 1-2-3
	"%d -%d - %d" = 1 -2 -3

(c) "%f" versus "%f "	Looks equivalent to me

	 "%f" = 10.000000
	"%f " = 10.000000 

(d) "%f,%f" versus "%f, %f"	Not equivalent

	 "%f,%f" = 10.000000,20.000000
	"%f, %f" = 10.000000, 20.000000

*/
