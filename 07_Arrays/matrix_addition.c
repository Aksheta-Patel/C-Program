#include <stdio.h>

/**

* @file matrix_addition.c
* @brief Adds two matrices.
*
* @details
* This program takes two matrices as input and adds them.
* Matrix addition is possible only when both matrices
* have the same number of rows and columns.
  */

/**

* @brief Main function.
*
* @return 0 Program executed successfully.
  */
  int main()
  {
  int a[10][10], b[10][10], result[10][10];
  int r1, c1, r2, c2;
  int i, j;

  printf("Enter rows and columns of first matrix: ");
  scanf("%d%d", &r1, &c1);

  printf("Enter rows and columns of second matrix: ");
  scanf("%d%d", &r2, &c2);

  if(r1 != r2 || c1 != c2)
  {
  printf("Addition not possible\n");
  return 0;
  }

  printf("Enter first matrix:\n");

  for(i = 0; i < r1; i++)
  {
  for(j = 0; j < c1; j++)
  {
  scanf("%d", &a[i][j]);
  }
  }

  printf("Enter second matrix:\n");

  for(i = 0; i < r2; i++)
  {
  for(j = 0; j < c2; j++)
  {
  scanf("%d", &b[i][j]);
  }
  }

  for(i = 0; i < r1; i++)
  {
  for(j = 0; j < c1; j++)
  {
  result[i][j] = a[i][j] + b[i][j];
  }
  }

  printf("Resultant matrix:\n");

  for(i = 0; i < r1; i++)
  {
  for(j = 0; j < c1; j++)
  {
  printf("%d ", result[i][j]);
  }


   printf("\n");


  }

  return 0;
  }
