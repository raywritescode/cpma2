/* repdigit_c99.c
 *
 * Checks numbers for repeated digits (C99 version).
 *
 *     Enter a number: 28212
 *     Repeated digit
 *
 * The number 28212 has a repeated digit (2);
 * a number like 9357 doesn't.
 *
 */

#include <stdio.h>
#include <stdbool.h>    /* C99 only */

int main(void)
{
    bool digit_seen[10] = {false};
    int digit;
    long n;

    printf("\nEnter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
            break;
        digit_seen[digit] = true;
        n /= 10;
    }

    if (n > 0)
        printf("Repeated digit\n");
    else
        printf("No repeated digit\n");

    return 0;
}
