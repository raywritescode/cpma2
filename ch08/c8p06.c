/* c8p06.c
 *
 * C Programming: A Modern Approach, Second Edition
 * Chapter 8, Programming Project 6
 *
 * The prototypical Internet newbie is a fellow named B1FF, who has a unique
 * way to writing messages. Here's a typical B1FF communique:
 *
 *   H3Y DUD3, C 15 R1LLY C00L!!!!!
 *
 * Write a "B1FF filter" that reads a message entered by the user and translates
 * it into B1FF-speak:
 *
 *   Enter a message: Hey dude, C is rilly cool
 *   In B1FF-speak:   H3Y DUD3, C 15 R1LLY C00L!!!!!
 *
 * Your program should convert the message to upper-case letters, substitute   
 * digits for certain letters (A=4, B=8, E=3, I=1, O=0, S=5), and then append
 * 10 or so exclamation marks. 
 *
 * Hint: Store the original message in an array of characters, then go back 
 * through the array, translating and printing characters one by one.
 *
 * Ray Santos
 * May 18, 2014
 *
 */

#include <stdio.h>

int main(void)
{
   char message[];
   int i;

   printf("Enter message: ");
   /* TODO: read in an array of characters */
   
   /* TODO: translate to B1FF-speak */

   printf("In B1FF-speak: ");
   /* TODO: output the translated characters */
   
   return 0;
}
