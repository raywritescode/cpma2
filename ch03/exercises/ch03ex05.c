/* ch03ex05.c

  C programming: A Modern Approach, Second Edition
  Chapter 3. Page 49. Exercise 5

  Ray Santos
  July 27, 2015

  Suppose that we call scanf as follows:

    scanf("%f%d%f", &x, &i, &y);

  If the user enters

    12.3 45.6 789 

  what will be the values of x, i, and y after the call?

  (Assume that x and y are float variables and i is an int variable)

  My answer:
    1. Conversion specification %f: scanf reads character 1 and determines that 
       float can contain a 1, so it reads the next character 2, which floats
       can also contain. scanf reads the next character . and determines that floats 
       can contain a decimal. scanf then reads the next character 3 and determines that
       floats can contain it. The next character, a space character, is read by scanf and
       skipped. scanf determines that no other characters are to be assigned to the float.
       Because the conversion specification doesn't identify any formatting information for
       %f, five zeroes 0 are added after .3 to pad the decimals to the defaul six places. 
       The value of x is 12.300000 

    2. Conversion specification %d: scanf again reads the space character and ignores it.
       Next scanf reads the 4 and determines that it can be stored in an integer. scanf
       repeats the process with the next character read, which is 5. The next
       character, a decimal point, is read and scanf determines that the decimal point doesn't
       apply to the integer. scanf returns the decimal point to the input stream list. No other
       characters are read for %d.
       The value of i is 45

    3. Conversion specification %f: scanf reads the decimal point and determines that it can
       be put into the float. scanf reads the next character 6 and determines that floats can 
       contain the number, so the 6 is put into the float. scanf determines that whitespace 
       follows, which scanf ignores. scanf determines that no other characters are to be
       read into the %f. Because the conversion specification doesn't identify any formatting 
       information for %f, the number .6 is prefix with a 0 and five zeroes are added after
       the 6, which is how C stores floats by default.
       The value of y is 0.600000

    4. Because no more conversion specifiers are available, the number 789 is never read 
       into a scanf conversion specification.

    5. Final answer is:
         x = 12.300000
         i = 45
         y = 0.600000

*/

#include <stdio.h>

int main(void)
{
  float x, y;
  int i;

  printf("Enter the numbers 12.3, 45.6, and 789 (without the commas): ");
  scanf("%f%d%f", &x, &i, &y);

  printf("The numbers read using scanf(\"%%f%%d%%f\", &x, &i, &y) are:\n");
  printf("x = %f\n", x);
  printf("i = %d\n", i);
  printf("y = %f\n\n", y); 

  return 0;
}

/* Program Execution

$ gcc -Wall ch03ex05.c 
$ ./a.out
Enter the numbers 12.3, 45.6, and 789 (without the commas): 12.3 45.6 789
The numbers read using scanf("%f%d%f", &x, &i, &y) are:
x = 12.300000
i = 45
y = 0.600000

*/
