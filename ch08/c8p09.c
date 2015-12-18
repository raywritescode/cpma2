/* c8p09.c

  C Programming: A Modern Approach, Second Edition
  Chapter 8, Programming Project 9, Page 179

  Write a program that generates a "random walk" across a 10x10 array.
  The array will contain characters (all '.' initially). The program
  must randomly "walk" from element to element, always going up, down,
  left, or right by one element. The elements visited by the program
  will be labeled with the letters A through Z, in the order visited.
  Here's an example of the desired output:

    A . . . . . . . . .
    B C D . . . . . . .
    . F E . . . . . . .
    H G . . . . . . . .
    I . . . . . . . . .
    J . . . . . . . Z .
    K . . R S T U V Y .
    L M P Q . . . W X .
    . N O . . . . . . .
    . . . . . . . . . .

  Hint: Use the srand and rand functions (see deal.c) to generate random
  numbers. After generating a number, look at its remainder when divided
  by 4. There are four possible values for the remainder (0, 1, 2, and 3)
  indicating the direction of the next move. Before performing a move,
  check that (a) it won't go outside the array, and (b) it doesn't take 
  us to an element that already has a letter assigned. If either condition
  is violated, try moving in another direction. If all four directions are
  blocked, the program must terminate. Here's an example of a premature
  termination:

    A B G H I . . . . .
    . C F . J K . . . .
    . D E . M L . . . .
    . . . . N O . . . .
    . . W X Y P Q . . .
    . . V U T S R . . .
    . . . . . . . . . .
    . . . . . . . . . .
    . . . . . . . . . .
    . . . . . . . . . .

  Y is blocked on all four sides, so there's no place to put Z.

  Ray Santos
  December 17, 2015

*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COL 10
#define ROW 10

int main(void)
{
   int col;
   int direction;
   int i;
   int j;
   int row;
   int timesBlocked = 0;

   char matrix[ROW][COL];
   char trappedLetter;

   _Bool isTrapped = false;

   // create a 10x10 matrix populated with the '.' (period) character.
   for (i = 0; i < ROW; i++) {
      for (j = 0; j < COL; j++) {
         matrix[i][j] = '.';
      }
   }

   // pick a random starting cell in the matrix
   srand((unsigned) time(NULL));
   row = rand() % ROW;
   col = rand() % COL;

   // put letter 'A' in the starting cell
   matrix[row][col] = 'A';

   // Repeat for letters 'B' to 'Z'
   for (i = 'B'; i <= 'Z'; i++) {

      // pick a random direction (0 = North, 1 = South, 2 = East, 3 = West)
      direction = ((rand() % ROW) % 4); 

      // put the letter in the adjoining cell of the given direction if the
      // cell is available (not out of bounds and not occupied by a letter). 
      switch(direction) {
         case 0: // North is the direction. 
            if ((row - 1  >= 0) && (matrix[row - 1][col] == '.')) {
               matrix[--row][col] = i; // North is open
               printf("North: %c North to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((row + 1 <= 9) && (matrix[row + 1][col] == '.')) {
               matrix[++row][col] = i; // South is open
               printf("North: %c South to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }
            
            if ((col + 1 <= 9) && (matrix[row][col + 1] == '.')) {
               matrix[row][++col] = i; // East is open
               printf("North: %c East to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((col - 1 >= 0) && (matrix[row][col - 1] == '.')) {
               matrix[row][--col] = i; // West is open
               printf("North: %c West to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            break;

         case 1: // South is the direction
            if ((row + 1 <= 9) && (matrix[row + 1][col] == '.')) {
               matrix[++row][col] = i; // South is open
               printf("South: %c South to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((row - 1  >= 0) && (matrix[row - 1][col] == '.')) {
               matrix[--row][col] = i; // North is open
               printf("South: %c North to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((col + 1 <= 9) && (matrix[row][col + 1] == '.')) {
               matrix[row][++col] = i; // East is open
               printf("South: %c East to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }
 
            if ((col - 1 >= 0) && (matrix[row][col - 1] == '.')) {
               matrix[row][--col] = i; // West is open
               printf("South: %c West to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }
 
            break;

         case 2: // East is the direction
            if ((col + 1 <= 9) && (matrix[row][col + 1] == '.')) {
               matrix[row][++col] = i; // East is open
               printf(" East: %c East to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }
 
            if ((col - 1 >= 0) && (matrix[row][col - 1] == '.')) {
               matrix[row][--col] = i; // West is open
               printf(" East: %c West to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((row - 1  >= 0) && (matrix[row - 1][col] == '.')) {
               matrix[--row][col] = i; // North is open
               printf(" East: %c North to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((row + 1 <= 9) && (matrix[row + 1][col] == '.')) {
               matrix[++row][col] = i; // South is open
               printf(" East: %c South to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }
 
            break;

         case 3: // West is the direction
            if ((col - 1 >= 0) && (matrix[row][col - 1] == '.')) {
               matrix[row][--col] = i; // West is open
               printf(" West: %c West to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((col + 1 <= 9) && (matrix[row][col + 1] == '.')) {
               matrix[row][++col] = i; // East is open
               printf(" West: %c East to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((row - 1  >= 0) && (matrix[row - 1][col] == '.')) {
               matrix[--row][col] = i; // North is open
               printf(" West: %c North to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }

            if ((row + 1 <= 9) && (matrix[row + 1][col] == '.')) {
               matrix[++row][col] = i; // South is open
               printf(" West: %c South to %c\n", i - 1, i);
               break;
            } else {
               timesBlocked++;
            }
 
            break;

      } // end switch

      if (timesBlocked == 4) {  // letter is blocked on all four sides
         isTrapped = true;
         trappedLetter = --i;
         break;                 // exit the for loop
      } 

      timesBlocked = 0;         // letter found a home. Clear the counter for next letter.

   } // end for

   // display the 10x10 matrix
   printf("\n");

   for (i = 0; i < ROW; i++) {
      for (j = 0; j < COL; j++) {
         printf("%c ", matrix[i][j]);
      }
      printf("\n");
   }

   if (isTrapped)
      printf("\nThe letter %c got trapped!\n", trappedLetter);
   else
      printf("\nCompleted 'A' through 'Z'\n");

   return 0;
}

/* Example runs

$ gcc -Wall c8p09.c 
$ ./a.out
North: A North to B
South: B North to C
North: C North to D
North: D North to E
 East: E East to F
 West: F East to G
North: G North to H
South: H East to I
South: I South to J
 West: J East to K
North: K North to L
South: L East to M
 West: M East to N
 East: N East to O
 East: O East to P
 East: P South to Q
 West: Q West to R
North: R South to S
 East: S East to T
North: T South to U
South: U South to V
North: V South to W
 East: W West to X
North: X North to Y
South: Y North to Z

. . . H I L M N O P 
. E F G J K . . R Q 
. D . . . . . . S T 
. C . . . . . . Z U 
. B . . . . . . Y V 
. A . . . . . . X W 
. . . . . . . . . . 
. . . . . . . . . . 
. . . . . . . . . . 
. . . . . . . . . . 

Completed 'A' through 'Z'
$ 
$ ./a.out
North: A North to B
 East: B East to C
 East: C East to D
South: D South to E
South: E South to F
 West: F West to G
North: G North to H

. . . . . . . . . . 
. . . . B C D . . . 
. . . . A H E . . . 
. . . . . G F . . . 
. . . . . . . . . . 
. . . . . . . . . . 
. . . . . . . . . . 
. . . . . . . . . . 
. . . . . . . . . . 
. . . . . . . . . . 

The letter H got trapped!
$ 

*/
