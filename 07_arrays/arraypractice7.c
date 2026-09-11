#include <stdio.h>

int main()
{
int i, n, m, ch;
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
printf("enter element: ");
for(i = 0; i < n; i++)
{
    do
    {
        if(scanf("%d", &a[i]) == 1)
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
}

for(i = 0; i < n; i++)
{
    printf(" %d\n", a[i]);
}

do
{
    printf("enter number you want to check presence: ");
    if(scanf("%d", &m) == 1)
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

for(i = 0; i < n; i++)
{
    if(a[i] == m)
    {
        break;
    }
}

if(i < n)
{
    printf(" %d is present\n", m);
}
else
{
    printf(" %d is absent\n", m);
}

}
