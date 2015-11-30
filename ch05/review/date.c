/* date.c

   Book example: Prints a date in legal form

   C Programming: A Modern Approach, Second Edition
   Chapter 5, Page 89

   Ray Santos
   November 29, 2015

*/

#include <stdio.h>

int main(void)
{
   int month, day, year;

   printf("Enter date (mm/dd/yy): ");
   scanf("%d /%d /%d", &month, &day, &year);

   printf("Date this %d", day);
   switch (day) {
      case 1: case 21: case 31:
         printf("st"); break;
      case 2: case 22:
         printf("nd"); break;
      case 3: case 23:
         printf("rd"); break;
      default: printf("th"); break;
   }

   printf(" day of ");
   switch (month) {
      case 1: printf("January"); break;
      case 2: printf("February"); break;
      case 3: printf("March"); break;
      case 4: printf("April"); break;
      case 5: printf("May"); break;
      case 6: printf("June"); break;
      case 7: printf("July"); break;
      case 8: printf("August"); break;
      case 9: printf("September"); break;
      case 10: printf("October"); break;
      case 11: printf("November"); break;
      case 12: printf("December"); break;
   }

   printf(", 20%.2d.\n", year);

   return 0;
}

/* Example runs

$ ./a.out
Enter date (mm/dd/yy): 11/29/15
Date this 29th day of November, 2015.
$ ./a.out
Enter date (mm/dd/yy): 12/31/15
Date this 31st day of December, 2015.
$ ./a.out
Enter date (mm/dd/yy): 01/02/16
Date this 2nd day of January, 2016.

*/
