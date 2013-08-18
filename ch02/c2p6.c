/* c2p6.c

   Ray Santos
   August 18, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 2. Programming Project 6

   Modify the program of Programming Project 5 so that the
   polynomial is evaluated using the following formula:

   ((((3x + 2)x - 5)x - 1 )x + 7)x - 6

   [rsantos] Sample polynomial values manually calculated by hand
     if x = -1 then value is -10
     if x = 0 then value is -6
     if x = 1 then value is 0
     if x = 2 then value is 92 

*/

#include <stdio.h>

int main(void)
{
    int x, value;

    printf("\nLet's display the value for polynomial\n");
    printf("((((3x + 2)x - 5)x - 1)x + 7)x - 6\n");
    printf("based on your integer value for x\n\n");
    printf("Enter an integer number: ");
    scanf("%d", &x);

    value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Polynomial value is %d\n\n", value);    

    return 0;
}
