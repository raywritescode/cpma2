/* ch03pp04.c

  C programming: A Modern Approach, Second Edition
  Chapter 3. Page 50. Programming Project 4

  Ray Santos
  July 30, 2015

  Write a program that prompts the user to enter a telephone number
  in the form (xxx) xxx-xxx and then displays the number in the
  form xxx.xxx.xxxx:

    Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
    You entered 404.817.6900

*/

#include <stdio.h>

int main(void)
{
  int area_code, prefix, line_number;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &area_code, &prefix, &line_number);

  printf("You entered %d.%d.%d\n\n", area_code, prefix, line_number); 

  return 0;
}

/* Program Execution

$ gcc -Wall ch03pp04.c 
$ ./a.out
Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
You entered 404.817.6900

$ ./a.out
Enter phone number [(xxx) xxx-xxxx]: (555) 867-5309
You entered 555.867.5309

$ ./a.out
Enter phone number [(xxx) xxx-xxxx]: (555) 777-9311
You entered 555.777.9311

*/
