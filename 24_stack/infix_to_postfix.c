#include <stdio.h>
int main(void)
{
    char infix[20], stack[20];
    int i, top = -1;
    printf("enter infix expression: ");
    scanf("%19s", infix);

    for (i = 0; infix[i] != '\0'; i++)
    {
        if ((infix[i] >= 'A' && infix[i] <= 'Z') || (infix[i] >= 'a' && infix[i] <= 'z') ||(infix[i] >= '0' && infix[i] <= '9'))
        {
            printf("%c", infix[i]);
        }
        else if (infix[i] == '(')
        {
            top++;
            stack[top] = infix[i];
        }
        else if (infix[i] == ')')
        {
            while (top != -1 && stack[top] != '(')
            {
                printf("%c", stack[top]);
                top--;
            }

            if (top != -1)
            {
                top--;
            }
        }
        else
        {
            while (top != -1 && stack[top] != '(' &&((infix[i] == '+' || infix[i] == '-') ||((infix[i] == '*' || infix[i] == '/') &&(stack[top] == '*' || stack[top] == '/'))))
            {
                printf("%c", stack[top]);
                top--;
            }

            top++;
            stack[top] = infix[i];
        }
    }

    while (top != -1)
    {
        printf("%c", stack[top]);
        top--;
    }
    printf("\n");
    return 0;
}

