/**

* @file array_input_output.c
* @brief Takes two elements into an array and prints them.
*
* The program declares a global array and accepts two integer
* elements from the user. It then displays the entered elements.
  */

#include <stdio.h>

/**

* @brief Global loop counter.
  */
  int i;

/**

* @brief Global integer array.
*
* Note: The array should have enough space for the elements
* being accessed.
  */
  int a[2];

/**

* @brief Main function of the program.
*
* @return 0 Program executed successfully.
  */
  int main()
  {
  printf("Enter the elements: ");

  for(i = 0; i < 2; i++)
  {
  scanf("%d", &a[i]);
  }

  for(i = 0; i < 2; i++)
  {
  printf("%d", a[i]);
  }

  return 0;
  }
