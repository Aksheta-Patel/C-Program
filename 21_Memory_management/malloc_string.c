#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// code of malloc for strings

int main()
{
    char *p;
    p = malloc(20 * sizeof(char));// Allocate memory for string

    if(p == NULL)
    {
        return 1;
    }

    strcpy(p, "Hello\n");// Copy string into memory
    printf("%s", p);                        
    free(p);                                
    return 0;
}