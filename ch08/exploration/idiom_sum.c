/* idiom_sum.c
 *
 * This code explores the idiom of using array subscripting to sum data
 * values of array elements.
 *
 * Ray Santos
 * raywritescode.com
 * September 18, 2014
 *
 */ 

#include <stdio.h>

#define NUM_ELEMENTS 10
#define INIT_VAL 0

int main(void)
{
   int testArray[NUM_ELEMENTS];
   int sum;
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

   sum = 0;
   for (i = 0; i < NUM_ELEMENTS; i++)
      sum += testArray[i];

   printf("\nThe sum of the array values is %d\n\n", sum);

   return 0;
}

/* Example test run

Enter an integer for each of the 10 prompts. The array's
contents will be displayed after the last integer is entered.

Enter an integer for element 1 of 10: 23
Enter an integer for element 2 of 10: 55
Enter an integer for element 3 of 10: 76
Enter an integer for element 4 of 10: 23
Enter an integer for element 5 of 10: 5
Enter an integer for element 6 of 10: 90
Enter an integer for element 7 of 10: 323
Enter an integer for element 8 of 10: 5
Enter an integer for element 9 of 10: 3
Enter an integer for element 10 of 10: 8

Contents of testArray with 10 elements
testArray[0] = 23
testArray[1] = 55
testArray[2] = 76
testArray[3] = 23
testArray[4] = 5
testArray[5] = 90
testArray[6] = 323
testArray[7] = 5
testArray[8] = 3
testArray[9] = 8

The sum of the array values is 611

*/
