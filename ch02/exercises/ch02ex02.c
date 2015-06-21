/* ch02ex02.c

  C programming: A Modern Approach, Second Edition
  Chapter 2. Page 33. Exercise 2
  
  Ray Santos
  June 21, 2015

*/

#include <stdio.h>

int main(void)
{
  printf("Parkinson's Law: \nWork expands so as to ");
  printf("fill the time\n");
  printf("available for its completion.\n");

  return 0;
}

/*
  a) Identify the directives and statements in this program:
     - directives
       - #include <stdio.h>
     - statements
       - the three printf lines
       - the return line

  b) What outpus does the program produce?
        Parkinson's Law: 
        Work expands so as to fill the time
        available for its completion.

     Actual output is:
        $ gcc -Wall ch02ex02.c
        $ ./a.out
        Parkinson's Law: 
        Work expands so as to fill the time
        available for its completion.
*/
