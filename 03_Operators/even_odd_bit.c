/**

* @file odd_even_bitwise.c
* @brief Checks whether an integer is odd or even using bitwise AND.
*
* This program takes an integer from the user and uses the bitwise
* AND operator to determine whether the number is odd or even.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes an integer from the user.
* * Checks the last bit using the bitwise AND operator.
* * Displays whether the number is odd or even.
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

  if (a & 1)
  printf("The number is odd.\n");
  else
  printf("The number is even.\n");

  return 0;
  }
