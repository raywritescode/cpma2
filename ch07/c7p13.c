/* c7p13.c

   Ray Santos
   September 10, 2013
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 13

   Write a program that calculates the average word length
   for a sentence: 

       Enter a sentence: It was deja vu all over again.
       Average word length: 3.4

   For simplicity, your program should consider a punctuation
   mark to be part of the word to which it is attached. Display
   the average word length to one decimal place.

   [rsantos] I modified the output to display the number of
   characters and the number of words.

*/

#include <stdio.h>

#define LAST_WORD 1    /* the last word is not counted in the switch */

int main(void)
{
    char input;
    int characters = 0, words = LAST_WORD;

    printf("\nEnter a sentence: ");

    while ((input = getchar()) != '\n') {
        switch (input) {
            case ' ':  
                words++;
                break;
            default:
                characters++;
                break;
        }
    }

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Average word length %.1f\n\n", (float) characters / words);

    return 0;
}
