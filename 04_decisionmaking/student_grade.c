#include <stdio.h>
int main()
{
    int choice, marks;

    printf("1. Check Grade\n");
    printf("2. Check Result\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter marks: ");
            scanf("%d", &marks);

            if(marks >= 60)
                printf("Grade A");
            else
                printf("Grade B");

            break;

        case 2:
            printf("Enter marks: ");
            scanf("%d", &marks);

            if(marks >= 35)
                printf("Pass");
            else
                printf("Fail");

            break;

        default:
            if(choice != 1 && choice != 2)
                printf("Invalid choice");
    }

}