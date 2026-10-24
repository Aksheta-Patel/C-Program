/**

* @file positive_negative_zero.c
* @brief Checks whether an integer is positive, negative, or zero.
*
* This program takes an integer from the user and checks whether
* the entered value is positive, negative, or zero.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes an integer from the user.
* * Checks whether the integer is greater than zero.
* * Checks whether the integer is less than zero.
* * Displays whether the integer is positive, negative, or zero.
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

  if (a > 0)
  printf("The number is positive.\n");
  else if (a < 0)
  printf("The number is negative.\n");
  else
  printf("The number is zero.\n");

  return 0;
  }
