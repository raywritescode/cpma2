/* c8p04.c 
 *
 * C Programming: A Modern Approach, Second Edition
 * Chapter 8, Programming Project 4
 *
 * Modify the reverse.c program of Section 8.1 to use the
 * expression (int) (sizeof(a) / sizeof(a[0])) (or a macro
 * with this value) for the array length.
 *
 * Ray Santos
 * May 13, 2014
 *
 */

#include <stdio.h>

#define SIZE ((int) (sizeof(a) / sizeof(a[0])))

int main(void) {

   int a[10], i;

   printf("Enter %d numbers: ", SIZE);

   for (i = 0; i < SIZE; i++)
      scanf("%d", &a[i]);

   printf("In reverse order:");
   for (i = SIZE - 1; i >= 0; i--)
      printf(" %d", a[i]);
   printf("\n");   

   return 0;
}
