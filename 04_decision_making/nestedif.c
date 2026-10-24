/**

* @file male_adult.c
* @brief Checks whether a male is an adult.
*
* This program takes gender and age from the user and checks
* whether the person is a male above 20 years of age.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes gender from the user.
* * Takes age from the user.
* * Checks whether the gender is male.
* * Checks whether the age is above 20.
* * Displays the result.
* * Asks the user to enter again if the input is invalid.
*
* @return int Returns 0 on successful execution.
  */
  int main(void)
  {
  /** Stores the gender entered by the user */
  char gender;

  /** Stores the age entered by the user */
  int age;

  char ch;

  while (1)
  {
  printf("Enter gender (M/F): ");

   if (scanf(" %c", &gender) == 1 &&
       (gender == 'M' || gender == 'm' ||
        gender == 'F' || gender == 'f'))
   {
       break;
   }

   printf("Invalid gender. Please enter M or F again.\n");

   while (scanf("%c", &ch) == 1 && ch != '\n')
   {
   }
  

  }

  while (1)
  {
  printf("Enter age: ");

  
   if (scanf("%d", &age) == 1 && age >= 0)
   {
       break;
   }

   printf("Invalid age. Please enter a non-negative age again.\n");

   while (scanf("%c", &ch) == 1 && ch != '\n')
   {
   }
  

  }

  if (gender == 'M' || gender == 'm')
  {
  if (age > 20)
  {
  printf("The male is an adult.\n");
  }
  else
  {
  printf("The male is not an adult.\n");
  }
  }
  else
  {
  printf("The person is not male.\n");
  }

  return 0;
  }
