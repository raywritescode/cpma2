/* addfrac.c

   Book example: Adds two fractions.

   C Programming: A Modern Approach, Second Edition
   Chapter 3, Page 46 

   Ray Santos
   June 30, 2015

*/

#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter first fraction: ");
  scanf("%d/%d", &num1, &denom1);

  printf("Enter second fraction: ");
  scanf("%d/%d", &num2, &denom2);

  result_num = num1 * denom2 + num2 * denom1;

  result_denom = denom1 * denom2;

  printf("The sum is %d/%d\n", result_num, result_denom);

  return 0;
}

/* Program Execution

Note: The resulting fraction isn't reduced to lowest terms.

$ gcc -Wall addfrac.c 
$ ./a.out
Enter first fraction: 5/6
Enter second fraction: 3/4
The sum is 38/24

*/
