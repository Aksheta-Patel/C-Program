#include <stdio.h>
#include <string.h>

/**

* @file strtok_example.c
* @brief Demonstrates the use of strtok().
* @details Splits a string into tokens using a delimiter.
  */

int main()
{
char str[100] = "apple,banana,mango";
char *result;

result = strtok(str, ",");

while(result != NULL)
{
    printf("%s\n", result);
    result = strtok(NULL, ",");
}

}
