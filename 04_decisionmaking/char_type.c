/**

* @file character_type.c
* @brief Identifies the type of a character.
*
* This program takes a character from the user and checks whether
* it is an uppercase letter, lowercase letter, digit, or special character.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes a character from the user.
* * Checks whether it is an uppercase letter.
* * Checks whether it is a lowercase letter.
* * Checks whether it is a digit.
* * Otherwise identifies it as a special character.
*
* @return int Returns 0 on successful execution.
  */
  int main(void)
  {
  /** Stores the character entered by the user */
  char a;

  char ch;

  while (1)
  {
  printf("Enter a character: ");

  
   if (scanf(" %c", &a) == 1)
   {
       break;
   }

   printf("Invalid input. Please enter a character again.\n");

   while (scanf("%c", &ch) == 1 && ch != '\n')
   {
   }
  

  }

  if (a >= 'A' && a <= 'Z')
  {
  printf("The entered character is an uppercase letter.\n");
  }
  else if (a >= 'a' && a <= 'z')
  {
  printf("The entered character is a lowercase letter.\n");
  }
  else if (a >= '0' && a <= '9')
  {
  printf("The entered character is a digit.\n");
  }
  else
  {
  printf("The entered character is a special character.\n");
  }

  return 0;
  }
