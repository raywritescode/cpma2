/* ch03pp02.c

  C programming: A Modern Approach, Second Edition
  Chapter 3. Page 50. Programming Project 02

  Ray Santos
  July 29, 2015

  Write a program that format product information entered by the user.
  A session with the program should look like this:

    Enter item number: 583
    Enter unit price: 13.5
    Enter purchase date (mm/dd/yyyy): 10/24/2010

    Item            Unit            Purchase
                    Price           Date
    583             $  13.50        10/24/2010

  The item number and date should be left justified; the unit price
  should be right justified. Allow dollar amounts up to $9999.99.
  Hint: Use tabs to line up the columns.

*/

#include <stdio.h>

int main(void)
{
  int item_number;
  int month, day, year;
  float unit_price;

  printf("\nEnter item number: ");
  scanf("%d", &item_number);

  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
  printf("%-d\t\t$%7.2f\t%-.2d/%.2d/%d\n", item_number, unit_price, month, day, year);

  return 0;
}

/* Program Execution

$ gcc -Wall ch03pp02.c 
$ ./a.out

Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010

Item		Unit		Purchase
		Price		Date
583		$  13.50	10/24/2010

$ ./a.out

Enter item number: 001
Enter unit price: 9999.99
Enter purchase date (mm/dd/yyyy): 1/1/2015

Item		Unit		Purchase
		Price		Date
1		$9999.99	01/01/2015
 
*/
