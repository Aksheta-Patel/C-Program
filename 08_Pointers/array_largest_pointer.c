/**

* @file largest_pointer.c
* @brief Finds the largest element in an array using a pointer.
*
* @details
* The program reads elements into an array and finds the largest
* element. A pointer is used to access the largest variable.
  */

#include <stdio.h>

/**

* @brief Main function of the program.
*
* @return Returns 0 after successful execution.
  */
  int main()
  {
  int *p, *q;

  int a[100], n, i;
  int largest;

  p = a;
  q = &largest;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  printf("Enter elements: ");

  for(i = 0; i < n; i++)
  {
  scanf("%d", &a[i]);
  }

  largest = a[0];

  for(i = 1; i < n; i++)
  {
  if(a[i] > largest)
  largest = a[i];
  }

  printf("Largest = %d\n", *q);

  return 0;
  }
