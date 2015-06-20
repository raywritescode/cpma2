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
   int ab;

   a/**/b = 0;

   printf("Ideally, gcc should have failed compiling this program\n");

   return 0;
}

/* gcc compiler output

$ gcc -Wall unterminatedCommentTest.c 
unterminatedCommentTest.c: In function ‘main’:
unterminatedCommentTest.c:21:4: error: unknown type name ‘a’
unterminatedCommentTest.c:21:9: warning: unused variable ‘b’ [-Wunused-variable]
unterminatedCommentTest.c:19:8: warning: unused variable ‘ab’ [-Wunused-variable]

*/

