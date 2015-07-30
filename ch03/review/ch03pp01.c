/* ch03pp01.c

  C programming: A Modern Approach, Second Edition
  Chapter 3. Page 50. Programming Project 01

  Ray Santos
  July 29, 2015

  Write a program that accepts a date from the user in the form
  mm/dd/yyyy and then displays it in the form yyyymmdd:

    Enter a date (mm/dd/yyyy): 2/17/2011
    You entered the date 20110217

*/

#include <stdio.h>

int main(void)
{
  int month, day, year;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("You entered the date %d%.2d%.2d\n", year, month, day);

  return 0;
}

/* Program Execution

$ gcc -Wall ch03pp01.c 
$ ./a.out
Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date 20110217

*/
