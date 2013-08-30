/* c6p04.c

   Ray Santos
   August 29, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Programming Project 4

   Add a loop to the broker.c program of Section 5.2 so
   that the user can enter more than one trade and the
   program will calculate the commission on each. The program
   should terminate when the user enters 0 as the trade value:

       Enter value of trade: 30000
       Commission: $166.00

       Enter value of trade: 20000
       Commission: $144.00

       Enter value of trade: 0

   [rsantos] Modified the user's prompt to provide
   instructions on how to exit the program.

*/

#include <stdio.h>

int main(void)
{
    float commission, value;

    printf("Enter value of trade (0 to exit): ");
    scanf("%f", &value);

    if (value == 0)
       return 0;
    else {
        do {
            if (value < 2500.00f)
                commission = 30.00f + .017f * value;
            else if (value < 6250.00f)
                commission = 56.00f + .0066f * value;
            else if (value < 20000.00f)
                commission = 76.00f + .0034f * value;
            else if (value < 50000.00f)
                commission = 100.00f + .0022f * value;
            else if (value < 500000.00f)
                commission = 155.00f + .0011f * value;
            else
                commission = 255.00f + .0009f * value;

            if (commission < 39.00f)
                commission = 39.00f;

            printf("Commission: $%.2f\n", commission);

            printf("\nEnter value of trade (0 to exit): ");
            scanf("%f", &value);
        
        } while (value != 0);
    }

    return 0;
}
