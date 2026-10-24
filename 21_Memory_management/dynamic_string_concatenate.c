#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// code to concatenate two strings

int main(void)
{
    char s1[20], s2[20], *p;

    printf("enter first string: ");
    scanf("%s", s1);
    printf("enter second string: ");
    scanf("%s", s2);

    p = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

    if (p == NULL)
    {
        return 1;
    }

    strcpy(p, s1);
    strcat(p, s2);
    printf("concatenated string: %s\n", p);
    free(p);

    return 0;
}