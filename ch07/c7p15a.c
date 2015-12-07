/* c7p15a.c

   C Programming: A Modern Approach, Second Edition
   Chapter 7, Programming Project 15a
   
   Write a program that computes the factorial of a positive integer:

      Enter a positive integer: 6
      Factorial of 6: 720

   Use a short variable to store the value of the factorial. What is
   the largest value of n for which the program correctly prints
   the factorial?

   Ray Santos
   December 6, 2015

*/

#include <stdio.h>
#include <limits.h>

#define largest SHRT_MAX // largest value a short int can hold. From limits.h

int main(void)
{
   int i, j, n;
   short factorial;

   printf("Enter a positive integer: ");
   scanf("%d", &n);
   factorial = 1;

   for (i = 1; i <= n; i++) {
      if ((factorial *= (n - (n - i))) < 0)
         break;
      else
         printf("n = %d\tn! = %d\n", i, factorial);
   }

   if (factorial < 0) {
         n = i - 1;
         factorial = 1;
         for (j = 1; j <= n; j++) {
            factorial *= (n - (n - j)); 
         }
      printf("\nLargest value of n for which this program prints\n");
      printf("the correct factorial for a short int is:\n");
      printf("n = %d\tn! = %d\n", n, factorial); 
   } else 
      printf("\nFactorial of %d is: %d\n", n, factorial);  

   printf("\nThe largest value a short int can hold on this machine is %d\n\n", largest);
   
return 0;
}

/* Example runs

$ gcc -Wall c7p15a.c 
$ ./a.out
Enter a positive integer: 0

Factorial of 0 is: 1

The largest value a short int can hold on this machine is 32767

$ ./a.out
Enter a positive integer: 1
n = 1	n! = 1

Factorial of 1 is: 1

The largest value a short int can hold on this machine is 32767

$ ./a.out
Enter a positive integer: 6
n = 1	n! = 1
n = 2	n! = 2
n = 3	n! = 6
n = 4	n! = 24
n = 5	n! = 120
n = 6	n! = 720

Factorial of 6 is: 720

The largest value a short int can hold on this machine is 32767

$ ./a.out
Enter a positive integer: 10
n = 1	n! = 1
n = 2	n! = 2
n = 3	n! = 6
n = 4	n! = 24
n = 5	n! = 120
n = 6	n! = 720
n = 7	n! = 5040

Largest value of n for which this program prints
the correct factorial for a short int is:
n = 7	n! = 5040

The largest value a short int can hold on this machine is 32767

$ 

*/
