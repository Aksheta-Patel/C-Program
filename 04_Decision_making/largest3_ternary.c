/**

* @file pass_fail.c
* @brief Checks whether a student has passed or failed.
*
* This program takes marks from the user and uses the ternary
* operator to determine whether the student has passed or failed.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes marks from the user.
* * Validates that the marks are between 0 and 100.
* * Uses the ternary operator to check whether the marks are above 35.
* * Displays whether the student has passed or failed.
*
* @return int Returns 0 on successful execution.
  */
  int main(void)
  {
  /** Stores the marks entered by the user */
  int a;

  /** Stores 'p' for pass and 'f' for fail */
  char result;

  char ch;

  while (1)
  {
  printf("Enter marks between 0 and 100: ");

 
   if (scanf("%d", &a) == 1 && a >= 0 && a <= 100)
   {
       break;
   }

   printf("Invalid marks. Please enter a value between 0 and 100 again.\n");

   while (scanf("%c", &ch) == 1 && ch != '\n')
   {
   }
  

  }

  result = (a > 35) ? 'p' : 'f';

  if (result == 'p')
  printf("The student has passed.\n");
  else
  printf("The student has failed.\n");

  return 0;
  }
