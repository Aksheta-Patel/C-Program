#include<stdio.h>
int main()
{
    int age, salary;
    printf("Enter age and salary\n");
    scanf("%d %d",&age,&salary);

    if(age >= 21 && age <= 60)
    {
        if(salary > 25000)
        {
            printf("Loan approved");
        }
        else
        {
            printf("Loan not approved");
        }
    }
    else
    {
        printf("Loan not approved");
    }
}