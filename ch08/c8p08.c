/* c8p08.c

  C Programming: A Modern Approach, Second Edition
  Chapter 8, Programming Project 8

  Modify Programming Project 7 so that it prompts for five quiz grades
  for each of five students, then computes the total score and average
  score for each student, and the average score, high score, and low
  score for each quiz.

  Ray Santos
  December 10, 2015

  [rsantos] Here's how I envision the running program:

     How many students? 5
     How many quizzes? 5

     Student 1
        Enter score for Quiz 1: 1
        Enter score for Quiz 2: 2
        Enter score for Quiz 3: 3
        Enter score for Quiz 4: 4
        Enter score for Quiz 5: 5

     Student 2
        Enter score for Quiz 1: 2
        Enter score for Quiz 2: 3
        Enter score for Quiz 3: 4
        Enter score for Quiz 4: 5
        Enter score for Quiz 5: 6

     Student 3
        Enter score for Quiz 1: 3
        Enter score for Quiz 2: 4
        Enter score for Quiz 3: 5
        Enter score for Quiz 4: 6
        Enter score for Quiz 5: 7

     Student 4
        Enter score for Quiz 1: 4
        Enter score for Quiz 2: 5
        Enter score for Quiz 3: 6
        Enter score for Quiz 4: 7
        Enter score for Quiz 5: 8

     Student 5
        Enter score for Quiz 1: 5
        Enter score for Quiz 2: 6
        Enter score for Quiz 3: 7
        Enter score for Quiz 4: 8
        Enter score for Quiz 5: 9

     ======= Quiz Results =======

     Student 1
         Total score: 15
       Average score: 3

     Student 2
         Total score: 20
       Average score: 4

     Student 3
         Total score: 25
       Average score: 5

     Student 4
         Total score: 30
       Average score: 6

     Student 5
         Total score: 35
       Average score: 7
 
     ---------------------------

     Quiz 1
       Average score: 3 
          High score: 5
           Low score: 1

     Quiz 2
       Average score: 4
          High score: 6
           Low score: 2

     Quiz 3
       Average score: 5
          High score: 7
           Low score: 3

     Quiz 4
       Average score: 6
          High score: 8
           Low score: 4

     Quiz 5
       Average score: 7
          High score: 9
           Low score: 5

*/

#include <stdio.h>

int main(void) {

   float high_score;
   float low_score;
   float total_score;
   int i; // counter
   int j; // counter
   int number_of_quizzes;
   int number_of_students;

   printf("How many students? ");
   scanf("%d", &number_of_students);

   printf("How many quizzes? ");
   scanf("%d", &number_of_quizzes);

   float student_quiz[number_of_students][number_of_quizzes];

   // Get quiz scores for each student
   for (i = 0; i < number_of_students; i++) {
      printf("\nStudent %d\n", i + 1);
      for (j = 0; j < number_of_quizzes; j++) {
         printf("   Enter score for Quiz %d: ", j + 1);
         scanf("%f", &student_quiz[i][j]);
      }    
   } 

   printf("\n======= Quiz Results =======\n\n");
  
   // Print the quiz results for each student
   for (i = 0; i < number_of_students; i++) {
      total_score = 0;
      
      printf("Student %d\n", i + 1);

      for (j = 0; j < number_of_quizzes; j++) {
         total_score += student_quiz[i][j];
      }
      printf("    Total score: %.2f\n", total_score);
      printf("  Average score: %.2f\n\n", (float)(total_score / number_of_quizzes));
   }

   printf("-----------------------------\n\n");

   // Print the average, high, and low scores for each quiz
 
   for (i = 0; i < number_of_quizzes; i++) {
      high_score = 0;
      low_score = 100;
      total_score = 0;

      printf("Quiz %d\n", i + 1);

      for (j = 0; j < number_of_students; j++) {

         if (high_score < student_quiz[j][i])
            high_score = student_quiz[j][i];

         if (low_score > student_quiz[j][i])
            low_score = student_quiz[j][i];

         total_score += student_quiz[j][i];
      }
      printf("  Average score: %.2f\n", (float)(total_score / number_of_students));
      printf("     High score: %.2f\n", high_score);
      printf("      Low score: %.2f\n\n", low_score); 
   }
 
   return 0;
}

/* Example runs

$ gcc -Wall c8p08.c 
$ ./a.out
How many students? 5
How many quizzes? 5

Student 1
   Enter score for Quiz 1: 1
   Enter score for Quiz 2: 2
   Enter score for Quiz 3: 3
   Enter score for Quiz 4: 4
   Enter score for Quiz 5: 5

Student 2
   Enter score for Quiz 1: 2
   Enter score for Quiz 2: 3
   Enter score for Quiz 3: 4
   Enter score for Quiz 4: 5
   Enter score for Quiz 5: 6

Student 3
   Enter score for Quiz 1: 3
   Enter score for Quiz 2: 4
   Enter score for Quiz 3: 5
   Enter score for Quiz 4: 6
   Enter score for Quiz 5: 7

Student 4
   Enter score for Quiz 1: 4
   Enter score for Quiz 2: 5
   Enter score for Quiz 3: 6
   Enter score for Quiz 4: 7
   Enter score for Quiz 5: 8

Student 5
   Enter score for Quiz 1: 5
   Enter score for Quiz 2: 6
   Enter score for Quiz 3: 7
   Enter score for Quiz 4: 8
   Enter score for Quiz 5: 9

======= Quiz Results =======

Student 1
    Total score: 15.00
  Average score: 3.00

Student 2
    Total score: 20.00
  Average score: 4.00

Student 3
    Total score: 25.00
  Average score: 5.00

Student 4
    Total score: 30.00
  Average score: 6.00

Student 5
    Total score: 35.00
  Average score: 7.00

-----------------------------

Quiz 1
  Average score: 3.00
     High score: 5.00
      Low score: 1.00

Quiz 2
  Average score: 4.00
     High score: 6.00
      Low score: 2.00

Quiz 3
  Average score: 5.00
     High score: 7.00
      Low score: 3.00

Quiz 4
  Average score: 6.00
     High score: 8.00
      Low score: 4.00

Quiz 5
  Average score: 7.00
     High score: 9.00
      Low score: 5.00

$
$ ./a.out
How many students? 3
How many quizzes? 3

Student 1
   Enter score for Quiz 1: 89.5
   Enter score for Quiz 2: 99.7
   Enter score for Quiz 3: 90.3

Student 2
   Enter score for Quiz 1: 92.5
   Enter score for Quiz 2: 98.1
   Enter score for Quiz 3: 91.0

Student 3
   Enter score for Quiz 1: 89.5
   Enter score for Quiz 2: 96.5
   Enter score for Quiz 3: 99.4

======= Quiz Results =======

Student 1
    Total score: 279.50
  Average score: 93.17

Student 2
    Total score: 281.60
  Average score: 93.87

Student 3
    Total score: 285.40
  Average score: 95.13

-----------------------------

Quiz 1
  Average score: 90.50
     High score: 92.50
      Low score: 89.50

Quiz 2
  Average score: 98.10
     High score: 99.70
      Low score: 96.50

Quiz 3
  Average score: 93.57
     High score: 99.40
      Low score: 90.30

$

*/
