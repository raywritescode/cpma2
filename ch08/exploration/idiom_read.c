/* idiom_read.c
 *
 * This code explores the idiom of using array subscripting to read data
 * into the elements of an array.
 *
 * Ray Santos
 * raywritescode.com
 * September 17, 2014
 *
 */ 

#include <stdio.h>

#define NUM_ELEMENTS 10
#define INIT_VAL 0

int main(void)
{
   int testArray[NUM_ELEMENTS];
   int i;

   printf("\nEnter an integer for each of the %d prompts. The array's\n", NUM_ELEMENTS);
   printf("contents will be displayed after the last integer is entered.\n\n");
   
   for (i = 0; i < NUM_ELEMENTS; i++)
      testArray[i] = INIT_VAL;

   for (i = 0; i < NUM_ELEMENTS; i++) {
      printf("Enter an integer for element %d of %d: ", i + 1, NUM_ELEMENTS);
      scanf("%d", &testArray[i]);
   }

   printf("\nContents of testArray with %d elements\n", NUM_ELEMENTS);

   for (i = 0; i < NUM_ELEMENTS; i++) {
      printf("testArray[%d] = %d\n", i, testArray[i]);
   }
  
   printf("\n");

   return 0;
}
