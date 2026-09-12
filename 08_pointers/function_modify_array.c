/**

* @file array_function_pointer.c
* @brief Passes an array to a function using a pointer and modifies its elements.
*
* @details
* The program takes array elements from the user and passes the array
* to a function using a pointer. The function increases each element
* by 1 and the modified array is displayed.
  */

#include <stdio.h>

/**

* @brief Modifies the elements of an array using a pointer.
*
* @param p Pointer to the first element of the array.
* @param n Number of elements in the array.
  */
  void modify(int *p, int n)
  {
  int i;

  for(i = 0; i < n; i++)
  {
  *p = *p + 1;
  p++;
  }
  }

/**

* @brief Main function of the program.
*
* @return Returns 0 after successful execution.
  */
  int main()
  {
  int a[100], n, i;

  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter elements: ");
  for(i = 0; i < n; i++)
  {
  scanf("%d", &a[i]);
  }
  modify(a, n);
  for(i = 0; i < n; i++)
  {
  printf("%d ", a[i]);
  }
  return 0;
  }
