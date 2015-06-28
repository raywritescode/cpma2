/* conversion_wrong.c

   Compilers aren't required to check that the number of
   conversion specifications in a format string matches
   the number of output items.

   C Programming: A Modern Approach, Second Edition
   Chapter 3, Page 38

   Ray Santos
   June 28, 2015

*/

#include <stdio.h>

int main(void)
{
  int i, j;
  float x, y;

  i = 10;
  x = 43.2892f;

  printf("integer i initialized to 10\n");
  printf("integer j not initialized\n");
  printf("float x initialized to 43.2892f\n");
  printf("floax y not initialized\n\n");

  printf("Two integer conversion specifications (%%d %%d) and one output item (i):\n");
  printf("\t%d %d\n\n", i);  /*** WRONG ***/

  printf("One float conversion specification (%%f) and two output items (x, y):\n");
  printf("\t%f\n\n", x, y);  /*** WRONG ***/

  printf("%%d and %%f conversion specifications getting incorrect output items (i, x):\n");
  printf("\t%f %d\n\n", i, x); /*** WRONG ***/

  return 0;
}

/* Program Execution

$ gcc -Wall conversion_wrong.c 
conversion_wrong.c: In function ‘main’:
conversion_wrong.c:31:3: warning: format ‘%d’ expects a matching ‘int’ argument [-Wformat]
conversion_wrong.c:34:3: warning: too many arguments for format [-Wformat-extra-args]
conversion_wrong.c:37:3: warning: format ‘%f’ expects argument of type ‘double’, but argument 2 has type ‘int’ [-Wformat]
conversion_wrong.c:37:3: warning: format ‘%d’ expects argument of type ‘int’, but argument 3 has type ‘double’ [-Wformat]
conversion_wrong.c:19:10: warning: unused variable ‘j’ [-Wunused-variable]
conversion_wrong.c:34:9: warning: ‘y’ is used uninitialized in this function [-Wuninitialized]

$ ./a.out
integer i initialized to 10
integer j not initialized
float x initialized to 43.2892f
floax y not initialized

Two integer conversion specifications (%d %d) and one output item (i):
	10 -1076261928

One float conversion specification (%f) and two output items (x, y):
	43.289200

%d and %f conversion specifications getting incorrect output items (i, x):
	-0.000000 1078306052

*/
