/* length2.c

   Book example using character types.

   Determines the length of a message.
     Uses C idioms to shorten lines of code needed.

   C Programming: A Modern Approach, Second Edition
   Chapter 7, Page 142

   Ray Santos
   December 4, 2015

*/

#include <stdio.h>

int main(void)
{
   int length = 0;

   printf("Enter a message: ");

   while (getchar() != '\n')    // idiom usage inside parentheses
      length++;

   printf("Your message is %d character(s) long.\n", length);

   return 0;
}

/* Example runs

$ gcc -Wall length2.c 
$ ./a.out
Enter a message: We the People of the United States
Your message is 34 character(s) long.
$ ./a.out
Enter a message: Brevity is the soul of wit.
Your message is 27 character(s) long.
$ ./a.out
Enter a message: Ray Santos
Your message is 10 character(s) long.
$ 

*/
