/**

* @file copy_array_pointer.c
* @brief Copies elements from one array to another using pointers.
*
* @details
* The program takes elements of an array from the user and copies
* them into another array using pointers. The copied elements are
* then displayed using a pointer.
  */

#include <stdio.h>

/**

* @brief Main function of the program.
*
* @return Returns 0 after successful execution.
  */
  int main()
  {
  int n;
  int i;
  int a[100], b[100];
  int *p, *q;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  p = a;
  q = b;

  printf("Enter the elements: ");

  for(i = 0; i < n; i++)
  {
  scanf("%d", &a[i]);
  }

  printf("array b is : ");

  for(i = 0; i < n; i++)
  {
  *q = *p;


   printf("%d ", *q);

   p++;
   q++;


  }

  return 0;
  }
