/* c5p3.c

   Ray Santos
   August 27, 2013
   
   C Programming: A Modern Approach, Second Edition
   Chapter 5, Programming Project 3

   Modify the broker.c program of Section 5.2 by making
   both of the following changes:

   a. Ask the user to enter the number of shares and the
      price per share, instead of the value of the trade.

   b. Add statements that compute the commission charged by
      a rival broker ($33 plus 3 cents per share for fewer
      than 2000 shares; $33 plus 2 cents per share for 2000
      shares or more. Display the rival's commission as well
      as the commission charged by the original broker.

*/

#include <stdio.h>

int main(void)
{
    float shares, price, value, commission, rival_commission;

    printf("\nEnter the number of shares: ");
    scanf("%f", &shares);
   
    printf("Enter price per share: ");
    scanf("%f", &price);

    value = shares * price;

    /* Original broker's commission */
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

    if (commission < 39.00f)
        commission = 39.00f;

    printf("\nOriginal broker's commission: $%.2f\n", commission);

    /* Rival broker's commission */
    if (shares < 2000.00f)  
        rival_commission = 33.00f + shares * .03f;
     else
        rival_commission = 33.00f + shares * .02f;

    printf("Rival broker's commission: $%.2f\n\n", rival_commission);

    return 0;
}
