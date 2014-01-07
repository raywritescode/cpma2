/* p163a.c
 *
 * experimenting with array off-by-one
 *
 */

#include <stdio.h>

int main(void) {

   int a[10], i;

   for (i = 1; i <= 10; i++) {
      a[i] = 0;
      printf("%d\n", a[i]);
   }

   return 0;
}
