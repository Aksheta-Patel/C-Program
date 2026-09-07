#include <stdio.h>

/**

* @file array_frequency.c
* @brief Finds the frequency of each element in an array.
*
* @details
* This program accepts elements of an array from the user
* and counts how many times each element occurs in the array.
*
* @author
* @version 1.0
  */

/**

* @brief Entry point of the program.
*
* @details
* The function reads the array elements, compares each element
* with the remaining elements, and calculates its frequency.
*
* @return 0 Indicates successful execution of the program.
  */
  int main()
  {
  int a[10], n, i, j, count;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  printf("Enter elements: ");

  for(i = 0; i < n; i++)
  {
  scanf("%d", &a[i]);
  }

  for(i = 0; i < n; i++)
  {
  count = 1;


   for(j = i + 1; j < n; j++)
   {
       if(a[i] == a[j])
       {
           count++;
       }
   }

   printf("%d occurs %d time(s)\n", a[i], count);
  

  }

  return 0;
  }
