/* dweight2.c

   Computes the dimensional weight of a
   box from input provided by the user.

   C programming: A Modern Approach, Second Edition
   Chapter 2. Page 23

   Ray Santos
   June 18, 2015

*/

#include <stdio.h>

int main(void)
{
  int height, length, width, volume, weight;

  printf("Enter height of box: ");
  scanf("%d", &height);

  printf("Enter length of box: ");
  scanf("%d", &length);

  printf("Enter width of box: ");
  scanf("%d", &width);

  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  return 0;
}

/* Test run

Enter height of box: 8
Enter length of box: 12
Enter width of box: 10
Volume (cubic inches): 960
Dimensional weight (pounds): 6

*/
