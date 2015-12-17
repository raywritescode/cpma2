/* c8p09.c

  C Programming: A Modern Approach, Second Edition
  Chapter 8, Programming Project 9, Page 179

  Write a program that generates a "random walk" across a 10x10 array.
  The array will contain characters (all '.' initially). The program
  must randomly "walk" from element to element, always going up, down,
  left, or right by one element. The elements visisted by the program
  will be labeled with the letters A through Z, in the order visisted.
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
  December 10, 2015

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
      printf("Letter is: %c\n", i); 

      // pick a random direction (0 = North, 1 = South, 2 = East, 3 = West)
      direction = ((rand() % ROW) % 4); 
      printf("   Direction is: %d\n", direction);

      // put the letter in the adjoining cell of the given direction if the
      // cell is available (not out of bounds and not occupied by a letter). 
      switch(direction) {
         case 0: // north
            if ((row - 1  >= 0) && (matrix[row - 1][col] == '.')) {
               matrix[--row][col] = i;
               break;
            }
            i--;
            break;
         case 1: // south
            if ((row + 1 <= 9) && (matrix[row + 1][col] == '.')) {
               matrix[++row][col] = i;
               break;
            }
            i--;
            break;
         case 2: // east
            if ((col + 1 <= 9) && (matrix[row][col + 1] == '.')) {
               matrix[row][++col] = i;
               break;
            }
            i--;
            break;
         case 3: // west
            if ((col - 1 >= 0) && (matrix[row][col - 1] == '.')) {
               matrix[row][--col] = i;
               break;
            }
            i--;
            break;
      } // end switch
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
