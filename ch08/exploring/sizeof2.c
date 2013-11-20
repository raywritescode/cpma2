/* sizeof2.c 
 *
 * Ray Santos
 * November 19, 2013
 *
 * Checking out how to use the sizeof operator
 * to determine the length of the array.
 *
 */

#include <stdio.h>

int main(void)
{
   int myInt = 5;
   int myArray[10] = { 0 };

   printf("\nmyInt value is %d\n", myInt);
   printf("sizeof myInt is %d bytes\n", sizeof(myInt));

   printf("Number of myArray elements is %d\n\n", sizeof(myArray) / sizeof(myArray[0]));
   
   return 0;
}
