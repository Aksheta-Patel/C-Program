/**
 * @file reverse_array.c
 * @brief Takes array elements and prints them in reverse order.
 *
 * The program validates the number of elements and array elements.
 */

#include <stdio.h>

int main()
{
    int i, n;
    char ch;

    do
    {
        printf("enter num of elements: ");

        if(scanf("%d", &n) == 1 && n > 0)
        {
            break;
        }
        else
        {
            printf("invalid input! enter num only\n");

            while(scanf("%c", &ch) == 1 && ch != '\n')
            {
            }
        }

    } while(1);

    int a[n];

    do
    {
        printf("enter elements: ");

        if(scanf("%d", &a[0]) == 1)
        {
            break;
        }
        else
        {
            printf("invalid input! enter num only\n");

            while(scanf("%c", &ch) == 1 && ch != '\n')
            {
            }
        }

    } while(1);

    for(i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
}