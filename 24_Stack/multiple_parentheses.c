#include <stdio.h>
int top = -1;
char par[20];

int main(void)
{
    char exp[20];
    int i;
    printf("enter Expression: ");
    scanf("%19s", exp);

    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            top++;
            par[top] = exp[i];
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (top == -1)
            {
                printf("Parentheses are not equal\n");
                return 0;
            }

            if ((exp[i] == ')' && par[top] != '(') ||
                (exp[i] == '}' && par[top] != '{') ||
                (exp[i] == ']' && par[top] != '['))
            {
                printf("Parentheses are not equal\n");
                return 0;
            }

            top--;
        }
    }

    if (top == -1)
    {
        printf("parentheses are equal\n");
    }
    else
    {
        printf("parentheses are not equal\n");
    }

    return 0;
}