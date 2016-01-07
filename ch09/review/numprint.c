/* numprint.c 

   Variable gets the number of chars of a print statement.

   My expanded version of the book's code snippet example
   that mentions the printf function returning the number
   of characters that it prints.

   C Programming: A Modern Approach, Second Edition
   Chapter 9, Page 189

   Ray Santos
   January 6, 2016

*/

#include <stdio.h>

int main(void)
{
   int num_chars;

   num_chars = printf("Hello world");
   printf("\nNumber of chars in string = %d\n", num_chars);

   return 0;
}

/* Example run

$ gcc -Wall numprint.c 
$ ./a.out
Hello world
Number of chars in string = 11

*/
