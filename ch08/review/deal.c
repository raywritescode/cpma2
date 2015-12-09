/* deal.c

   Book example using two-dimensional arrays and constant arrays.

   Deals a random hand of cards.

   C Programming: A Modern Approach, Second Edition
   Chapter 8, Page 173

   Ray Santos
   December 8, 2015

   Observation: without the inner set of braces around {false} on line XX,
      the gcc compiler with the -Wall option used to compile this program
      returns the following error, though the program still compiles:
         $ gcc -Wall deal.c
         deal.c: In function ‘main’:
         deal.c:32:4: warning: missing braces around initializer [-Wmissing-braces]
         deal.c:32:4: warning: (near initialization for ‘in_hand[0]’) [-Wmissing-braces]
*/

#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
   bool in_hand[NUM_SUITS][NUM_RANKS] = {{false}};  /* refer to the warning at the bottom of page 171 of book */
   int num_cards, rank, suit;
   const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8',
                             '9', 't', 'j', 'q', 'k', 'a'};
   const char suit_code[] = {'c', 'd', 'h', 's'};

   srand((unsigned) time(NULL));

   printf("Enter number of cards in hand: ");
   scanf("%d", &num_cards);

   printf("Your hand:");
   
   while(num_cards > 0) {
      suit = rand() % NUM_SUITS;     /* picks a random suit */
      rank = rand() % NUM_RANKS;     /* picks a random rank */
      if (!in_hand[suit][rank]) {
         in_hand[suit][rank] = true;
         num_cards--;
         printf(" %c%c", rank_code[rank], suit_code[suit]);
      }
   }
   printf("\n");

   return 0;
}

/* Example runs

$ gcc -Wall deal.c
$ ./a.out
Enter number of cards in hand: 5
Your hand: 7h 4s 8d ks 8c
$ ./a.out
Enter number of cards in hand: 14
Your hand: td 8h 5d 3d 2h 4d 5s as 4h 4c 6d 3s kc th
$ ./a.out
Enter number of cards in hand: 1
Your hand: 9c
$ 

*/
