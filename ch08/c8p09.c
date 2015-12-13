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
   bool is_blocked;
   bool is_outside;
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

   // print the 10x10 matrix - NOTE: A visual check only to see the populated matrix
   for (i = 0; i < ROW; i++) {
      for (j = 0; j < COLUMN; j++) {
         printf("%c ", matrix[i][j]);
      }
      printf("\n");
   }

   // choose a random starting array element
   row = rand() % ROW;        // picks a random row
   column = rand() % COLUMN;  // picks a random column

   // for the letters A through Z - NOTE: Printing A through Z for now   
   for (i = 'A'; i <= 'Z'; i++) {
      printf("%c ", i);
   }
   printf("\n");

/*
         if the array element is a '.' character
            replace the '.' character with the letter
            choose a new array element
            continue to the next letter
         otherwise
            choose a new array element one direction (north, south, east, or west)
            if the new array element contains a letter or is out of bounds
               continue out of the loop (to choose a new array element one direction) 
            if there are no more array elements to go to
               break out of the loop (all four directions are blocked)       
            otherwise
               replace the '.' character with the letter

      display the contents of the 10x10 array
               
*/
   return 0;
}
