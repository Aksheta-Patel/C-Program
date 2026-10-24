/**

* @file strstr_example.c
* @brief Finds one string inside another string.
*
* @details
* The program uses strstr() to find the second string
* inside the first string.
  */

#include <stdio.h>
#include <string.h>

int main()
{
char name[50];
char str[50];
printf("Enter first string: ");
scanf("%s", name);
printf("Enter second string: ");
scanf("%s", str);
printf("%s", strstr(name, str));

}