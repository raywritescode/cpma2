/* ch03pp06.c

  C programming: A Modern Approach, Second Edition
  Chapter 3. Page 50. Programming Project 6

  Ray Santos
  August 5, 2015

  Modify the addfrac.c program of Section 3.2 so that the user enters
  both fractions at the same time, separated by a plus sign:

    Enter two fractions separated by a plus sign: 5/6+3/4
    The sum is 38/24

  Note that the resulting fraction isn't reduced to lowest terms.

*/

#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter two fractions separated by a plus sign: ");
  scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;

  printf("The sum is %d/%d\n", result_num, result_denom);

  return 0;
}

/* Program Execution

$ gcc -Wall ch03pp06.c
$ ./a.out
Enter two fractions separated by a plus sign: 5/6+3/4
The sum is 38/24

$ ./a.out
Enter two fractions separated by a plus sign: 100/4+25/5
The sum is 600/20

$ ./a.out
Enter two fractions separated by a plus sign: 5/1+6/1
The sum is 11/1

$ ./a.out
Enter two fractions separated by a plus sign: 0/5+25/5
The sum is 125/25               

*/
