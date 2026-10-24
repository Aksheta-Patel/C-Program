/**

* @file even_odd.c
* @brief Checks whether an integer is even or odd.
*
* This program takes an integer from the user and checks whether
* it is divisible by 2.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes an integer from the user.
* * Checks whether the integer is divisible by 2.
* * Displays whether the number is even or odd.
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

  if (a % 2 == 0)
  {
  printf("The number is even.\n");
  }
  else
  {
  printf("The number is odd.\n");
  }

  return 0;
  }
