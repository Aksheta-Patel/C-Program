#include <stdio.h>

/**

* @file array_input_output.c
* @brief Takes elements into a 2D array and prints its transpose.
*
* @details
* The program accepts elements into a 2D array and displays
* the original array and its transpose.
  */

/**

* @brief Global loop counters.
  */
  int i, j;

/**

* @brief Global 2D integer arrays.
  */
  int a[2][2], b[2][2];

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
  for(j = 0; j < 2; j++)
  {
  scanf("%d", &a[i][j]);
  }
  }

  printf("Original matrix:\n");

  for(i = 0; i < 2; i++)
  {
  for(j = 0; j < 2; j++)
  {
  printf("%d ", a[i][j]);

  
   printf("\n");


  }

  printf("Transpose:\n");

  for(i = 0; i < 2; i++)
  {
  for(j = 0; j < 2; j++)
  {
  b[j][i] = a[i][j];
  }
  }

  for(i = 0; i < 2; i++)
  {
  for(j = 0; j < 2; j++)
  {
  printf("%d ", b[i][j]);
  }
   printf("\n");


  }

  return 0;
  }}
