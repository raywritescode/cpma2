/* pun2.c

   Book example of using a function having no parameters.
 
   Prints a bad pun.

   C Programming: A Modern Approach, Second Edition
   Chapter 9, Page 187

   Ray Santos
   December 18, 2015

*/

#include <stdio.h>

void print_pun(void)
{
   printf("To C, or not to C: that is the question.\n");
}

int main(void)
{
   print_pun();
   
   return 0;
}

/* Example run

$ gcc -Wall pun2.c 
$ ./a.out
To C, or not to C: that is the question.
$ 

*/
