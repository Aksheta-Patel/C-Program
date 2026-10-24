/**

* @file pass_fail_ternary.c
* @brief Checks whether a student has passed or failed using the ternary operator.
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
* * Checks the marks using the ternary operator.
* * Stores the result in result.
* * Displays whether the student has passed or failed.
*
* @return int Returns 0 on successful execution.
  */
  int main(void)
  {
  /** Stores the marks entered by the user */
  int marks;

  /** Stores the pass or fail result */
  char result;

  char ch;

  while (1)
  {
  printf("Enter marks: ");

   if (scanf("%d", &marks) == 1 && marks >= 0 && marks <= 100)
   {
       break;
   }

   printf("Invalid marks. Please enter marks from 0 to 100 again.\n");

   while (scanf("%c", &ch) == 1 && ch != '\n')
   {
   }
 

  }

  result = (marks >= 40) ? 'P' : 'F';

  if (result == 'P')
  {
  printf("The student has passed.\n");
  }
  else
  {
  printf("The student has failed.\n");
  }

  return 0;
  }
