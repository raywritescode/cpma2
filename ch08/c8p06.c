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
 * May 19, 2014
 *
 */

#include <stdio.h>

#define MSG_SIZE 100

int main(void)
{
   char message[MSG_SIZE] = {0};
   char ch;
   int i;

   printf("Enter a message: ");
   
   i = 0;
   while (( ch = getchar()) != '\n') {
      message[i] = toupper(ch);
      i++;
   }
   message[i] = '\0';

   printf("In B1FF-speak:   ");

   i = 0;
   while (message[i] != '\n') {
      switch (message[i]) {
         case 'A': message[i] = '4';
                   break;
         case 'B': message[i] = '8';
                   break;
         case 'E': message[i] = '3';
                   break;
         case 'I': message[i] = '1';
                   break;
         case 'O': message[i] = '0';
                   break;
         case 'S': message[i] = '5';
                   break;
   }
      putchar(message[i]);
      i++;
   }
   printf("!!!!!\n"); 
 
   return 0;
}
