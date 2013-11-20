/* sizeof.c 
 *
 * Ray Santos
 * November 19, 2013
 *
 * Checking out how the sizeof operator works.
 *
 */

#include <stdio.h>

int main(void)
{
   int myInt = 6;
   int myArray[10] = { 0 };

   printf("\nmyInt value is %d\n", myInt);
   printf("sizeof myInt is %d bytes\n", sizeof(myInt));

   printf("sizeof myArray[10] is %d bytes\n\n", sizeof(myArray));
   
   return 0;
}
