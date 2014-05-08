/* arrayBlunder.c 
 *
 * Example behavior of a subscript
 * going out of range.
 *
 * C Programming: A Modern Approach, Second Edition
 * Page 163
 *
 */

#include <stdio.h>

#define N 10

int main(void) {
   int a[N];
   int i;

   for (i = 1; i <= N; i++) {  // Causes infinite loop. Blunder is the <= should be <
      a[i] = 0;
      printf("%d\n", &a[i]);
   }
}
