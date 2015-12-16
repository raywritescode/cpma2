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
   _Bool isBlocked = false;
   _Bool isEastBlocked = false;
   _Bool isNorthBlocked = false;
   _Bool isSouthBlocked = false;
   _Bool isWestBlocked = false;

   int column;
   int direction;
   int i; // counter
   int j; // counter
   int row;
  
   char matrix[ROW][COLUMN];

   srand((unsigned) time(NULL));

   // create the 10x10 matrix
   for (i = 0; i < ROW; i++ ) {
      for (j = 0; j < COLUMN; j++) {
         matrix[i][j] = '.';
      }
   }

   // select a random starting cell
   row = rand() % ROW;                      // picks a random row
   column = rand() % COLUMN;                // picks a random column

   // put letter A in a matrix element
   matrix[row][column] = 'A';

   // for the letters B through Z   
   for (i = 'B'; i <= 'Z'; i++) {
      printf("Current letter is: %c ", i);

      // pick a N, S, E, W direction
      switch (direction = (rand() % ROW) % 4) {
         case 0:
            printf("0 (North) is the direction\n");
            if (row-- < 0) {
               row++;
               isNorthBlocked = true;
            } 
            isBlocked = isNorthBlocked;
            break;
         case 1:
            printf("1 (South) is the direction\n");
            if (row++ > 9) {
               row--;
               isSouthBlocked = true;
            }
            isBlocked = isSouthBlocked;
            break;
         case 2:
            printf("2 (East) is the direction\n");
            if (column++ > 9) {
               column--;
               isEastBlocked = true;
            }
            isBlocked = isEastBlocked;
            break;
         case 3:
            printf("3 (West) is the direction\n");
            if (column-- < 0) {
               column++;
               isWestBlocked = true;
            }
            isBlocked = isWestBlocked;
            break;
      } // end switch

      // check if the new direction is not blocked
      if (!isBlocked) {                       // new direction is not blocked

         // the new cell is open
         if (matrix[row][column] == '.') {        
            matrix[row][column] = i;          // put the current letter in the cell  

            // set the N, S, E, W blocked statuses to false
            isNorthBlocked = false;
            isSouthBlocked = false;
            isEastBlocked = false;
            isWestBlocked = false;
            
            // continue to next letter
            continue;
         }

         // if the new cell already has a letter
         if (matrix[row][column] != '.') {
            // mark the direction as blocked
            switch (direction) {
               case 0:
              //    row++;
                  isNorthBlocked = true;
                  i--;
                  break;
               case 1:
              //    row--;
                  isSouthBlocked = true;
                  i--;
                  break;
               case 2:
              //    column--;
                  isEastBlocked = true;
                  i--;
                  break;
               case 3:
              //    column++;
                  isWestBlocked = true;
                  i--;
                  break;
            } // end switch
         }
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


/* 15Dec2015 - New pseudocode algorithm

create the 10x10 matrix
select a random starting cell
put letter A in the starting cell

for letters B through Z
   pick a N, S, E, W direction
   if the new direction is not blocked
      if the new cell is open
         put the current letter in the cell
         continue to the next letter
      if the new cell is out of bounds
         mark the direction as blocked
         return to the previous cell
         continue to the next letter
      if the new cell already has a letter
         mark the direction as blocked
         return to the previous cell 
         continue to the next letter
   if the new direction is blocked
      if the N, S, E, W directions are blocked
         break out of the for loop
      otherwise
         continue to the next letter

display the 10x10 matrix
end the program

NOTE: come up with this at 1:40 AM

*/
