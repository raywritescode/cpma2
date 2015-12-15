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

#define COLUMN 10
#define ROW 10

int main(void)
{
   int blocked_by_letter = 0;
   int blocked_by_border = 0;
   int column;
   int i; // counter
   int j; // counter
   int next_move;
   int row;
  
   char matrix[ROW][COLUMN];

   srand((unsigned) time(NULL));

   // create the 10x10 array of the '.' character
   for (i = 0; i < ROW; i++ ) {
      for (j = 0; j < COLUMN; j++) {
         matrix[i][j] = '.';
      }
   }

   // choose a random array element starting point
   row = rand() % ROW;                      // picks a random row
   column = rand() % COLUMN;                // picks a random column

   // for the letters A through Z   
   for (i = 'A'; i <= 'Z'; i++) {

      if (matrix[row][column] == '.') {        // element is a '.' so replace it with the letter
         matrix[row][column] = i;
      } else {
         // choose a new array element one direction (north, south, east, or west)
         switch (next_move = (rand() % ROW) % 4) {
            case 0:
               printf("0 (North) is the direction\n");
               matrix[row--][column]; // move one element north
               break;
            case 1:
               printf("1 (South) is the direction\n");
               matrix[row++][column];   // move one element south
               break;
            case 2:
               printf("2 (East) is the direction\n");
               matrix[row][column++];   // move one element east
               break;
            case 3:
               printf("3 (West) is the direction\n");
               matrix[row][column--];   // move one element west
               break;
            default:
               printf("%d (other) is the direction\n", next_move);
               break;
         }
         // if the new array element is out of bounds or already contains a letter
         if (row < 0) {                      // out of bounds
            printf("row is < 0: %d\n", row);
            row++;
            blocked_by_border++;
         } else if (row > 9) {               // out of bounds
            row--;
            blocked_by_border++;
         } else if (column < 0) {            // out of bounds
            column++;
            blocked_by_border++;
         } else if (column > 9) {            // out of bounds
            column--;
            blocked_by_border++;
         } else if (matrix[row][column] != '.') {  // already contains a letter
            blocked_by_letter++;
         } else {
             matrix[row][column] = i; // new array element is available to use
             continue;
         }
         // if there are no more array elements to go to
         if (blocked_by_letter >= 4 || (blocked_by_letter >= 3 && blocked_by_border >= 1)) {
            // terminate the program (all four directions are blocked)
            exit;
         }
         i--;                  // return to the original letter on next loop 
      }
   }

   // display the contents of the 10x10 array
   printf("\n");

   for (i = 0; i < ROW; i++) {
      for (j = 0; j < COLUMN; j++) {
         printf("%c ", matrix[i][j]);
      }   
      printf("\n");
   }   

   return 0;
}
