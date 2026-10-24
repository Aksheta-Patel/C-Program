#include <stdio.h>

/**

* @file string_length.c
* @brief Finds the length of a string using a user-defined function.
* @details Finds string length without using strlen().
  */

int length(char str[])
{
int i;
// to find length
for(i = 0; str[i] != 0; i++)
{
}
  return i;
}

int main()
{
  char str[30];
  int result;
  printf(" enter string: ");
  scanf("%s", str);
  result = length(str);
  printf(" length = %d", result);

}
