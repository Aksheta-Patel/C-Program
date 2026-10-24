/**

* @file reverse_string.c
* @brief Reverses a string without using strrev().
  */

#include <stdio.h>
int main()
{
char str[100];
int i, length = 0;
printf("Enter a string: ");
scanf("%s", str);
while (str[length] != '\0')
{
    length++;
}
for (i = length - 1; i >= 0; i--)
{
    printf("%c", str[i]);
}
}
