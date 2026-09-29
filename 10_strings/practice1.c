#include <stdio.h>

/**

* @file string_concatenate.c
* @brief Concatenates two strings using a user-defined function.
* @details Uses a for loop to find string lengths and concatenate strings.
  */

void concatenate(char s1[], char s2[])
{
  int len1 = 0, len2 = 0, i;
  // to find length 1
  for(i = 0; s1[i] != '\0'; i++)
  {
    len1++;
  }
  // to find length 2
  for(i = 0; s2[i] != '\0'; i++)
  {
    len2++;
  }
  // to add both strings 
  for(i = 0; i <= len2; i++)
  {
    s1[len1 + i] = s2[i];
  }

}

int main()
{
  char s1[10] = "ok";
  char s2[3] = "hm";
  concatenate(s1, s2);
  printf("%s", s1);

}
