/**

* @file function_pointer.c
* @brief Demonstrates a function pointer for addition and subtraction.
  */

#include <stdio.h>

/**

* @brief Adds two numbers.
  */
  int add(int a, int b)
  {
  return a + b;
  }

/**

* @brief Subtracts two numbers.
  */
  int subtract(int a, int b)
  {
  return a - b;
  }

/**

* @brief Main function of the program.
*
* @return Returns 0 after successful execution.
  */
  int main()
  {
  int a, b, choice, result;

  int (*p)(int, int);

  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);

  printf("1. Add\n");
  printf("2. Subtract\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);

  if(choice == 1)
  {
  p = add;
  }
  else
  {
  p = subtract;
  }

  result = p(a, b);

  printf("Result = %d\n", result);

  return 0;
  }
