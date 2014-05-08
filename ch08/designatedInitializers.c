/* designatedInitializers.c
 *
 * Assigns values to select array elements
 * using designated intializers.
 *
 * C Programming: A Modern Approach, Second Edition
 * page 165
 *
 */

#include <stdio.h>

#define N 15

int main(void) {

   int a[N] = {[2] = 29, [9] = 7, [14] = 48};
   int i;

   for ( i = 0; i < N; i++ )
      printf("Index %d value is %d\n", i, a[i]);
 
   return 0;
}
