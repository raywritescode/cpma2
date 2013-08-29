/* c5p10.c

   Ray Santos
   August 28, 2013
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 10

   Using the switch statement, write a program that converts
   a numerical grade into a letter grade:

       Enter a numerical grade: 84
       Letter grade: B

   Use the following grading scale: A = 90-100, B = 80-89,
   C = 70-79, D = 60-69, F = 0-59. Hint: Break the grade
   into two digits, then use a switch statement to test
   the ten's digit.

*/

#include <stdio.h>

int main(void)
{
    int grade;

    printf("\nEnter a numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Numerical grade must be from 0 to 100\n\n");
        return 0;
    }

    grade = grade - (grade % 10);  

    printf("Letter grade: ");

    switch (grade) {
        case 100: case 90: 
                  printf("A");
                  break;
        case 80:  printf("B");
                  break;
        case 70:  printf("C");
                  break;
        case 60:  printf("D");
                  break;
        case 50: 
        case 40: 
        case 30:
        case 20: 
        case 10: 
        case 0:   printf("F");  /* Numerical grades 0 - 59 Fail */
                  break;
    }
   
    printf("\n\n");

    return 0;
} 
