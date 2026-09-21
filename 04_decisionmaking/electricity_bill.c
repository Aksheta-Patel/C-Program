/**

* @file electricity_bill.c
* @brief Calculates an electricity bill based on unit slabs.
*
* This program takes the number of electricity units from the user
* and calculates the bill using different rates for different slabs.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes the number of units from the user.
* * Calculates the bill according to the unit slabs.
* * Displays the total electricity bill.
* * Asks the user to enter again if the input is invalid.
*
* @return int Returns 0 on successful execution.
  */
  int main(void)
  {
  /** Stores the number of units consumed */
  int a;

  /** Stores the electricity bill */
  int bill;

  char ch;

  while (1)
  {
  printf("Enter the number of units: ");

  
   if (scanf("%d", &a) == 1 && a >= 0)
   {
       break;
   }

   printf("Invalid input. Please enter a non-negative number of units again.\n");

   while (scanf("%c", &ch) == 1 && ch != '\n')
   {
   }


  }

  if (a <= 100)
  {
  bill = a * 2;
  }
  else if (a <= 200)
  {
  bill = 100 * 2 + (a - 100) * 4;
  }
  else if (a <= 400)
  {
  bill = 100 * 2 + 100 * 4 + (a - 200) * 6;
  }
  else
  {
  bill = 100 * 2 + 100 * 4 + 200 * 6 + (a - 400) * 8;
  }

  printf("The electricity bill is %d.\n", bill);

  return 0;
  }
