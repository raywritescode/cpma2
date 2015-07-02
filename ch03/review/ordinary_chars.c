/* ordinary_chars.c

   Ordinary characters in format strings.

   C Programming: A Modern Approach, Second Edition
   Chapter 3, Page 45  

   Ray Santos
   July 1, 2015

*/

#include <stdio.h>

int main(void)
{
  int x, y;
  int a, b;

  printf("Enter 5/ 96: ");
  scanf("%d/%d", &x, &y);  // conversion specs can match the given input
  printf("x = %d\n", x);
  printf("y = %d\n", y);

  printf("\nEnter 5 / 96: ");
  scanf("%d/%d", &a, &b); // conversion specs can't match the given input
  printf("a = %d\n", a);
  printf("b = %d\n", b);

  return 0;
}

/* Program Execution

$ gcc -Wall ordinary_chars.c 
$ ./a.out
Enter 5/ 96: 5/ 96
x = 5
y = 96

Enter 5 / 96: 5 / 96
a = 5
b = -1218710251

*/
