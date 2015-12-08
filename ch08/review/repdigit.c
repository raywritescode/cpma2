/* repdigit.c

   Book example using a one-dimensional array.

   Checks numbers for repeated digits.

   C Programming: A Modern Approach, Second Edition
   Chapter 8, Page 166

   Ray Santos
   December 7, 2015

*/

#include <stdbool.h>   /* C99 only */
#include <stdio.h>

int main(void)
{
   bool digit_seen[10] = {false};
   int digit;
   long n;

   printf("Enter a number: ");
   scanf("%ld", &n);

   while (n > 0) {
      digit = n % 10;
      if (digit_seen[digit])
         break;
      digit_seen[digit] = true;
      n /= 10;
   }

   if (n > 0)
      printf("Repeated digits\n");
   else
      printf("No repeated digits\n");

   return 0;
}

/* Example run

$ gcc -Wall repdigit.c 
$ ./a.out
Enter a number: 28212
Repeated digits
$ ./a.out
Enter a number: 12345
No repeated digits
$ 

*/
