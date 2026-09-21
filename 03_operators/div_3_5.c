/**

* @file divisible_by_both.c
* @brief Checks whether a number is divisible by both 3 and 5.
*
* This program takes an integer from the user and checks whether
* it is exactly divisible by both 3 and 5.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes an integer from the user.
* * Checks whether it is divisible by 3.
* * Checks whether it is divisible by 5.
* * Displays whether the number is divisible by both.
*
* @return int Returns 0 on successful execution.
  */
  int main(void)
  {
  /** Stores the number entered by the user */
  int n;

  char ch;

  while (1)
  {
  printf("Enter an integer: ");

 
   if (scanf("%d", &n) == 1)
   {
       break;
   }

   printf("Invalid input. Please enter an integer again.\n");

   while (scanf("%c", &ch) == 1 && ch != '\n')
   {
   }
  

  }

  if (n % 3 == 0 && n % 5 == 0)
  printf("The number is divisible by both 3 and 5.\n");
  else
  printf("The number is not divisible by both 3 and 5.\n");

  return 0;
  }
