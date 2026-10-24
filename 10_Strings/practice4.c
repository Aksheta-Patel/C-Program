#include <stdio.h>

/**

* @file string_copy.c
* @brief Copies one string to another using a user-defined function.
* @details Copies a string without using strcpy().
  */

void copy(char a[], char b[])
{
int i;
for(i = 0; a[i] != 0; i++)
{ // copying content of a into b 
  b[i] = a[i];
}
  // adding null 
  b[i] = 0;
}

int main()
{
  char a[30];
  char b[30];
  printf(" enter string: ");
  scanf("%s", a);
  copy(a, b);
  printf(" copied string = %s", b);
}
