/* ch03pp05.c

  C programming: A Modern Approach, Second Edition
  Chapter 3. Page 50. Programming Project 5

  Ray Santos
  August 4, 2015

  Write a program that asks the user to enter the numbers from 1 to 16 (in any order)
  and then displays the numbers in a 4 by 4 arrangement, followed by the sums
  of the rows, columns, and diagonals:

    Enter the numbers from 1 to 16 in any order:
    16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

    16  3  2 13
     5 10 11  8
     9  6  7 12
     4 15 14  1

    Row sums: 34 34 34 34
    Column sums: 34 34 34 34
    Diagonal sums: 34 34

  If the row, column, and diagonal sums are all the same (as they are in this example),
  the numbers are said to form a "magic square". The magic square shown here appears in
  a 1514 engraving by artist and mathematician Albrecht Durer. (Note that the middle
  numbers in the last row give the date of the engraving).

*/

#include <stdio.h>

int main(void)
{
  int d1, d2, d3, d4;
  int d5, d6, d7, d8;
  int d9, d10, d11, d12;
  int d13, d14, d15, d16;
  int row1, row2, row3, row4;
  int col1, col2, col3, col4;
  int diag1, diag2;

  printf("\nEnter the numbers from 1 to 16 in any order:\n");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
         &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, 
         &d9, &d10, &d11, &d12, &d13, &d14, &d15, &d16);

  row1 = d1 + d2 + d3 + d4;
  row2 = d5 + d6 + d7 + d8;
  row3 = d9 + d10 + d11 + d12;
  row4 = d13 + d14 + d15 + d16;

  col1 = d1 + d5 + d9 + d13;
  col2 = d2 + d6 + d10 + d14;
  col3 = d3 + d7 + d11 + d15;
  col4 = d4 + d8 + d12 + d16;

  diag1 = d1 + d6 + d11 + d16;
  diag2 = d4 + d7 + d10 + d13;

  printf("\n%2d%3d%3d%3d\n", d1, d2, d3, d4);
  printf("%2d%3d%3d%3d\n", d5, d6, d7, d8);
  printf("%2d%3d%3d%3d\n", d9, d10, d11, d12);
  printf("%2d%3d%3d%3d\n", d13, d14, d15, d16);  

  printf("\nRow sums: %d %d %d %d\n", row1, row2, row3, row4);
  printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4); 
  printf("Diagonal sums: %d %d\n", diag1, diag2);     

  return 0;
}

/* Program Execution

$ gcc -Wall ch03pp05.c 
$ ./a.out

Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16  3  2 13
 5 10 11  8
 9  6  7 12
 4 15 14  1

Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34

$ ./a.out

Enter the numbers from 1 to 16 in any order:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16

 1  2  3  4
 5  6  7  8
 9 10 11 12
13 14 15 16

Row sums: 10 26 42 58
Column sums: 28 32 36 40
Diagonal sums: 34 34

$ ./a.out

Enter the numbers from 1 to 16 in any order:
1 3 5 7 9 11 13 15 2 4 6 8 10 12 14 16

 1  3  5  7
 9 11 13 15
 2  4  6  8
10 12 14 16

Row sums: 16 48 20 52
Column sums: 22 30 38 46
Diagonal sums: 34 34

*/
