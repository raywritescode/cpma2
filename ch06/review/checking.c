/* checking.c

   Book example demonstrating exiting from a loop.

   Balances a checkbook.

   C Programming: A Modern Approach, Second Edition
   Chapter 6, Page 115

   Ray Santos
   December 3, 2015

*/

#include <stdio.h>

int main(void)
{
   int cmd;
   float balance = 0.0f, credit, debit;

   printf("*** RAY checkbook-balance program ***\n");
   printf("Commands: 0=clear, 1=credit, 2=debit, ");
   printf("3=balance, 4=exit\n\n");

   for ( ; ; ) {
      printf("Enter command: ");
      scanf("%d", &cmd);
      switch (cmd) {
         case 0:
            balance = 0.0f;
            break;
         case 1:
            printf("Enter amount of credit: ");
            scanf("%f", &credit);
            balance += credit;
            break;
         case 2:
            printf("Enter amount of debit: ");
            scanf("%f", &debit);
            balance -= debit;
            break;
         case 3:
            printf("Current balance: $%.2f\n", balance);
            break;
         case 4:
            return 0;
         default:
            printf("Commands: 0=clear, 1=credit, 2=debit, ");
            printf("3=balance, 4=exit\n\n");
            break;
      }
   }  
}

/* Example run

$ gcc -Wall checking.c 
$ ./a.out
*** RAY checkbook-balance program ***
Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit

Enter command: 1
Enter amount of credit: 1042.56
Enter command: 2
Enter amount of debit: 133.79
Enter command: 1
Enter amount of credit: 1754.32
Enter command: 2
Enter amount of debit: 1400
Enter command: 2
Enter amount of debit: 68
Enter command: 2
Enter amount of debit: 50
Enter command: 3
Current balance: $1145.09
Enter command: 4
$ 

*/
