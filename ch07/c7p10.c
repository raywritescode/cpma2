/* c7p10.c

   Ray Santos
   September 9, 2013
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 10

   Write a program that counts the number of vowels
   (a, e, i, o, u) in a sentence:

       Enter a sentence: And that's the way it is.
       Your sentence contains 6 vowels.

*/

#include <stdio.h>
#include <ctype.h>   /* for access to the toupper function */

int main(void)
{
    char input;
    int count = 0;

    printf("\nEnter a sentence: ");

    while ((input = getchar()) != '\n') {
        switch (toupper(input)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                count++;
                break;
        }
    }

    printf("Your sentence contains %d vowels.\n\n", count);

    return 0;
}
