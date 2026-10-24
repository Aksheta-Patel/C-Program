/**

* @file day_of_week.c
* @brief Displays the day of the week based on a number.
*
* This program takes a number from 1 to 7 from the user and
* displays the corresponding day of the week.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes a number from 1 to 7 from the user.
* * Checks the entered number.
* * Displays the corresponding day of the week.
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
  printf("Enter a number from 1 to 7: ");


   if (scanf("%d", &a) == 1 && a >= 1 && a <= 7)
   {
       break;
   }

   printf("Invalid input. Please enter a number from 1 to 7 again.\n");

   while (scanf("%c", &ch) == 1 && ch != '\n')
   {
   }
  

  }

  if (a == 1)
  {
  printf("The day is Monday.\n");
  }
  else if (a == 2)
  {
  printf("The day is Tuesday.\n");
  }
  else if (a == 3)
  {
  printf("The day is Wednesday.\n");
  }
  else if (a == 4)
  {
  printf("The day is Thursday.\n");
  }
  else if (a == 5)
  {
  printf("The day is Friday.\n");
  }
  else if (a == 6)
  {
  printf("The day is Saturday.\n");
  }
  else
  {
  printf("The day is Sunday.\n");
  }

  return 0;
  }
