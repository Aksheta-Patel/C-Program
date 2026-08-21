#include <stdio.h>

int main()
{
    int n, pass;

    for(n = 1; n <= 3; n++)
    {
        printf("Enter password: ");
        scanf("%d", &pass);

        if(pass == 7777)
        {
            printf("Login successful");
            break;
        }

        else
        printf("Wrong password\n");
    }

}