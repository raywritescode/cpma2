/* idiom_clear.c
 *
 * This code explores the idiom of using array subscripting to assign the value
 * of INIT_VAL to all the elements of an array.
 *
 * Ray Santos
 * raywritescode.com
 * September 16, 2014
 *
 */ 

#include <stdio.h>

#define NUM_ELEMENTS 10
#define INIT_VAL 7

int main(void)
{
   int testArray[NUM_ELEMENTS];
   int i;
   
   for (i = 0; i < NUM_ELEMENTS; i++)
      testArray[i] = INIT_VAL;

   printf("\nContents of testArray with %d elements\n", NUM_ELEMENTS);
   printf("all assigned the value of %d\n\n", INIT_VAL);

   for (i = 0; i < NUM_ELEMENTS; i++) {
      printf("testArray[%d] = %d\n", i, testArray[i]);
   }
  
   printf("\n");

   return 0;
}
