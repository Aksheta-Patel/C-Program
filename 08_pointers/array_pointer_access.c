/**

* @file array_pointer.c
* @brief Accesses array elements using a pointer.
*
* @details
* The program stores three integers in an array and uses a pointer
* to access and print each array element without using array indexing.
  */

#include <stdio.h>

/**

* @brief Main function of the program.
*
* @return Returns 0 after successful execution.
  */
  int main()
  {
  int a[3] = {1, 2, 3};
  int *p;
  int i;

  p = a;

  for(i = 0; i < 3; i++)
  {
  printf("%d\n", *p);
  p++;
  }
  }
