/**

* @file calculator.c
* @brief Performs basic calculator operations using functions and switch-case.
*
* The program accepts two positive integers and allows the user
* to perform different arithmetic operations repeatedly.
*
* @return Returns 0 after successful execution.
  */

#include <stdio.h>

/**

* @brief Adds two numbers.
*
* @param a First number.
* @param b Second number.
* @return Sum of a and b.
  */
  int add(int a, int b)
  {
  return a + b;
  }

/**

* @brief Subtracts two numbers.
*
* @param a First number.
* @param b Second number.
* @return Difference of a and b.
  */
  int subtract(int a, int b)
  {
  return a - b;
  }

/**

* @brief Multiplies two numbers.
*
* @param a First number.
* @param b Second number.
* @return Product of a and b.
  */
  int multiply(int a, int b)
  {
  return a * b;
  }

/**

* @brief Divides two numbers.
*
* @param a First number.
* @param b Second number.
* @return Quotient of a and b.
  */
  int divide(int a, int b)
  {
  return a / b;
  }

/**

* @brief Main function of the program.
*
* @return 0 after successful execution.
  */
  int main()
  {
  int a, b, choice;
  char ch;

  do
  {
  printf("\nEnter two positive numbers: ");


   if(scanf("%d%d", &a, &b) == 2)
   {
       if(a > 0 && b > 0)
       {
           break;
       }

       printf("Enter positive numbers only.\n");
   }
   else
   {
       printf("Invalid input!\n");

       while(scanf("%c", &ch) == 1 && ch != '\n')
       {
       }
   }
  

  } while(1);

  do
  {
  printf("\n1. Addition");
  printf("\n2. Subtraction");
  printf("\n3. Multiplication");
  printf("\n4. Division");
  printf("\n5. Exit");


   printf("\nEnter your choice: ");
   scanf("%d", &choice);

   switch(choice)
   {
       case 1:
           printf("Result = %d\n", add(a, b));
           break;

       case 2:
           printf("Result = %d\n", subtract(a, b));
           break;

       case 3:
           printf("Result = %d\n", multiply(a, b));
           break;

       case 4:
           printf("Result = %d\n", divide(a, b));
           break;

       case 5:
           printf("exit.\n");
           break;

       default:
           printf("Invalid choice!\n");
   }
  
  } while(choice != 5);

  return 0;
  }
