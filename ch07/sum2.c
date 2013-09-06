/* sum2.c
 *
 * Sums a series of numbers (using long variables)
 *
 * Example run:
 * 
 *     This program sums a series of integers.
 *     Enter integers (0 to terminate): 10000 20000 30000 0
 *     The sum is 60000
 *
 */

#include <stdio.h>

int main(void)
{
    long n, sum = 0;

    printf("\nThis program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%ld", &n);

    while (n != 0) {
        sum += n;
        scanf("%ld", &n);
    }

    printf("The sum is: %ld\n\n", sum);

    return 0;
}
