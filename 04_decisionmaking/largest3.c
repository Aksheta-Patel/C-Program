/**

* @file largest_of_three.c
* @brief Finds the largest of three integers.
*
* This program takes three integers from the user and determines
* the largest number using if-else statements.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes three integers from the user.
* * Compares the three integers.
* * Displays the largest number.
* * Handles equal values correctly.
*
* @return int Returns 0 on successful execution.
  */
  int main(void)
  {
  /** Stores the first integer */
  int a;

  /** Stores the second integer */
  int b;

  /** Stores the third integer */
  int c;

  char ch;

  while (1)
  {
  printf("Enter three integers: ");

 
   if (scanf("%d %d %d", &a, &b, &c) == 3)
   {
       break;
   }

   printf("Invalid input. Please enter three integers again.\n");

   while (scanf("%c", &ch) == 1 && ch != '\n')
   {
   }
  

  }

  if (a >= b && a >= c)
  {
  printf("The largest number is %d.\n", a);
  }
  else if (b >= a && b >= c)
  {
  printf("The largest number is %d.\n", b);
  }
  else
  {
  printf("The largest number is %d.\n", c);
  }

  return 0;
  }
