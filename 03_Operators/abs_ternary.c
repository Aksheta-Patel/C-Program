/**

* @file absolute_value.c
* @brief Finds the absolute value of an integer.
*
* This program takes an integer from the user and uses the
* ternary operator to find its absolute value.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes an integer from the user.
* * Checks whether the number is negative.
* * Converts a negative number to its positive value.
* * Displays the absolute value.
*
* @return int Returns 0 on successful execution.
  */
  int main(void)
  {
  /** Stores the number entered by the user */
  int a;

  /** Stores the absolute value of the number */
  int result;

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

  result = (a < 0) ? -a : a;

  printf("Absolute value is %d\n", result);

  return 0;
  }
