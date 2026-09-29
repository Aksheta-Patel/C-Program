/**

* @file word_count.c
* @brief Counts the number of words in a string.
  */

#include <stdio.h>

int main()
{
char str[100];
int i, words = 1;
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
for (i = 0; str[i] != '\0'; i++)
{
    if (str[i] == ' ')
    {
        words++;
    }
}

printf("Number of words = %d", words);
}
  