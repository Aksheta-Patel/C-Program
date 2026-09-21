/**

* @file number_word.c
* @brief Displays the word corresponding to a number.
*
* This program takes a number from 1 to 3 from the user and
* displays the corresponding word using switch-case.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes a number from the user.
* * Uses switch-case to identify the number.
* * Displays the corresponding word.
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
  printf("Enter a number from 1 to 3: ");

  
   if (scanf("%d", &a) == 1 && a >= 1 && a <= 3)
   {
       break;
   }

   printf("Invalid input. Please enter a number from 1 to 3 again.\n");

   while (scanf("%c", &ch) == 1 && ch != '\n')
   {
   }
  

  }

  switch (a)
  {
  case 1:
  printf("The number is One.\n");
  break;

  
   case 2:
       printf("The number is Two.\n");
       break;

   case 3:
       printf("The number is Three.\n");
       break;

   default:
       printf("Invalid number.\n");
 

  }

  return 0;
  }
