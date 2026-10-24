/**

* @file pointer_array.c
* @brief Accesses array elements using a pointer in forward and reverse order.
*
* @details
* The program uses a pointer to access and print array elements.
* First, the elements are printed from the first element to the last.
* Then, the pointer is moved backward and the elements are printed
* from the last element to the first.
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

  p--;

  for(i = 2; i >= 0; i--)
  {
  printf("%d\n", *p);
  p--;
  }

  return 0;
  }
