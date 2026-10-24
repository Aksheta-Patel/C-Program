/**

* @file array_insert_delete.c
* @brief Performs insertion and deletion in an array with validation.
*
* The program takes array elements from the user and allows
* insertion or deletion at a valid position.
  */

#include <stdio.h>

int main()
{
int a[100], n, i;
int choice, element, position;
char ch;
do
{
    printf("Enter number of elements: ");

    if(scanf("%d", &n) == 1 && n > 0 && n < 100)
    {
        break;
    }
    else
    {
        printf("invalid input! enter a valid number.\n");

        while(scanf("%c", &ch) == 1 && ch != '\n')
        {
        }
    }

} while(1);

printf("Enter elements: ");

for(i = 0; i < n; i++)
{
    while(scanf("%d", &a[i]) != 1)
    {
        printf("invalid input! enter number: ");

        while(scanf("%c", &ch) == 1 && ch != '\n')
        {
        }
    }
}

do
{
    printf("\n1 insertion");
    printf("\n2 deletion");
    printf("\nenter your choice: ");

    if(scanf("%d", &choice) == 1 && (choice == 1 || choice == 2))
    {
        break;
    }
    else
    {
        printf("invalid choice! Enter 1 or 2.\n");

        while(scanf("%c", &ch) == 1 && ch != '\n')
        {
        }
    }

} while(1);

if(choice == 1)
{
    printf("enter element to insert: ");

    while(scanf("%d", &element) != 1)
    {
        printf("invalid input! enter number: ");

        while(scanf("%c", &ch) == 1 && ch != '\n')
        {
        }
    }

    do
    {
        printf("enter position: ");

        if(scanf("%d", &position) == 1 && position >= 1 && position <= n + 1)
        {
            break;
        }
        else
        {
            printf("invalid position! enter position till %d.\n", n + 1);

            while(scanf("%c", &ch) == 1 && ch != '\n')
            {
            }
        }

    } while(1);

    for(i = n; i >= position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position - 1] = element;
    n++;

       for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
else
{
    do
    {
        printf("Enter position to delete: ");

        if(scanf("%d", &position) == 1 && position >= 1 && position <= n)
        {
            break;
        }
        else
        {
            printf("Invalid position! Enter position from till %d.\n", n);

            while(scanf("%c", &ch) == 1 && ch != '\n')
            {
            }
        }

    } while(1);

    for(i = position - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

}
