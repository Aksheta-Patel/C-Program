/**

* @file remove_duplicates.c
* @brief Removes duplicate characters from a string.
*
* @details
* The program removes repeated characters from the string.
  */

#include <stdio.h>

int main()
{
char str1[100];
int i, j;
printf("Enter a string: ");
fgets(str1, sizeof(str1), stdin);

for(i = 0; str1[i] != '\0'; i++)
{
    for(j = i + 1; str1[j] != '\0'; j++)
    {
        if(str1[i] == str1[j])
        {
            str1[j] = str1[j + 1];
            j--;
        }
    }
}
printf("%s", str1);
}
