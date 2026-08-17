#include <stdio.h>

int main()
{
int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice < 1 || choice > 4)
    {
        printf("Invalid choice! Enter again: ");
        scanf("%d", &choice);
    }

    switch(choice)
    {
        case 1:
         printf("Result = %d", a + b);
      break;

        case 2:
     printf("Result = %d", a - b);
            break;
        case 3:
      printf("Result = %d", a * b);
            break;

        case 4:
            printf("Result = %d", a / b);
   break;
        default:
            printf("Invalid choice");
    }

    return 0;
}