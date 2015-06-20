/* unterminatedCommentTest.c

   Code to test if gcc will fail to compile a program
   that contains an unterminated comment. Expectation
   is that gcc will not compile the code.

   C programming: A Modern Approach, Second Edition
   Chapter 2. Page 31

   Ray Santos
   June 20, 2015

*/

#include <stdio.h>

int main(void)
{

   /* This is an unterminated comment

   printf("Ideally, gcc should have failed compiling this program\n");

   return 0;
}

/* gcc compiler output

$ gcc -Wall unterminatedCommentTest.c 
unterminatedCommentTest.c: In function ‘main’:
unterminatedCommentTest.c:27:1: warning: "/*" within comment [-Wcomment]
unterminatedCommentTest.c:18:1: error: expected declaration or statement at end of input
unterminatedCommentTest.c:18:1: warning: control reaches end of non-void function [-Wreturn-type]

*/
