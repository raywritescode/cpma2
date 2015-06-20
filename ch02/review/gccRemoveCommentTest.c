/* gccRemoveCommentTest.c

   Code to test if gcc replaces comments with a single
   space character, per the C standard. Expectation is 
   that gcc will replace comments with a single character
   and thus fail to compile the program because of
   line 23.

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

$ gcc -Wall gccRemoveCommentTest.c 
gccRemoveCommentTest.c: In function ‘main’:
gccRemoveCommentTest.c:23:4: error: unknown type name ‘a’
gccRemoveCommentTest.c:23:9: warning: unused variable ‘b’ [-Wunused-variable]
gccRemoveCommentTest.c:21:8: warning: unused variable ‘ab’ [-Wunused-variable]

*/
