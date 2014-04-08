/* average2.c
 *
 * Computes pairwise averages of three numbers.
 * Uses a function declaration for average.
 *
 */

#include <stdio.h>

double average (double a, double b);  /* Declaration */

int main(void)
{
  double x, y, z;

  printf("Enter three numbers: ");
  scanf("%lf%lf%lf", &x, &y, &z);
  printf("Average of %g and %g: %g\n", x, y, average(x, y));
  printf("Average of %g and %g: %g\n", y, z, average(y, z));
  printf("Average of %g and %g: %g\n", x, z, average(x, z));

  return 0;
}

double average (double a, double b)  /* Definition */
{
  return (a + b) / 2;
}
