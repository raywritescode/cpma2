/* c7p02.c

   Ray Santos
   September 6, 2013
  
   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 2 

   Modify the square2.c program of Section 6.3 so that it 
   pauses every 24 squares and displays the following message:

       Press Enter to continue...

   After displaying the message, the program should use
   getchar to read a character. getchar won't allow the 
   program to continue until the user presses the Enter key.

*/

#include <stdio.h>

#define INTERVAL 24

int main(void)
{
    int n, i;

    printf("\nThis program prints a table of squares.\n");
    printf("Enter number of entries in table: ");

    scanf("%d", &n); 
    getchar() == ' ';

    for (i = 1; i <= n; i++) {
        printf("%10d%10d\n", i, i * i);

        if (i % INTERVAL == 0) {
                printf("Press Enter to continue...");  
            do {
            } while (getchar() != '\n');
        }
    }
    return 0;
}
