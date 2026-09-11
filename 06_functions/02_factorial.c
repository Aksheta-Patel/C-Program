#include <stdio.h>

/**

* @file factorial.c
* @brief Finds the factorial of a valid non-negative integer.
*
* @details
* The program accepts a non-negative integer from the user.
* If the user enters a negative number, the user is asked
* to enter the value again.
  */

/**

* @brief Finds the factorial of a number.
*
* @param n The non-negative number whose factorial is found.
* @return The factorial of n.
  */
  int factorial(int n);

/**

* @brief Main function of the program.
*
* @details
* The program takes a number from the user, checks whether
* it is non-negative, and calculates its factorial.
*
* @return 0 if the program executes successfully.
  */
  int main(void)
  {
  /** @brief Stores the number entered by the user. */
  int n;

  /** @details Continues until a valid non-negative number is entered. */
  while(1)
  {
  printf("Enter a number: ");
  scanf("%d", &n);

   if(n >= 0)
   {
       break;
   }

   printf("Invalid! Enter 0 or a positive number.\n");
  

  }

  printf("Factorial = %d", factorial(n));

  return 0;
  }

/**

* @brief Calculates the factorial using a for loop.
*
* @param n The non-negative number.
* @return The factorial of n.
  */
  int factorial(int n)
  {
  /** @brief Stores the factorial result. */
  int result = 1;

  /** @details Multiplies all integers from 1 to n. */
  for(int i = 1; i <= n; i++)
  {
  result = result * i;
  }

  return result;
  }
