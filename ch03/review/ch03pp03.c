/* ch03pp03.c

  C programming: A Modern Approach, Second Edition
  Chapter 3. Page 50. Programming Project 3

  Ray Santos
  July 30, 2015

  Books are identified by an International Standard Book Number (ISBN). ISBNs
  assigned after Januar 1, 2007 contain 13 digits in five groups, such as
  978-0-393-97950-3. (Older ISBNs are 10 digits).

  The first group (the GS1 prefix) is currently either 978 or 979.

  The group identifier specifies the language or country of origin
  (for example, 0 and 1 are used in English-speaking countries).

  The publisher code identifies the publisher (939 is the code for W.W. Norton).

  The item number is assigned by the publisher to identify a specific book
  (97950 is the code for this book).

  An ISBN ends with a check digit that's used to verify the accuracy of the
  preceeding digits.

  Write a program that breaks down an ISBN entered by the user:

    Enter ISBN: 978-0-393-9750-3
    GS1 prefix: 978
    Group identifier: 0
    Publisher code: 393
    Item number: 97950
    Check digit: 3

  Note: The number of digits in each group may vary; you can't assume that groups
  have the lengths shown in this example. Test your program with actual ISBN values
  (usually found on the back cover of a book and on the copyright page).

*/

#include <stdio.h>

int main(void)
{
  int gs1, group, pub, item, check;

  printf("\nEnter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gs1, &group, &pub, &item, &check);
 
  printf("GS1 prefix: %d\n", gs1);
  printf("Group identifier: %d\n", group);
  printf("Publisher code: %d\n", pub);
  printf("Item number: %d\n", item);
  printf("Check digit: %d\n\n", check);

  return 0;
}

/* Program Execution

$ gcc -Wall ch03pp03.c 
$ ./a.out

Enter ISBN: 978-0-393-97950-3
GS1 prefix: 978
Group identifier: 0
Publisher code: 393
Item number: 97950
Check digit: 3

$ ./a.out

Enter ISBN: 0-8050-7456-2                                  
GS1 prefix: 0
Group identifier: 8050
Publisher code: 7456
Item number: 2
Check digit: 66796

*/
