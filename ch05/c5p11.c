/* c5p11.c

   Ray Santos
   August 28, 2013
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 11

   Write a program that asks the user for a two-digit number, then
   prints the English word for the number:

       Enter a two-digit number: 45
       You entered the number forty-five.

   Hint: Break the number into two digits. Use one switch statement
   to print the word for the first digit. Use a second switch statement
   to print the word for the second digit. Don't forget that the numbers
   between 11 and 19 require special treatment.

*/

#include <stdio.h>

int main(void)
{
    int number, d1, d2;

    printf("\nEnter a two-digit number: ");
    scanf("%d", &number);

    if (number < 10 || number > 99) {
        printf("The number did not contain two digits\n\n");
        return 0;
    }

    d1 = number - (number % 10);
    d2 = number % 10;

    printf("You entered the number ");

    if (d1 == 10) {
        switch (d2) {
            case 0: printf("ten");
                    break;
            case 1: printf("eleven");
                    break;
            case 2: printf("twelve");
                    break;
            case 3: printf("thirteen");
                    break;
            case 4: printf("fourteen");
                    break;
            case 5: printf("fifteen");
                    break;
            case 6: printf("sixteen");
                    break;
            case 7: printf("seventeen");
                    break;
            case 8: printf("eighteen");
                    break;
            case 9: printf("nineteen");
                    break;
        }
        printf(".\n\n");
        return 0;
    }

    switch (d1) {
        case 20: printf("twenty");
                 break;
        case 30: printf("thirty");
                 break;
        case 40: printf("forty");
                 break;
        case 50: printf("fifty");
                 break;
        case 60: printf("sixty");
                 break;
        case 70: printf("seventy");
                 break;
        case 80: printf("eighty");
                 break;
        case 90: printf("ninety");
                 break;
    }

    switch (d2) {
        case 1: printf("-one");
                break;
        case 2: printf("-two");
                break;
        case 3: printf("-three");
                break;
        case 4: printf("-four");
                break;
        case 5: printf("-five");
                break;
        case 6: printf("-six");
                break;
        case 7: printf("-seven");
                break;
        case 9: printf("-nine");
                break;
    }

    printf(".\n\n");

    return 0;
}
