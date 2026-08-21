#include <stdio.h>

int main()
{
    int choice, a, b;
    do
    {
        printf("\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
        }

        switch(choice)
        {
            case 1: printf("%d", a+b); 
            break;
            case 2: printf("%d", a-b); 
            break;
            case 3: printf("%d", a*b); 
            break;
            case 4: printf("%d", a/b); 
            break;
            case 5: printf("Exit"); 
            break;
            default: printf("Invalid choice");
        }

    } while(choice != 5);
 
}