/* length.c
 *
 * Determines the length of a message.
 *
 * Example run:
 * 
 *     Enter a message: Brevity is the soul of wit.
 *     Your message was 27 character(s) long.
 *
 */

#include <stdio.h>

int main(void)
{
    char ch;
    int len = 0;

    printf("\nEnter a message: ");
    ch = getchar();

    while (ch != '\n') {
        len++;
        ch = getchar();
    }

    printf("Your message was %d character(s) long.\n\n", len);

    return 0;
}
