/* numdigits.c

   Calculates the number of digits in an integer

*/

#include <stdio.h>

int main(void)
{
    int digits = 0, n;

    printf("\nEnter a non-negative integer: ");
    scanf("%d", &n);

    do {
        n /= 10;
        digits++;
    } while (n > 0);

    printf("The number has %d digit(s).\n\n", digits);

    return 0;
}
