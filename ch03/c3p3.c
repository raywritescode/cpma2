/* c3p3.c

   Ray Santos
   August 20, 2013

   C Programming: A Modern Approach, Second Edition
   Chapter 3, Programming Project 3

   Books are identified by an International Standard Book Number
   (ISBN). ISBNs assigned after January 1, 2007 contain 13 digits
   arrange in five groups (Older ISBNs use 10 digits). 
  
   Write a program that breaks down the International Standard
   Book Number (ISBN) entered by a user:

       Enter ISBN: 978-0-939-97950-3
       GS1 prefix: 978
       Group identifier: 0
       Publisher code: 393
       Item number: 97950
       Check digit: 3

   Note: The number of digits in each group may vary; you can't
   assume that the groups have the lengths shown in this example.
   Test your program with actual ISBN values (usually found on the
   back cover of a book and on the copyright page).

   [rsantos] Tested with the following ISBNs
      978-0-7356-1967-8    Code Complete, 2nd Edition
      978-1-934356-34-0    The Passionate Programmer
      0-8053-7565-1        Practical Guide to the Unix System

*/

#include <stdio.h>

int main(void)
{
    int gs1_prefix, group_id, pub_code, item_num;
    int check_digit = 0;  /* Assigned 0 in case the ISBN is a 10-digit without the check digit */

    printf("\nEnter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_id, &pub_code, &item_num, &check_digit);

    printf("GS1 prefix: %d\n", gs1_prefix);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", pub_code);
    printf("Item number: %d\n", item_num);
    printf("Check digit: %d\n\n", check_digit);

    return 0;
}
