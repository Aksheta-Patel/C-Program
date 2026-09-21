/**

* @file divisible_by_5_and_11.c
* @brief Checks whether a number is divisible by both 5 and 11.
*
* This program takes an integer from the user and checks whether
* it is divisible by both 5 and 11.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes an integer from the user.
* * Checks whether the number is divisible by both 5 and 11.
* * Displays the result.
* * Asks the user to enter again if the input is invalid.
*
* @return int Returns 0 on successful execution.
  */
  int main(void)
  {
  /** Stores the number entered by the user */
  int a;

  char ch;

  while (1)
  {
  printf("Enter an integer: ");

  
   if (scanf("%d", &a) == 1)
   {
       break;
   }

   printf("Invalid input. Please enter an integer again.\n");

   while (scanf("%c", &ch) == 1 && ch != '\n')
   {
   }
 

  }

  if (a % 5 == 0 && a % 11 == 0)
  {
  printf("The number is divisible by both 5 and 11.\n");
  }
  else
  {
  printf("The number is not divisible by both 5 and 11.\n");
  }

  return 0;
  }
