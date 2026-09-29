#include <stdio.h>

int main()
{
    int sum, digits, i;

    printf("Enter sum and number of digits: ");
    scanf("%d %d", &sum, &digits);

    for(i = 0; i < digits; i++)
    {
        if(sum >= 9)
        {
            printf("9");
            sum = sum - 9;
        }
        else
        {
            printf("%d", sum);
            sum = 0;
        }
    }
}