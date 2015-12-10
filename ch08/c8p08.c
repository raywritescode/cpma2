/* c8p08.c

  C Programming: A Modern Approach, Second Edition
  Chapter 8, Programming Project 8

  Modify Programming Project 7 so that it prompts for five quiz grades
  for each of five students, then computes the total score and average
  score for each student, and the average score, high score, and low
  score for each quiz.

  Ray Santos
  December 9, 2015

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

   int i; // counter
   int j; // counter
   int number_of_quizzes;
   int number_of_students;
   int total_score;

   printf("How many students? ");
   scanf("%d", &number_of_students);

   printf("How many quizzes? ");
   scanf("%d", &number_of_quizzes);

   int student_quiz[number_of_students][number_of_quizzes];

   // Get quiz scores for each student
   for (i = 1; i <= number_of_students; i++) {
      printf("\nStudent %d\n", i);
      for (j = 1; j <= number_of_quizzes; j++) {
         printf("   Enter score for Quiz %d: ", j);
         scanf("%d", &student_quiz[i][j]);
      }    
   } 

   printf("\n======= Quiz Results =======\n\n");
  
   // Print the quiz results for each student
   for (i = 1; i <= number_of_students; i++) {
      total_score = 0;
      
      printf("Student %d\n", i);

      for (j = 1; j <= number_of_quizzes; j++) {
         total_score += student_quiz[i][j];
      }
      printf("    Total score: %d\n", total_score);
      printf("  Average score: %d\n\n", (total_score / number_of_quizzes));
   }

   // Print the average, high, and low scores for each quiz
   // TODO
  
   return 0;
}
