/* length2.c
 *
 * Determines the length of a message.
 *
 * Note: Unlike length.c, this version doesn't use the
 * char ch variable. This version also uses getchar()
 * inside the while loop's controlling expression.
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
    int len = 0;

    printf("\nEnter a message: ");

    while (getchar() != '\n') 
        len++;

    printf("Your message was %d character(s) long.\n\n", len);

    return 0;
}
