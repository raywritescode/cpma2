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

/* Example test run

Enter an integer for each of the 10 prompts. The array's
contents will be displayed after the last integer is entered.

Enter an integer for element 1 of 10: 9
Enter an integer for element 2 of 10: 7
Enter an integer for element 3 of 10: 34
Enter an integer for element 4 of 10: 6
Enter an integer for element 5 of 10: 23
Enter an integer for element 6 of 10: 678
Enter an integer for element 7 of 10: 3
Enter an integer for element 8 of 10: 4
Enter an integer for element 9 of 10: 6
Enter an integer for element 10 of 10: 62

Contents of testArray with 10 elements
testArray[0] = 9
testArray[1] = 7
testArray[2] = 34
testArray[3] = 6
testArray[4] = 23
testArray[5] = 678
testArray[6] = 3
testArray[7] = 4
testArray[8] = 6
testArray[9] = 62

*/
