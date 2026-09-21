/**

* @file maximum_two.c
* @brief Finds the maximum of two integers using the ternary operator.
*
* This program takes two integers from the user and uses the
* ternary operator to find the larger value.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes two integers from the user.
* * Compares the two integers using the ternary operator.
* * Stores the larger value in result.
* * Displays the maximum value.
*
* @return int Returns 0 on successful execution.
  */
  int main(void)
  {
  /** Stores the first integer */
  int a;

  /** Stores the second integer */
  int b;

  /** Stores the maximum value */
  int result;

  char ch;

  while (1)
  {
  printf("Enter two integers: ");

  
   if (scanf("%d %d", &a, &b) == 2)
   {
       break;
   }

   printf("Invalid input. Please enter two integers again.\n");

   while (scanf("%c", &ch) == 1 && ch != '\n')
   {
   }
  

  }

  result = (a > b) ? a : b;

  printf("The maximum value is %d.\n", result);

  return 0;
  }
