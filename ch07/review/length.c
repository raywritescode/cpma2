/* length.c

   Book example using character types.

   Determines the length of a message.

   C Programming: A Modern Approach, Second Edition
   Chapter 7, Page 142

   Ray Santos
   December 4, 2015

*/

#include <stdio.h>

int main(void)
{
   char ch;
   int length = 0;

   printf("Enter a message: ");
   ch = getchar();

   while (ch != '\n') {
      length++;
      ch = getchar();
   }

   printf("Your message was %d character(s) long.\n", length);

   return 0;
}

/* Example runs

$ gcc -Wall length.c 
ray@wheezy:~/code_nas/cpma2/ch07/review$ ./a.out
Enter a message: The quick brown fox jumped over the lazy dogs.
Your message was 46 character(s) long.
$ ./a.out
Enter a message: Brevity is the soul of wit.
Your message was 27 character(s) long.
$ ./a.out
Enter a message: raywritescode was here
Your message was 22 character(s) long.
$ 

*/
