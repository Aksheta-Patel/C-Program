#include <stdio.h>
int top = -1;
char par[20];

int main(void)
{
    char exp[20];
    int i;
    printf("enter expression: ");
    scanf("%19s", exp);

    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            top++;
            par[top] = '(';
        }
        else if (exp[i] == ')')
        {
            if (top == -1)
            {
                printf("parenthesis is not equal\n");
                return 0;
            }

            top--;
        }
    }

    if (top == -1)
    {
        printf("parenthesis is equal\n");
    }
    else
    {
        printf("parenthesis is not equal\n");
    }

    return 0;
}