/* ch02ex10.c

  C programming: A Modern Approach, Second Edition
  Chapter 2. Page 34. Exercise 10

  Ray Santos
  June 21, 2015

  Q: In the dweight.c program (Section 2.4), which spaces
     are essential?

 11 #include <stdio.h>
 12 
 13 int main(void)
 14 {
 15   int height, length, width, volume, weight;
 16 
 17   height = 8;
 18   length = 12;
 19   width = 10;
 20   volume = height * length * width;
 21   weight = (volume + 165) / 166;
 22 
 23   printf("Dimensions: %dx%dx%d\n", length, width, height);
 24   printf("Volume (cubic inches): %d\n", volume);
 25   printf("Dimensional weight (pounds): %d\n", weight);
 26 
 27   return 0;
 28 }

  A: line 13, between int and main
     line 15, between int and height
     line 27, between return and 0

*/
