/**

* @file largest_of_three.c
* @brief Finds the largest of three integers.
*
* This program takes three integers from the user and compares
* them to find and display the largest value.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes three integers as input.
* * Compares the three values.
* * Finds the largest value.
* * Displays the largest value.
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
  printf("The largest number is %d.\n", a);
  else if (b >= a && b >= c)
  printf("The largest number is %d.\n", b);
  else
  printf("The largest number is %d.\n", c);

  return 0;
  }
