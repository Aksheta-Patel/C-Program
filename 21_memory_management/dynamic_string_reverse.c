#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// code to reverse a dynamically allocated string

int main(void)
{
    char *p, temp;
    int i, j;
    p = malloc(100 * sizeof(char));

    if (p == NULL)
    {
        return 1;
    }

    printf("enter string: ");
    scanf("%s", p);

    i = 0;
    j = strlen(p) - 1;

    while (i < j)
    {
        temp = p[i];
        p[i] = p[j];
        p[j] = temp;

        i++;
        j--;
    }

    printf("reversed string: %s\n", p);
    free(p);
    return 0;
}