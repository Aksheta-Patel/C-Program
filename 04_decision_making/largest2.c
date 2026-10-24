/**

* @file compare_numbers.c
* @brief Compares two integers.
*
* This program takes two integers from the user and determines
* which number is greater or whether both numbers are equal.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes two integers from the user.
* * Compares the two integers.
* * Displays the greater number.
* * Displays a message if both numbers are equal.
*
* @return int Returns 0 on successful execution.
  */
  int main(void)
  {
  /** Stores the first integer */
  int a;

  /** Stores the second integer */
  int b;

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

  if (a > b)
  {
  printf("The first number is greater.\n");
  }
  else if (b > a)
  {
  printf("The second number is greater.\n");
  }
  else
  {
  printf("Both numbers are equal.\n");
  }

  return 0;
  }
